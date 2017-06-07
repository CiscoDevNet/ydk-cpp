
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_153.hpp"
#include "Cisco_IOS_XE_native_154.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Line::Vty::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{
    yang_name = "padding"; yang_parent_name = "vty";
}

Native::Line::Vty::Padding::~Padding()
{
}

bool Native::Line::Vty::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Vty::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation)
	|| is_set(null.operation);
}

std::string Native::Line::Vty::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.operation)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Padding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "character")
    {
        character = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Line::Vty::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{
    yang_name = "parity"; yang_parent_name = "vty";
}

Native::Line::Vty::Parity::~Parity()
{
}

bool Native::Line::Vty::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Vty::Parity::has_operation() const
{
    return is_set(operation)
	|| is_set(even.operation)
	|| is_set(mark.operation)
	|| is_set(none.operation)
	|| is_set(odd.operation)
	|| is_set(space.operation);
}

std::string Native::Line::Vty::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Parity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.operation)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.operation)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.operation)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.operation)) leaf_name_data.push_back(space.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Parity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "even")
    {
        even = value;
    }
    if(value_path == "mark")
    {
        mark = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "odd")
    {
        odd = value;
    }
    if(value_path == "space")
    {
        space = value;
    }
}

Native::Line::Vty::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "password"; yang_parent_name = "vty";
}

Native::Line::Vty::Password::~Password()
{
}

bool Native::Line::Vty::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::Vty::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Line::Vty::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Line::Vty::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{
    yang_name = "prc"; yang_parent_name = "vty";
}

Native::Line::Vty::Prc::~Prc()
{
}

bool Native::Line::Vty::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Vty::Prc::has_operation() const
{
    return is_set(operation)
	|| is_set(expose.operation)
	|| is_set(hide.operation);
}

std::string Native::Line::Vty::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Prc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.operation)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.operation)) leaf_name_data.push_back(hide.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Prc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expose")
    {
        expose = value;
    }
    if(value_path == "hide")
    {
        hide = value;
    }
}

Native::Line::Vty::Privilege::Privilege()
    :
    level(nullptr) // presence node
{
    yang_name = "privilege"; yang_parent_name = "vty";
}

Native::Line::Vty::Privilege::~Privilege()
{
}

bool Native::Line::Vty::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Vty::Privilege::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Vty::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Privilege::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Privilege' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Vty::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::Vty::Privilege::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{
    yang_name = "level"; yang_parent_name = "privilege";
}

Native::Line::Vty::Privilege::Level::~Level()
{
}

bool Native::Line::Vty::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::Vty::Privilege::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Line::Vty::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Privilege::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Privilege::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Line::Vty::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{
    yang_name = "session-timeout"; yang_parent_name = "vty";
}

Native::Line::Vty::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Vty::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::Vty::SessionTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation)
	|| is_set(session_timeout_value.operation);
}

std::string Native::Line::Vty::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::SessionTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionTimeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.operation)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::SessionTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output = value;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
    }
}

Native::Line::Vty::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{
    yang_name = "timeout"; yang_parent_name = "vty";
}

Native::Line::Vty::Timeout::~Timeout()
{
}

bool Native::Line::Vty::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::Vty::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Native::Line::Vty::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.operation)) leaf_name_data.push_back(login.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
    }
}

Native::Line::Vty::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{
    yang_name = "telnet"; yang_parent_name = "vty";
}

Native::Line::Vty::Telnet::~Telnet()
{
}

bool Native::Line::Vty::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::Vty::Telnet::has_operation() const
{
    return is_set(operation)
	|| is_set(transparent.operation);
}

std::string Native::Line::Vty::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Telnet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Telnet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.operation)) leaf_name_data.push_back(transparent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Telnet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Line::Vty::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Vty::Transport::Input>())
	,output(std::make_shared<Native::Line::Vty::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;

    output->parent = this;

    yang_name = "transport"; yang_parent_name = "vty";
}

Native::Line::Vty::Transport::~Transport()
{
}

bool Native::Line::Vty::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Vty::Transport::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Vty::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Vty::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Vty::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Vty::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    if(preferred != nullptr)
    {
        children["preferred"] = preferred;
    }

    return children;
}

void Native::Line::Vty::Transport::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{
    yang_name = "input"; yang_parent_name = "transport";
}

Native::Line::Vty::Transport::Input::~Input()
{
}

bool Native::Line::Vty::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Vty::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(input.operation);
}

std::string Native::Line::Vty::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Transport::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Transport::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

Native::Line::Vty::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{
    yang_name = "output"; yang_parent_name = "transport";
}

Native::Line::Vty::Transport::Output::~Output()
{
}

bool Native::Line::Vty::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Vty::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Line::Vty::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Transport::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Transport::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

Native::Line::Vty::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "preferred"; yang_parent_name = "transport";
}

Native::Line::Vty::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Vty::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::Vty::Transport::Preferred::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Line::Vty::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Transport::Preferred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Preferred' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Transport::Preferred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Line::Vty::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "usb-inactivity-timeout"; yang_parent_name = "vty";
}

Native::Line::Vty::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Vty::UsbInactivityTimeout::has_data() const
{
    return switch.is_set;
}

bool Native::Line::Vty::UsbInactivityTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::Line::Vty::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::UsbInactivityTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UsbInactivityTimeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::UsbInactivityTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Line::Vty::VacantMessage::VacantMessage()
    :
    banner{YType::str, "banner"}
{
    yang_name = "vacant-message"; yang_parent_name = "vty";
}

Native::Line::Vty::VacantMessage::~VacantMessage()
{
}

bool Native::Line::Vty::VacantMessage::has_data() const
{
    return banner.is_set;
}

bool Native::Line::Vty::VacantMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(banner.operation);
}

std::string Native::Line::Vty::VacantMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacant-message";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::VacantMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VacantMessage' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner.is_set || is_set(banner.operation)) leaf_name_data.push_back(banner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::VacantMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::VacantMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::VacantMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "banner")
    {
        banner = value;
    }
}

Native::Ntp::Ntp()
    :
    authenticate{YType::empty, "Cisco-IOS-XE-ntp:authenticate"},
    broadcastdelay{YType::uint32, "Cisco-IOS-XE-ntp:broadcastdelay"},
    clock_period{YType::uint32, "Cisco-IOS-XE-ntp:clock-period"},
    logging{YType::empty, "Cisco-IOS-XE-ntp:logging"},
    max_associations{YType::uint32, "Cisco-IOS-XE-ntp:max-associations"},
    maxdistance{YType::uint8, "Cisco-IOS-XE-ntp:maxdistance"},
    mindistance{YType::uint16, "Cisco-IOS-XE-ntp:mindistance"},
    orphan{YType::uint8, "Cisco-IOS-XE-ntp:orphan"},
    passive{YType::empty, "Cisco-IOS-XE-ntp:passive"},
    update_calendar{YType::empty, "Cisco-IOS-XE-ntp:update-calendar"}
    	,
    access_group(std::make_shared<Native::Ntp::AccessGroup>())
	,allow(std::make_shared<Native::Ntp::Allow>())
	,master(nullptr) // presence node
	,panic(std::make_shared<Native::Ntp::Panic>())
	,peer(std::make_shared<Native::Ntp::Peer>())
	,server(std::make_shared<Native::Ntp::Server>())
	,source(std::make_shared<Native::Ntp::Source>())
{
    access_group->parent = this;

    allow->parent = this;

    panic->parent = this;

    peer->parent = this;

    server->parent = this;

    source->parent = this;

    yang_name = "ntp"; yang_parent_name = "native";
}

Native::Ntp::~Ntp()
{
}

bool Native::Ntp::has_data() const
{
    for (std::size_t index=0; index<authentication_key.size(); index++)
    {
        if(authentication_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trusted_key.size(); index++)
    {
        if(trusted_key[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| broadcastdelay.is_set
	|| clock_period.is_set
	|| logging.is_set
	|| max_associations.is_set
	|| maxdistance.is_set
	|| mindistance.is_set
	|| orphan.is_set
	|| passive.is_set
	|| update_calendar.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (allow !=  nullptr && allow->has_data())
	|| (master !=  nullptr && master->has_data())
	|| (panic !=  nullptr && panic->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ntp::has_operation() const
{
    for (std::size_t index=0; index<authentication_key.size(); index++)
    {
        if(authentication_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trusted_key.size(); index++)
    {
        if(trusted_key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(broadcastdelay.operation)
	|| is_set(clock_period.operation)
	|| is_set(logging.operation)
	|| is_set(max_associations.operation)
	|| is_set(maxdistance.operation)
	|| is_set(mindistance.operation)
	|| is_set(orphan.operation)
	|| is_set(passive.operation)
	|| is_set(update_calendar.operation)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (allow !=  nullptr && allow->has_operation())
	|| (master !=  nullptr && master->has_operation())
	|| (panic !=  nullptr && panic->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";

    return path_buffer.str();

}

const EntityPath Native::Ntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (broadcastdelay.is_set || is_set(broadcastdelay.operation)) leaf_name_data.push_back(broadcastdelay.get_name_leafdata());
    if (clock_period.is_set || is_set(clock_period.operation)) leaf_name_data.push_back(clock_period.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (max_associations.is_set || is_set(max_associations.operation)) leaf_name_data.push_back(max_associations.get_name_leafdata());
    if (maxdistance.is_set || is_set(maxdistance.operation)) leaf_name_data.push_back(maxdistance.get_name_leafdata());
    if (mindistance.is_set || is_set(mindistance.operation)) leaf_name_data.push_back(mindistance.get_name_leafdata());
    if (orphan.is_set || is_set(orphan.operation)) leaf_name_data.push_back(orphan.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (update_calendar.is_set || is_set(update_calendar.operation)) leaf_name_data.push_back(update_calendar.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Ntp::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ntp::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "authentication-key")
    {
        for(auto const & c : authentication_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::AuthenticationKey>();
        c->parent = this;
        authentication_key.push_back(c);
        return c;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Ntp::Master>();
        }
        return master;
    }

    if(child_yang_name == "panic")
    {
        if(panic == nullptr)
        {
            panic = std::make_shared<Native::Ntp::Panic>();
        }
        return panic;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ntp::Server>();
        }
        return server;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ntp::Source>();
        }
        return source;
    }

    if(child_yang_name == "trusted-key")
    {
        for(auto const & c : trusted_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::TrustedKey>();
        c->parent = this;
        trusted_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    for (auto const & c : authentication_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    if(panic != nullptr)
    {
        children["panic"] = panic;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    for (auto const & c : trusted_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "broadcastdelay")
    {
        broadcastdelay = value;
    }
    if(value_path == "clock-period")
    {
        clock_period = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
    if(value_path == "max-associations")
    {
        max_associations = value;
    }
    if(value_path == "maxdistance")
    {
        maxdistance = value;
    }
    if(value_path == "mindistance")
    {
        mindistance = value;
    }
    if(value_path == "orphan")
    {
        orphan = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "update-calendar")
    {
        update_calendar = value;
    }
}

Native::Ntp::AccessGroup::AccessGroup()
    :
    ipv4(std::make_shared<Native::Ntp::AccessGroup::Ipv4>())
	,ipv6(std::make_shared<Native::Ntp::AccessGroup::Ipv6>())
	,peer(std::make_shared<Native::Ntp::AccessGroup::Peer>())
	,query_only(std::make_shared<Native::Ntp::AccessGroup::QueryOnly>())
	,serve(std::make_shared<Native::Ntp::AccessGroup::Serve>())
	,serve_only(std::make_shared<Native::Ntp::AccessGroup::ServeOnly>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    peer->parent = this;

    query_only->parent = this;

    serve->parent = this;

    serve_only->parent = this;

    yang_name = "access-group"; yang_parent_name = "ntp";
}

Native::Ntp::AccessGroup::~AccessGroup()
{
}

bool Native::Ntp::AccessGroup::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:access-group";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ntp::AccessGroup::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ntp::AccessGroup::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        children["serve-only"] = serve_only;
    }

    return children;
}

void Native::Ntp::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Ntp::AccessGroup::Ipv4::Ipv4()
    :
    peer(std::make_shared<Native::Ntp::AccessGroup::Ipv4::Peer>())
	,query_only(std::make_shared<Native::Ntp::AccessGroup::Ipv4::QueryOnly>())
	,serve(std::make_shared<Native::Ntp::AccessGroup::Ipv4::Serve>())
	,serve_only(std::make_shared<Native::Ntp::AccessGroup::Ipv4::ServeOnly>())
{
    peer->parent = this;

    query_only->parent = this;

    serve->parent = this;

    serve_only->parent = this;

    yang_name = "ipv4"; yang_parent_name = "access-group";
}

Native::Ntp::AccessGroup::Ipv4::~Ipv4()
{
}

bool Native::Ntp::AccessGroup::Ipv4::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Ipv4::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::Ipv4::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Ipv4::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::Ipv4::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        children["serve-only"] = serve_only;
    }

    return children;
}

void Native::Ntp::AccessGroup::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Ntp::AccessGroup::Ipv4::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "peer"; yang_parent_name = "ipv4";
}

Native::Ntp::AccessGroup::Ipv4::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv4::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv4::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv4::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "query-only"; yang_parent_name = "ipv4";
}

Native::Ntp::AccessGroup::Ipv4::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv4::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "serve"; yang_parent_name = "ipv4";
}

Native::Ntp::AccessGroup::Ipv4::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv4::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv4::Serve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::Serve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv4::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "serve-only"; yang_parent_name = "ipv4";
}

Native::Ntp::AccessGroup::Ipv4::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv6::Ipv6()
    :
    peer(std::make_shared<Native::Ntp::AccessGroup::Ipv6::Peer>())
	,query_only(std::make_shared<Native::Ntp::AccessGroup::Ipv6::QueryOnly>())
	,serve(std::make_shared<Native::Ntp::AccessGroup::Ipv6::Serve>())
	,serve_only(std::make_shared<Native::Ntp::AccessGroup::Ipv6::ServeOnly>())
{
    peer->parent = this;

    query_only->parent = this;

    serve->parent = this;

    serve_only->parent = this;

    yang_name = "ipv6"; yang_parent_name = "access-group";
}

Native::Ntp::AccessGroup::Ipv6::~Ipv6()
{
}

bool Native::Ntp::AccessGroup::Ipv6::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Ipv6::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::Ipv6::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Ipv6::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::Ipv6::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        children["serve-only"] = serve_only;
    }

    return children;
}

void Native::Ntp::AccessGroup::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Ntp::AccessGroup::Ipv6::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "peer"; yang_parent_name = "ipv6";
}

Native::Ntp::AccessGroup::Ipv6::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv6::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv6::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv6::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "query-only"; yang_parent_name = "ipv6";
}

Native::Ntp::AccessGroup::Ipv6::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv6::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "serve"; yang_parent_name = "ipv6";
}

Native::Ntp::AccessGroup::Ipv6::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv6::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv6::Serve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::Serve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Ipv6::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "serve-only"; yang_parent_name = "ipv6";
}

Native::Ntp::AccessGroup::Ipv6::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "peer"; yang_parent_name = "access-group";
}

Native::Ntp::AccessGroup::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Peer::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "query-only"; yang_parent_name = "access-group";
}

Native::Ntp::AccessGroup::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::QueryOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::QueryOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::QueryOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::QueryOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "serve"; yang_parent_name = "access-group";
}

Native::Ntp::AccessGroup::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Serve::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Serve::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::Serve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::Serve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::AccessGroup::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{
    yang_name = "serve-only"; yang_parent_name = "access-group";
}

Native::Ntp::AccessGroup::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::ServeOnly::has_data() const
{
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::ServeOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(kod.operation);
}

std::string Native::Ntp::AccessGroup::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AccessGroup::ServeOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.operation)) leaf_name_data.push_back(kod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AccessGroup::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AccessGroup::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AccessGroup::ServeOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "kod")
    {
        kod = value;
    }
}

Native::Ntp::Allow::Allow()
    :
    mode(std::make_shared<Native::Ntp::Allow::Mode>())
{
    mode->parent = this;

    yang_name = "allow"; yang_parent_name = "ntp";
}

Native::Ntp::Allow::~Allow()
{
}

bool Native::Ntp::Allow::has_data() const
{
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Ntp::Allow::has_operation() const
{
    return is_set(operation)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ntp::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:allow";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Allow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ntp::Allow::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Ntp::Allow::set_value(const std::string & value_path, std::string value)
{
}

Native::Ntp::Allow::Mode::Mode()
    :
    private_{YType::empty, "private"}
    	,
    control(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "allow";
}

Native::Ntp::Allow::Mode::~Mode()
{
}

bool Native::Ntp::Allow::Mode::has_data() const
{
    return private_.is_set
	|| (control !=  nullptr && control->has_data());
}

bool Native::Ntp::Allow::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(private_.operation)
	|| (control !=  nullptr && control->has_operation());
}

std::string Native::Ntp::Allow::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Allow::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:allow/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (private_.is_set || is_set(private_.operation)) leaf_name_data.push_back(private_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Allow::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Ntp::Allow::Mode::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Allow::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    return children;
}

void Native::Ntp::Allow::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "private")
    {
        private_ = value;
    }
}

Native::Ntp::Allow::Mode::Control::Control()
    :
    delay{YType::uint8, "delay"}
{
    yang_name = "control"; yang_parent_name = "mode";
}

Native::Ntp::Allow::Mode::Control::~Control()
{
}

bool Native::Ntp::Allow::Mode::Control::has_data() const
{
    return delay.is_set;
}

bool Native::Ntp::Allow::Mode::Control::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation);
}

std::string Native::Ntp::Allow::Mode::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Allow::Mode::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:allow/mode/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Allow::Mode::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Allow::Mode::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Allow::Mode::Control::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Ntp::AuthenticationKey::AuthenticationKey()
    :
    number{YType::uint32, "number"},
    encryption_type{YType::uint32, "encryption-type"},
    md5{YType::str, "md5"}
{
    yang_name = "authentication-key"; yang_parent_name = "ntp";
}

Native::Ntp::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Ntp::AuthenticationKey::has_data() const
{
    return number.is_set
	|| encryption_type.is_set
	|| md5.is_set;
}

bool Native::Ntp::AuthenticationKey::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(encryption_type.operation)
	|| is_set(md5.operation);
}

std::string Native::Ntp::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:authentication-key" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::AuthenticationKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.operation)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::AuthenticationKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
}

Native::Ntp::Master::Master()
    :
    stratum_number{YType::uint8, "stratum-number"}
{
    yang_name = "master"; yang_parent_name = "ntp";
}

Native::Ntp::Master::~Master()
{
}

bool Native::Ntp::Master::has_data() const
{
    return stratum_number.is_set;
}

bool Native::Ntp::Master::has_operation() const
{
    return is_set(operation)
	|| is_set(stratum_number.operation);
}

std::string Native::Ntp::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:master";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Master::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stratum_number.is_set || is_set(stratum_number.operation)) leaf_name_data.push_back(stratum_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Master::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stratum-number")
    {
        stratum_number = value;
    }
}

Native::Ntp::Panic::Panic()
    :
    update{YType::empty, "update"}
{
    yang_name = "panic"; yang_parent_name = "ntp";
}

Native::Ntp::Panic::~Panic()
{
}

bool Native::Ntp::Panic::has_data() const
{
    return update.is_set;
}

bool Native::Ntp::Panic::has_operation() const
{
    return is_set(operation)
	|| is_set(update.operation);
}

std::string Native::Ntp::Panic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:panic";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Panic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.operation)) leaf_name_data.push_back(update.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Panic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Panic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Panic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update")
    {
        update = value;
    }
}

Native::Ntp::Peer::Peer()
{
    yang_name = "peer"; yang_parent_name = "ntp";
}

Native::Ntp::Peer::~Peer()
{
}

bool Native::Ntp::Peer::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ntp::Peer::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ntp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:peer";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Ntp::Peer::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "server-list"; yang_parent_name = "peer";
}

Native::Ntp::Peer::ServerList::~ServerList()
{
}

bool Native::Ntp::Peer::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::ServerList::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Peer::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::ServerList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::ServerList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Peer::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ip"; yang_parent_name = "peer";
}

Native::Ntp::Peer::Ip::~Ip()
{
}

bool Native::Ntp::Peer::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Peer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Peer::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ipv6"; yang_parent_name = "peer";
}

Native::Ntp::Peer::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Peer::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Peer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Peer::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "peer";
}

Native::Ntp::Peer::Vrf::~Vrf()
{
}

bool Native::Ntp::Peer::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ntp::Peer::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ntp::Peer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Peer::Vrf::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Peer::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ntp::Peer::Vrf::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "server-list"; yang_parent_name = "vrf";
}

Native::Ntp::Peer::Vrf::ServerList::~ServerList()
{
}

bool Native::Ntp::Peer::Vrf::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::ServerList::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Peer::Vrf::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::Vrf::ServerList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Vrf::ServerList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Peer::Vrf::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ip"; yang_parent_name = "vrf";
}

Native::Ntp::Peer::Vrf::Ip::~Ip()
{
}

bool Native::Ntp::Peer::Vrf::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Peer::Vrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::Vrf::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Vrf::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Peer::Vrf::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ipv6"; yang_parent_name = "vrf";
}

Native::Ntp::Peer::Vrf::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Peer::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Peer::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Peer::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Peer::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Peer::Vrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Server::Server()
{
    yang_name = "server"; yang_parent_name = "ntp";
}

Native::Ntp::Server::~Server()
{
}

bool Native::Ntp::Server::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ntp::Server::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ntp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:server";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Ntp::Server::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "server-list"; yang_parent_name = "server";
}

Native::Ntp::Server::ServerList::~ServerList()
{
}

bool Native::Ntp::Server::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::ServerList::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Server::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::ServerList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::ServerList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Server::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ip"; yang_parent_name = "server";
}

Native::Ntp::Server::Ip::~Ip()
{
}

bool Native::Ntp::Server::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Server::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Server::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ipv6"; yang_parent_name = "server";
}

Native::Ntp::Server::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Server::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Server::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "server";
}

Native::Ntp::Server::Vrf::~Vrf()
{
}

bool Native::Ntp::Server::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ntp::Server::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_list.size(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ntp::Server::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "server-list")
    {
        for(auto const & c : server_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ntp::Server::Vrf::ServerList>();
        c->parent = this;
        server_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ntp::Server::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ntp::Server::Vrf::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "server-list"; yang_parent_name = "vrf";
}

Native::Ntp::Server::Vrf::ServerList::~ServerList()
{
}

bool Native::Ntp::Server::Vrf::ServerList::has_data() const
{
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::ServerList::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Server::Vrf::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::Vrf::ServerList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Vrf::ServerList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Server::Vrf::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ip"; yang_parent_name = "vrf";
}

Native::Ntp::Server::Vrf::Ip::~Ip()
{
}

bool Native::Ntp::Server::Vrf::Ip::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Server::Vrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::Vrf::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Vrf::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Server::Vrf::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{
    yang_name = "ipv6"; yang_parent_name = "vrf";
}

Native::Ntp::Server::Vrf::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Server::Vrf::Ipv6::has_data() const
{
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(key.operation)
	|| is_set(maxpoll.operation)
	|| is_set(minpoll.operation)
	|| is_set(prefer.operation)
	|| is_set(source.operation)
	|| is_set(version.operation);
}

std::string Native::Ntp::Server::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Server::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.operation)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.operation)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Server::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Server::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Server::Vrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ntp::Source::Source()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ntp::Source::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ntp::Source::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ntp::Source::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ntp::Source::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source"; yang_parent_name = "ntp";
}

Native::Ntp::Source::~Source()
{
}

bool Native::Ntp::Source::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ntp::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ntp::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:source";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ntp::Source::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ntp::Source::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ntp::Source::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ntp::Source::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ntp::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Ntp::Source::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source";
}

Native::Ntp::Source::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ntp::Source::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ntp::Source::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ntp::Source::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Source::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Source::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ntp::Source::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source";
}

Native::Ntp::Source::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ntp::Source::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ntp::Source::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ntp::Source::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Source::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Source::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ntp::Source::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source";
}

Native::Ntp::Source::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ntp::Source::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ntp::Source::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ntp::Source::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Source::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Source::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ntp::Source::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source";
}

Native::Ntp::Source::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ntp::Source::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ntp::Source::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ntp::Source::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ntp::Source::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::Source::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::Source::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::Source::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ntp::TrustedKey::TrustedKey()
    :
    number{YType::uint16, "number"},
    end_key{YType::uint16, "end-key"}
{
    yang_name = "trusted-key"; yang_parent_name = "ntp";
}

Native::Ntp::TrustedKey::~TrustedKey()
{
}

bool Native::Ntp::TrustedKey::has_data() const
{
    return number.is_set
	|| end_key.is_set;
}

bool Native::Ntp::TrustedKey::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(end_key.operation);
}

std::string Native::Ntp::TrustedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:trusted-key" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ntp::TrustedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (end_key.is_set || is_set(end_key.operation)) leaf_name_data.push_back(end_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ntp::TrustedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ntp::TrustedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ntp::TrustedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "end-key")
    {
        end_key = value;
    }
}

Native::Wsma::Wsma()
    :
    agent(std::make_shared<Native::Wsma::Agent>())
	,profile(std::make_shared<Native::Wsma::Profile>())
{
    agent->parent = this;

    profile->parent = this;

    yang_name = "wsma"; yang_parent_name = "native";
}

Native::Wsma::~Wsma()
{
}

bool Native::Wsma::has_data() const
{
    return (agent !=  nullptr && agent->has_data())
	|| (profile !=  nullptr && profile->has_data());
}

bool Native::Wsma::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && agent->has_operation())
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Wsma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wsma";

    return path_buffer.str();

}

const EntityPath Native::Wsma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Wsma::Agent>();
        }
        return agent;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Wsma::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Wsma::set_value(const std::string & value_path, std::string value)
{
}

Native::Wsma::Agent::Agent()
    :
    config(std::make_shared<Native::Wsma::Agent::Config>())
	,exec(std::make_shared<Native::Wsma::Agent::Exec>())
	,filesys(std::make_shared<Native::Wsma::Agent::Filesys>())
	,notify(std::make_shared<Native::Wsma::Agent::Notify>())
{
    config->parent = this;

    exec->parent = this;

    filesys->parent = this;

    notify->parent = this;

    yang_name = "agent"; yang_parent_name = "wsma";
}

Native::Wsma::Agent::~Agent()
{
}

bool Native::Wsma::Agent::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (filesys !=  nullptr && filesys->has_data())
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::Wsma::Agent::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (filesys !=  nullptr && filesys->has_operation())
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::Wsma::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wsma:agent";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Wsma::Agent::Config>();
        }
        return config;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Wsma::Agent::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "filesys")
    {
        if(filesys == nullptr)
        {
            filesys = std::make_shared<Native::Wsma::Agent::Filesys>();
        }
        return filesys;
    }

    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::Wsma::Agent::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(filesys != nullptr)
    {
        children["filesys"] = filesys;
    }

    if(notify != nullptr)
    {
        children["notify"] = notify;
    }

    return children;
}

void Native::Wsma::Agent::set_value(const std::string & value_path, std::string value)
{
}

Native::Wsma::Agent::Exec::Exec()
    :
    profile{YType::str, "profile"}
{
    yang_name = "exec"; yang_parent_name = "agent";
}

Native::Wsma::Agent::Exec::~Exec()
{
}

bool Native::Wsma::Agent::Exec::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Exec::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::Wsma::Agent::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Agent::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

Native::Wsma::Agent::Config::Config()
    :
    profile{YType::str, "profile"}
{
    yang_name = "config"; yang_parent_name = "agent";
}

Native::Wsma::Agent::Config::~Config()
{
}

bool Native::Wsma::Agent::Config::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Config::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::Wsma::Agent::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Agent::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

Native::Wsma::Agent::Filesys::Filesys()
    :
    profile{YType::str, "profile"}
{
    yang_name = "filesys"; yang_parent_name = "agent";
}

Native::Wsma::Agent::Filesys::~Filesys()
{
}

bool Native::Wsma::Agent::Filesys::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Filesys::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::Wsma::Agent::Filesys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filesys";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Agent::Filesys::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Filesys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Filesys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Filesys::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

Native::Wsma::Agent::Notify::Notify()
    :
    profile{YType::str, "profile"}
{
    yang_name = "notify"; yang_parent_name = "agent";
}

Native::Wsma::Agent::Notify::~Notify()
{
}

bool Native::Wsma::Agent::Notify::has_data() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Notify::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::Wsma::Agent::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Agent::Notify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Agent::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Agent::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Agent::Notify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

Native::Wsma::Profile::Profile()
{
    yang_name = "profile"; yang_parent_name = "wsma";
}

Native::Wsma::Profile::~Profile()
{
}

bool Native::Wsma::Profile::has_data() const
{
    for (std::size_t index=0; index<listener.size(); index++)
    {
        if(listener[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Wsma::Profile::has_operation() const
{
    for (std::size_t index=0; index<listener.size(); index++)
    {
        if(listener[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Wsma::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wsma:profile";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listener")
    {
        for(auto const & c : listener)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Wsma::Profile::Listener>();
        c->parent = this;
        listener.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : listener)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Wsma::Profile::set_value(const std::string & value_path, std::string value)
{
}

Native::Wsma::Profile::Listener::Listener()
    :
    name{YType::str, "name"},
    transport{YType::enumeration, "transport"}
{
    yang_name = "listener"; yang_parent_name = "profile";
}

Native::Wsma::Profile::Listener::~Listener()
{
}

bool Native::Wsma::Profile::Listener::has_data() const
{
    return name.is_set
	|| transport.is_set;
}

bool Native::Wsma::Profile::Listener::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(transport.operation);
}

std::string Native::Wsma::Profile::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Wsma::Profile::Listener::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Wsma::Profile::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wsma::Profile::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wsma::Profile::Listener::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
}

Native::Event::Event()
    :
    manager(std::make_shared<Native::Event::Manager>())
{
    manager->parent = this;

    yang_name = "event"; yang_parent_name = "native";
}

Native::Event::~Event()
{
}

bool Native::Event::has_data() const
{
    return (manager !=  nullptr && manager->has_data());
}

bool Native::Event::has_operation() const
{
    return is_set(operation)
	|| (manager !=  nullptr && manager->has_operation());
}

std::string Native::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Native::Event::Manager>();
        }
        return manager;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manager != nullptr)
    {
        children["manager"] = manager;
    }

    return children;
}

void Native::Event::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Manager()
    :
    directory(std::make_shared<Native::Event::Manager::Directory>())
	,session(std::make_shared<Native::Event::Manager::Session>())
{
    directory->parent = this;

    session->parent = this;

    yang_name = "manager"; yang_parent_name = "event";
}

Native::Event::Manager::~Manager()
{
}

bool Native::Event::Manager::has_data() const
{
    for (std::size_t index=0; index<applet.size(); index++)
    {
        if(applet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<environment.size(); index++)
    {
        if(environment[index]->has_data())
            return true;
    }
    return (directory !=  nullptr && directory->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Event::Manager::has_operation() const
{
    for (std::size_t index=0; index<applet.size(); index++)
    {
        if(applet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<environment.size(); index++)
    {
        if(environment[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (directory !=  nullptr && directory->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Event::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eem:manager";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "applet")
    {
        for(auto const & c : applet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet>();
        c->parent = this;
        applet.push_back(c);
        return c;
    }

    if(child_yang_name == "directory")
    {
        if(directory == nullptr)
        {
            directory = std::make_shared<Native::Event::Manager::Directory>();
        }
        return directory;
    }

    if(child_yang_name == "environment")
    {
        for(auto const & c : environment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Environment>();
        c->parent = this;
        environment.push_back(c);
        return c;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Event::Manager::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : applet)
    {
        children[c->get_segment_path()] = c;
    }

    if(directory != nullptr)
    {
        children["directory"] = directory;
    }

    for (auto const & c : environment)
    {
        children[c->get_segment_path()] = c;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Native::Event::Manager::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Environment::Environment()
    :
    name{YType::str, "name"},
    value_{YType::str, "value"}
{
    yang_name = "environment"; yang_parent_name = "manager";
}

Native::Event::Manager::Environment::~Environment()
{
}

bool Native::Event::Manager::Environment::has_data() const
{
    return name.is_set
	|| value_.is_set;
}

bool Native::Event::Manager::Environment::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(value_.operation);
}

std::string Native::Event::Manager::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Environment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Environment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Event::Manager::Directory::Directory()
    :
    user(std::make_shared<Native::Event::Manager::Directory::User>())
{
    user->parent = this;

    yang_name = "directory"; yang_parent_name = "manager";
}

Native::Event::Manager::Directory::~Directory()
{
}

bool Native::Event::Manager::Directory::has_data() const
{
    return (user !=  nullptr && user->has_data());
}

bool Native::Event::Manager::Directory::has_operation() const
{
    return is_set(operation)
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Event::Manager::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Directory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Directory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Event::Manager::Directory::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Directory::User::User()
    :
    policy{YType::str, "policy"}
{
    yang_name = "user"; yang_parent_name = "directory";
}

Native::Event::Manager::Directory::User::~User()
{
}

bool Native::Event::Manager::Directory::User::has_data() const
{
    return policy.is_set;
}

bool Native::Event::Manager::Directory::User::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Native::Event::Manager::Directory::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Directory::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/directory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Directory::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Directory::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Directory::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Native::Event::Manager::Session::Session()
    :
    cli(std::make_shared<Native::Event::Manager::Session::Cli>())
{
    cli->parent = this;

    yang_name = "session"; yang_parent_name = "manager";
}

Native::Event::Manager::Session::~Session()
{
}

bool Native::Event::Manager::Session::has_data() const
{
    return (cli !=  nullptr && cli->has_data());
}

bool Native::Event::Manager::Session::has_operation() const
{
    return is_set(operation)
	|| (cli !=  nullptr && cli->has_operation());
}

std::string Native::Event::Manager::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

    return children;
}

void Native::Event::Manager::Session::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Session::Cli::Cli()
    :
    username(std::make_shared<Native::Event::Manager::Session::Cli::Username>())
{
    username->parent = this;

    yang_name = "cli"; yang_parent_name = "session";
}

Native::Event::Manager::Session::Cli::~Cli()
{
}

bool Native::Event::Manager::Session::Cli::has_data() const
{
    return (username !=  nullptr && username->has_data());
}

bool Native::Event::Manager::Session::Cli::has_operation() const
{
    return is_set(operation)
	|| (username !=  nullptr && username->has_operation());
}

std::string Native::Event::Manager::Session::Cli::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cli";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Session::Cli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(username != nullptr)
    {
        children["username"] = username;
    }

    return children;
}

void Native::Event::Manager::Session::Cli::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Session::Cli::Username::Username()
{
    yang_name = "username"; yang_parent_name = "cli";
}

Native::Event::Manager::Session::Cli::Username::~Username()
{
}

bool Native::Event::Manager::Session::Cli::Username::has_data() const
{
    for (std::size_t index=0; index<username_in_word.size(); index++)
    {
        if(username_in_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Session::Cli::Username::has_operation() const
{
    for (std::size_t index=0; index<username_in_word.size(); index++)
    {
        if(username_in_word[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Event::Manager::Session::Cli::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Session::Cli::Username::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/cli/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::Cli::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username_in_word")
    {
        for(auto const & c : username_in_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Session::Cli::Username::Username_In_Word>();
        c->parent = this;
        username_in_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::Cli::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username_in_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Session::Cli::Username::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Session::Cli::Username::Username_In_Word::Username_In_Word()
    :
    username_in_word{YType::str, "username_in_word"},
    privilege{YType::uint8, "privilege"}
{
    yang_name = "username_in_word"; yang_parent_name = "username";
}

Native::Event::Manager::Session::Cli::Username::Username_In_Word::~Username_In_Word()
{
}

bool Native::Event::Manager::Session::Cli::Username::Username_In_Word::has_data() const
{
    return username_in_word.is_set
	|| privilege.is_set;
}

bool Native::Event::Manager::Session::Cli::Username::Username_In_Word::has_operation() const
{
    return is_set(operation)
	|| is_set(username_in_word.operation)
	|| is_set(privilege.operation);
}

std::string Native::Event::Manager::Session::Cli::Username::Username_In_Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username_in_word" <<"[username_in_word='" <<username_in_word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Session::Cli::Username::Username_In_Word::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/session/cli/username/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username_in_word.is_set || is_set(username_in_word.operation)) leaf_name_data.push_back(username_in_word.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.operation)) leaf_name_data.push_back(privilege.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Session::Cli::Username::Username_In_Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Session::Cli::Username::Username_In_Word::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Session::Cli::Username::Username_In_Word::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username_in_word")
    {
        username_in_word = value;
    }
    if(value_path == "privilege")
    {
        privilege = value;
    }
}

Native::Event::Manager::Applet::Applet()
    :
    name{YType::str, "name"},
    authorization{YType::enumeration, "authorization"},
    class_{YType::str, "class"},
    description{YType::str, "description"},
    trap{YType::empty, "trap"}
    	,
    event(std::make_shared<Native::Event::Manager::Applet::Event_>())
	,trigger(std::make_shared<Native::Event::Manager::Applet::Trigger>())
{
    event->parent = this;

    trigger->parent = this;

    yang_name = "applet"; yang_parent_name = "manager";
}

Native::Event::Manager::Applet::~Applet()
{
}

bool Native::Event::Manager::Applet::has_data() const
{
    for (std::size_t index=0; index<action.size(); index++)
    {
        if(action[index]->has_data())
            return true;
    }
    return name.is_set
	|| authorization.is_set
	|| class_.is_set
	|| description.is_set
	|| trap.is_set
	|| (event !=  nullptr && event->has_data())
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Event::Manager::Applet::has_operation() const
{
    for (std::size_t index=0; index<action.size(); index++)
    {
        if(action[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(authorization.operation)
	|| is_set(class_.operation)
	|| is_set(description.operation)
	|| is_set(trap.operation)
	|| (event !=  nullptr && event->has_operation())
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Event::Manager::Applet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "applet" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/event/Cisco-IOS-XE-eem:manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.operation)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        for(auto const & c : action)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Action>();
        c->parent = this;
        action.push_back(c);
        return c;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Event::Manager::Applet::Event_>();
        }
        return event;
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action)
    {
        children[c->get_segment_path()] = c;
    }

    if(event != nullptr)
    {
        children["event"] = event;
    }

    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Event::Manager::Applet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "authorization")
    {
        authorization = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Event::Manager::Applet::Event_::Event_()
    :
    snmp_notification(std::make_shared<Native::Event::Manager::Applet::Event_::SnmpNotification>())
	,syslog(std::make_shared<Native::Event::Manager::Applet::Event_::Syslog>())
	,timer(std::make_shared<Native::Event::Manager::Applet::Event_::Timer>())
{
    snmp_notification->parent = this;

    syslog->parent = this;

    timer->parent = this;

    yang_name = "event"; yang_parent_name = "applet";
}

Native::Event::Manager::Applet::Event_::~Event_()
{
}

bool Native::Event::Manager::Applet::Event_::has_data() const
{
    return (snmp_notification !=  nullptr && snmp_notification->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Event::Manager::Applet::Event_::has_operation() const
{
    return is_set(operation)
	|| (snmp_notification !=  nullptr && snmp_notification->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Event::Manager::Applet::Event_::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmp_notification != nullptr)
    {
        children["snmp-notification"] = snmp_notification;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Event_::Timer::Timer()
    :
    watchdog(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog>())
{
    watchdog->parent = this;

    yang_name = "timer"; yang_parent_name = "event";
}

Native::Event::Manager::Applet::Event_::Timer::~Timer()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::has_data() const
{
    return (watchdog !=  nullptr && watchdog->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::has_operation() const
{
    return is_set(operation)
	|| (watchdog !=  nullptr && watchdog->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(watchdog != nullptr)
    {
        children["watchdog"] = watchdog;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Watchdog()
    :
    name(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name>())
{
    name->parent = this;

    yang_name = "watchdog"; yang_parent_name = "timer";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::~Watchdog()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_data() const
{
    return (name !=  nullptr && name->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_operation() const
{
    return is_set(operation)
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watchdog";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Watchdog' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::Name()
{
    yang_name = "name"; yang_parent_name = "watchdog";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::~Name()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::has_data() const
{
    for (std::size_t index=0; index<timer_name.size(); index++)
    {
        if(timer_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::has_operation() const
{
    for (std::size_t index=0; index<timer_name.size(); index++)
    {
        if(timer_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer-name")
    {
        for(auto const & c : timer_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName>();
        c->parent = this;
        timer_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : timer_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::TimerName()
    :
    timer_name{YType::str, "timer-name"}
    	,
    time(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time>())
{
    time->parent = this;

    yang_name = "timer-name"; yang_parent_name = "name";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::~TimerName()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::has_data() const
{
    return timer_name.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_name.operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-name" <<"[timer-name='" <<timer_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimerName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::Time()
{
    yang_name = "time"; yang_parent_name = "timer-name";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::~Time()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::has_data() const
{
    for (std::size_t index=0; index<time_in_seconds.size(); index++)
    {
        if(time_in_seconds[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::has_operation() const
{
    for (std::size_t index=0; index<time_in_seconds.size(); index++)
    {
        if(time_in_seconds[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time-in-seconds")
    {
        for(auto const & c : time_in_seconds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds>();
        c->parent = this;
        time_in_seconds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : time_in_seconds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::TimeInSeconds()
    :
    time_in_seconds{YType::uint32, "time-in-seconds"}
    	,
    maxrun(std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun>())
{
    maxrun->parent = this;

    yang_name = "time-in-seconds"; yang_parent_name = "time";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::~TimeInSeconds()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::has_data() const
{
    return time_in_seconds.is_set
	|| (maxrun !=  nullptr && maxrun->has_data());
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_seconds.operation)
	|| (maxrun !=  nullptr && maxrun->has_operation());
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-in-seconds" <<"[time-in-seconds='" <<time_in_seconds <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeInSeconds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxrun")
    {
        if(maxrun == nullptr)
        {
            maxrun = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun>();
        }
        return maxrun;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maxrun != nullptr)
    {
        children["maxrun"] = maxrun;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::Maxrun()
{
    yang_name = "maxrun"; yang_parent_name = "time-in-seconds";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::~Maxrun()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::has_data() const
{
    for (std::size_t index=0; index<timer_in_seconds.size(); index++)
    {
        if(timer_in_seconds[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::has_operation() const
{
    for (std::size_t index=0; index<timer_in_seconds.size(); index++)
    {
        if(timer_in_seconds[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxrun";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maxrun' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timer-in-seconds")
    {
        for(auto const & c : timer_in_seconds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds>();
        c->parent = this;
        timer_in_seconds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : timer_in_seconds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::TimerInSeconds()
    :
    timer_in_seconds{YType::uint32, "timer-in-seconds"},
    ratelimit{YType::uint32, "ratelimit"}
{
    yang_name = "timer-in-seconds"; yang_parent_name = "maxrun";
}

Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::~TimerInSeconds()
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::has_data() const
{
    return timer_in_seconds.is_set
	|| ratelimit.is_set;
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_in_seconds.operation)
	|| is_set(ratelimit.operation);
}

std::string Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-in-seconds" <<"[timer-in-seconds='" <<timer_in_seconds <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimerInSeconds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_in_seconds.is_set || is_set(timer_in_seconds.operation)) leaf_name_data.push_back(timer_in_seconds.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.operation)) leaf_name_data.push_back(ratelimit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-in-seconds")
    {
        timer_in_seconds = value;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
    }
}

Native::Event::Manager::Applet::Event_::SnmpNotification::SnmpNotification()
    :
    dest_ip_address{YType::str, "dest-ip-address"},
    oid{YType::str, "oid"},
    oid_val{YType::str, "oid-val"},
    op{YType::enumeration, "op"},
    src_ip_address{YType::str, "src-ip-address"}
{
    yang_name = "snmp-notification"; yang_parent_name = "event";
}

Native::Event::Manager::Applet::Event_::SnmpNotification::~SnmpNotification()
{
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_data() const
{
    return dest_ip_address.is_set
	|| oid.is_set
	|| oid_val.is_set
	|| op.is_set
	|| src_ip_address.is_set;
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_ip_address.operation)
	|| is_set(oid.operation)
	|| is_set(oid_val.operation)
	|| is_set(op.operation)
	|| is_set(src_ip_address.operation);
}

std::string Native::Event::Manager::Applet::Event_::SnmpNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-notification";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::SnmpNotification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SnmpNotification' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ip_address.is_set || is_set(dest_ip_address.operation)) leaf_name_data.push_back(dest_ip_address.get_name_leafdata());
    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_val.is_set || is_set(oid_val.operation)) leaf_name_data.push_back(oid_val.get_name_leafdata());
    if (op.is_set || is_set(op.operation)) leaf_name_data.push_back(op.get_name_leafdata());
    if (src_ip_address.is_set || is_set(src_ip_address.operation)) leaf_name_data.push_back(src_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::SnmpNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::SnmpNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-ip-address")
    {
        dest_ip_address = value;
    }
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "oid-val")
    {
        oid_val = value;
    }
    if(value_path == "op")
    {
        op = value;
    }
    if(value_path == "src-ip-address")
    {
        src_ip_address = value;
    }
}

Native::Event::Manager::Applet::Event_::Syslog::Syslog()
    :
    pattern{YType::str, "pattern"}
{
    yang_name = "syslog"; yang_parent_name = "event";
}

Native::Event::Manager::Applet::Event_::Syslog::~Syslog()
{
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_data() const
{
    return pattern.is_set;
}

bool Native::Event::Manager::Applet::Event_::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(pattern.operation);
}

std::string Native::Event::Manager::Applet::Event_::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syslog' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pattern")
    {
        pattern = value;
    }
}

Native::Event::Manager::Applet::Action::Action()
    :
    name{YType::str, "name"},
    end{YType::empty, "end"}
    	,
    if_(std::make_shared<Native::Event::Manager::Applet::Action::If_>())
	,info(std::make_shared<Native::Event::Manager::Applet::Action::Info>())
	,regexp(std::make_shared<Native::Event::Manager::Applet::Action::Regexp>())
	,snmp_trap(nullptr) // presence node
	,string(std::make_shared<Native::Event::Manager::Applet::Action::String>())
	,syslog(std::make_shared<Native::Event::Manager::Applet::Action::Syslog>())
{
    if_->parent = this;

    info->parent = this;

    regexp->parent = this;

    string->parent = this;

    syslog->parent = this;

    yang_name = "action"; yang_parent_name = "applet";
}

Native::Event::Manager::Applet::Action::~Action()
{
}

bool Native::Event::Manager::Applet::Action::has_data() const
{
    return name.is_set
	|| end.is_set
	|| (if_ !=  nullptr && if_->has_data())
	|| (info !=  nullptr && info->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (snmp_trap !=  nullptr && snmp_trap->has_data())
	|| (string !=  nullptr && string->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Event::Manager::Applet::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(end.operation)
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
    path_buffer << "action" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if")
    {
        if(if_ == nullptr)
        {
            if_ = std::make_shared<Native::Event::Manager::Applet::Action::If_>();
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(if_ != nullptr)
    {
        children["if"] = if_;
    }

    if(info != nullptr)
    {
        children["info"] = info;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(snmp_trap != nullptr)
    {
        children["snmp-trap"] = snmp_trap;
    }

    if(string != nullptr)
    {
        children["string"] = string;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
}

Native::Event::Manager::Applet::Action::If_::If_()
    :
    goto{YType::str, "goto"},
    keyword{YType::enumeration, "keyword"},
    string_op_1{YType::str, "string-op-1"},
    string_op_2{YType::str, "string-op-2"}
{
    yang_name = "if"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::If_::~If_()
{
}

bool Native::Event::Manager::Applet::Action::If_::has_data() const
{
    return goto.is_set
	|| keyword.is_set
	|| string_op_1.is_set
	|| string_op_2.is_set;
}

bool Native::Event::Manager::Applet::Action::If_::has_operation() const
{
    return is_set(operation)
	|| is_set(goto.operation)
	|| is_set(keyword.operation)
	|| is_set(string_op_1.operation)
	|| is_set(string_op_2.operation);
}

std::string Native::Event::Manager::Applet::Action::If_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::If_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'If_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (goto.is_set || is_set(goto.operation)) leaf_name_data.push_back(goto.get_name_leafdata());
    if (keyword.is_set || is_set(keyword.operation)) leaf_name_data.push_back(keyword.get_name_leafdata());
    if (string_op_1.is_set || is_set(string_op_1.operation)) leaf_name_data.push_back(string_op_1.get_name_leafdata());
    if (string_op_2.is_set || is_set(string_op_2.operation)) leaf_name_data.push_back(string_op_2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::If_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::If_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::If_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "goto")
    {
        goto = value;
    }
    if(value_path == "keyword")
    {
        keyword = value;
    }
    if(value_path == "string-op-1")
    {
        string_op_1 = value;
    }
    if(value_path == "string-op-2")
    {
        string_op_2 = value;
    }
}

Native::Event::Manager::Applet::Action::Info::Info()
    :
    type(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type>())
{
    type->parent = this;

    yang_name = "info"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::Info::~Info()
{
}

bool Native::Event::Manager::Applet::Action::Info::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::has_operation() const
{
    return is_set(operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Info' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::Info::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Action::Info::Type::Type()
    :
    snmp(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp>())
{
    snmp->parent = this;

    yang_name = "type"; yang_parent_name = "info";
}

Native::Event::Manager::Applet::Action::Info::Type::~Type()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_data() const
{
    return (snmp !=  nullptr && snmp->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::Type::has_operation() const
{
    return is_set(operation)
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Info::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap>())
	,var(std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var>())
{
    trap->parent = this;

    var->parent = this;

    yang_name = "snmp"; yang_parent_name = "type";
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::~Snmp()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_data() const
{
    return (trap !=  nullptr && trap->has_data())
	|| (var !=  nullptr && var->has_data());
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_operation() const
{
    return is_set(operation)
	|| (trap !=  nullptr && trap->has_operation())
	|| (var !=  nullptr && var->has_operation());
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "var")
    {
        if(var == nullptr)
        {
            var = std::make_shared<Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var>();
        }
        return var;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(var != nullptr)
    {
        children["var"] = var;
    }

    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::Var()
    :
    oid{YType::str, "oid"},
    oid_type{YType::enumeration, "oid-type"},
    oid_type_value{YType::str, "oid-type-value"},
    variable_name{YType::str, "variable-name"}
{
    yang_name = "var"; yang_parent_name = "snmp";
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::~Var()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_data() const
{
    return oid.is_set
	|| oid_type.is_set
	|| oid_type_value.is_set
	|| variable_name.is_set;
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_operation() const
{
    return is_set(operation)
	|| is_set(oid.operation)
	|| is_set(oid_type.operation)
	|| is_set(oid_type_value.operation)
	|| is_set(variable_name.operation);
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Var' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oid.is_set || is_set(oid.operation)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_type.is_set || is_set(oid_type.operation)) leaf_name_data.push_back(oid_type.get_name_leafdata());
    if (oid_type_value.is_set || is_set(oid_type_value.operation)) leaf_name_data.push_back(oid_type_value.get_name_leafdata());
    if (variable_name.is_set || is_set(variable_name.operation)) leaf_name_data.push_back(variable_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "oid")
    {
        oid = value;
    }
    if(value_path == "oid-type")
    {
        oid_type = value;
    }
    if(value_path == "oid-type-value")
    {
        oid_type_value = value;
    }
    if(value_path == "variable-name")
    {
        variable_name = value;
    }
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::Trap()
    :
    enterprise_oid{YType::str, "enterprise-oid"},
    generic_trapnum{YType::uint32, "generic-trapnum"},
    specific_trapnum{YType::uint32, "specific-trapnum"},
    trap_oid{YType::str, "trap-oid"},
    trap_var{YType::str, "trap-var"}
{
    yang_name = "trap"; yang_parent_name = "snmp";
}

Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::~Trap()
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_data() const
{
    return enterprise_oid.is_set
	|| generic_trapnum.is_set
	|| specific_trapnum.is_set
	|| trap_oid.is_set
	|| trap_var.is_set;
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(enterprise_oid.operation)
	|| is_set(generic_trapnum.operation)
	|| is_set(specific_trapnum.operation)
	|| is_set(trap_oid.operation)
	|| is_set(trap_var.operation);
}

std::string Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enterprise_oid.is_set || is_set(enterprise_oid.operation)) leaf_name_data.push_back(enterprise_oid.get_name_leafdata());
    if (generic_trapnum.is_set || is_set(generic_trapnum.operation)) leaf_name_data.push_back(generic_trapnum.get_name_leafdata());
    if (specific_trapnum.is_set || is_set(specific_trapnum.operation)) leaf_name_data.push_back(specific_trapnum.get_name_leafdata());
    if (trap_oid.is_set || is_set(trap_oid.operation)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (trap_var.is_set || is_set(trap_var.operation)) leaf_name_data.push_back(trap_var.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enterprise-oid")
    {
        enterprise_oid = value;
    }
    if(value_path == "generic-trapnum")
    {
        generic_trapnum = value;
    }
    if(value_path == "specific-trapnum")
    {
        specific_trapnum = value;
    }
    if(value_path == "trap-oid")
    {
        trap_oid = value;
    }
    if(value_path == "trap-var")
    {
        trap_var = value;
    }
}

Native::Event::Manager::Applet::Action::Regexp::Regexp()
    :
    string_input{YType::str, "string-input"},
    string_match{YType::str, "string-match"},
    string_pattern{YType::str, "string-pattern"},
    string_submatch1{YType::str, "string-submatch1"},
    string_submatch2{YType::str, "string-submatch2"},
    string_submatch3{YType::str, "string-submatch3"}
{
    yang_name = "regexp"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::Regexp::~Regexp()
{
}

bool Native::Event::Manager::Applet::Action::Regexp::has_data() const
{
    return string_input.is_set
	|| string_match.is_set
	|| string_pattern.is_set
	|| string_submatch1.is_set
	|| string_submatch2.is_set
	|| string_submatch3.is_set;
}

bool Native::Event::Manager::Applet::Action::Regexp::has_operation() const
{
    return is_set(operation)
	|| is_set(string_input.operation)
	|| is_set(string_match.operation)
	|| is_set(string_pattern.operation)
	|| is_set(string_submatch1.operation)
	|| is_set(string_submatch2.operation)
	|| is_set(string_submatch3.operation);
}

std::string Native::Event::Manager::Applet::Action::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Regexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Regexp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_input.is_set || is_set(string_input.operation)) leaf_name_data.push_back(string_input.get_name_leafdata());
    if (string_match.is_set || is_set(string_match.operation)) leaf_name_data.push_back(string_match.get_name_leafdata());
    if (string_pattern.is_set || is_set(string_pattern.operation)) leaf_name_data.push_back(string_pattern.get_name_leafdata());
    if (string_submatch1.is_set || is_set(string_submatch1.operation)) leaf_name_data.push_back(string_submatch1.get_name_leafdata());
    if (string_submatch2.is_set || is_set(string_submatch2.operation)) leaf_name_data.push_back(string_submatch2.get_name_leafdata());
    if (string_submatch3.is_set || is_set(string_submatch3.operation)) leaf_name_data.push_back(string_submatch3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Regexp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string-input")
    {
        string_input = value;
    }
    if(value_path == "string-match")
    {
        string_match = value;
    }
    if(value_path == "string-pattern")
    {
        string_pattern = value;
    }
    if(value_path == "string-submatch1")
    {
        string_submatch1 = value;
    }
    if(value_path == "string-submatch2")
    {
        string_submatch2 = value;
    }
    if(value_path == "string-submatch3")
    {
        string_submatch3 = value;
    }
}

Native::Event::Manager::Applet::Action::SnmpTrap::SnmpTrap()
    :
    intdata1{YType::int32, "intdata1"},
    intdata2{YType::int32, "intdata2"},
    strdata{YType::str, "strdata"}
{
    yang_name = "snmp-trap"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::SnmpTrap::~SnmpTrap()
{
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_data() const
{
    return intdata1.is_set
	|| intdata2.is_set
	|| strdata.is_set;
}

bool Native::Event::Manager::Applet::Action::SnmpTrap::has_operation() const
{
    return is_set(operation)
	|| is_set(intdata1.operation)
	|| is_set(intdata2.operation)
	|| is_set(strdata.operation);
}

std::string Native::Event::Manager::Applet::Action::SnmpTrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::SnmpTrap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SnmpTrap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intdata1.is_set || is_set(intdata1.operation)) leaf_name_data.push_back(intdata1.get_name_leafdata());
    if (intdata2.is_set || is_set(intdata2.operation)) leaf_name_data.push_back(intdata2.get_name_leafdata());
    if (strdata.is_set || is_set(strdata.operation)) leaf_name_data.push_back(strdata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::SnmpTrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::SnmpTrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::SnmpTrap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intdata1")
    {
        intdata1 = value;
    }
    if(value_path == "intdata2")
    {
        intdata2 = value;
    }
    if(value_path == "strdata")
    {
        strdata = value;
    }
}

Native::Event::Manager::Applet::Action::String::String()
    :
    trim{YType::str, "trim"}
{
    yang_name = "string"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::String::~String()
{
}

bool Native::Event::Manager::Applet::Action::String::has_data() const
{
    return trim.is_set;
}

bool Native::Event::Manager::Applet::Action::String::has_operation() const
{
    return is_set(operation)
	|| is_set(trim.operation);
}

std::string Native::Event::Manager::Applet::Action::String::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::String::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'String' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trim.is_set || is_set(trim.operation)) leaf_name_data.push_back(trim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::String::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::String::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::String::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trim")
    {
        trim = value;
    }
}

Native::Event::Manager::Applet::Action::Syslog::Syslog()
    :
    facility{YType::str, "facility"},
    msg{YType::str, "msg"},
    priority{YType::str, "priority"}
{
    yang_name = "syslog"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::Syslog::~Syslog()
{
}

bool Native::Event::Manager::Applet::Action::Syslog::has_data() const
{
    return facility.is_set
	|| msg.is_set
	|| priority.is_set;
}

bool Native::Event::Manager::Applet::Action::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(facility.operation)
	|| is_set(msg.operation)
	|| is_set(priority.operation);
}

std::string Native::Event::Manager::Applet::Action::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Action::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syslog' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility.is_set || is_set(facility.operation)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (msg.is_set || is_set(msg.operation)) leaf_name_data.push_back(msg.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Action::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "facility")
    {
        facility = value;
    }
    if(value_path == "msg")
    {
        msg = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Event::Manager::Applet::Trigger::Trigger()
{
    yang_name = "trigger"; yang_parent_name = "applet";
}

Native::Event::Manager::Applet::Trigger::~Trigger()
{
}

bool Native::Event::Manager::Applet::Trigger::has_data() const
{
    return false;
}

bool Native::Event::Manager::Applet::Trigger::has_operation() const
{
    return is_set(operation);
}

std::string Native::Event::Manager::Applet::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Trigger::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Process()
    :
    cpu(std::make_shared<Native::Process::Cpu>())
{
    cpu->parent = this;

    yang_name = "process"; yang_parent_name = "native";
}

Native::Process::~Process()
{
}

bool Native::Process::has_data() const
{
    return (cpu !=  nullptr && cpu->has_data());
}

bool Native::Process::has_operation() const
{
    return is_set(operation)
	|| (cpu !=  nullptr && cpu->has_operation());
}

std::string Native::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

const EntityPath Native::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::Process::Cpu>();
        }
        return cpu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    return children;
}

void Native::Process::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Cpu()
    :
    threshold(std::make_shared<Native::Process::Cpu::Threshold>())
{
    threshold->parent = this;

    yang_name = "cpu"; yang_parent_name = "process";
}

Native::Process::Cpu::~Cpu()
{
}

bool Native::Process::Cpu::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Process::Cpu::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Process::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Process::Cpu::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Process::Cpu::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Threshold()
    :
    type(std::make_shared<Native::Process::Cpu::Threshold::Type>())
{
    type->parent = this;

    yang_name = "threshold"; yang_parent_name = "cpu";
}

Native::Process::Cpu::Threshold::~Threshold()
{
}

bool Native::Process::Cpu::Threshold::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Process::Cpu::Threshold::has_operation() const
{
    return is_set(operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Process::Cpu::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Process::Cpu::Threshold::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Process::Cpu::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Type()
    :
    interrupt(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>())
	,process(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>())
	,total(std::make_shared<Native::Process::Cpu::Threshold::Type::Total>())
{
    interrupt->parent = this;

    process->parent = this;

    total->parent = this;

    yang_name = "type"; yang_parent_name = "threshold";
}

Native::Process::Cpu::Threshold::Type::~Type()
{
}

bool Native::Process::Cpu::Threshold::Type::has_data() const
{
    return (interrupt !=  nullptr && interrupt->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Native::Process::Cpu::Threshold::Type::has_operation() const
{
    return is_set(operation)
	|| (interrupt !=  nullptr && interrupt->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interrupt")
    {
        if(interrupt == nullptr)
        {
            interrupt = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>();
        }
        return interrupt;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>();
        }
        return process;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Process::Cpu::Threshold::Type::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interrupt != nullptr)
    {
        children["interrupt"] = interrupt;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Interrupt::Interrupt()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>())
{
    rising->parent = this;

    yang_name = "interrupt"; yang_parent_name = "type";
}

Native::Process::Cpu::Threshold::Type::Interrupt::~Interrupt()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_operation() const
{
    return is_set(operation)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interrupt";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::Rising()
{
    yang_name = "rising"; yang_parent_name = "interrupt";
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising";
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/rising/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::Interval()
{
    yang_name = "interval"; yang_parent_name = "cpu-range";
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval";
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuRange_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{
    yang_name = "falling"; yang_parent_name = "cpu-range";
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Falling' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{
    yang_name = "cpu-range"; yang_parent_name = "falling";
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| is_set(interval.operation);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuRange_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Process::Cpu::Threshold::Type::Process_::Process_()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>())
{
    rising->parent = this;

    yang_name = "process"; yang_parent_name = "type";
}

Native::Process::Cpu::Threshold::Type::Process_::~Process_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_operation() const
{
    return is_set(operation)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::Rising()
{
    yang_name = "rising"; yang_parent_name = "process";
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::Rising::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising";
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/rising/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::Interval()
{
    yang_name = "interval"; yang_parent_name = "cpu-range";
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval";
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuRange_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{
    yang_name = "falling"; yang_parent_name = "cpu-range";
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Falling' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{
    yang_name = "cpu-range"; yang_parent_name = "falling";
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| is_set(interval.operation);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuRange_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Process::Cpu::Threshold::Type::Total::Total()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>())
{
    rising->parent = this;

    yang_name = "total"; yang_parent_name = "type";
}

Native::Process::Cpu::Threshold::Type::Total::~Total()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_data() const
{
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::has_operation() const
{
    return is_set(operation)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rising != nullptr)
    {
        children["rising"] = rising;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Total::Rising::Rising()
{
    yang_name = "rising"; yang_parent_name = "total";
}

Native::Process::Cpu::Threshold::Type::Total::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::Rising::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
    	,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising";
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_data() const
{
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/rising/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::Interval()
{
    yang_name = "interval"; yang_parent_name = "cpu-range";
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
    	,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval";
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuRange_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(falling != nullptr)
    {
        children["falling"] = falling;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
{
    yang_name = "falling"; yang_parent_name = "cpu-range";
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.size(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Falling' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        for(auto const & c : cpu_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        c->parent = this;
        cpu_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpu_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, std::string value)
{
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{
    yang_name = "cpu-range"; yang_parent_name = "falling";
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(operation)
	|| is_set(cpu_range.operation)
	|| is_set(interval.operation);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range" <<"[cpu-range='" <<cpu_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuRange_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.operation)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Exception::Exception()
    :
    crashinfo(nullptr) // presence node
{
    yang_name = "exception"; yang_parent_name = "native";
}

Native::Exception::~Exception()
{
}

bool Native::Exception::has_data() const
{
    return (crashinfo !=  nullptr && crashinfo->has_data());
}

bool Native::Exception::has_operation() const
{
    return is_set(operation)
	|| (crashinfo !=  nullptr && crashinfo->has_operation());
}

std::string Native::Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exception";

    return path_buffer.str();

}

const EntityPath Native::Exception::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crashinfo")
    {
        if(crashinfo == nullptr)
        {
            crashinfo = std::make_shared<Native::Exception::Crashinfo>();
        }
        return crashinfo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crashinfo != nullptr)
    {
        children["crashinfo"] = crashinfo;
    }

    return children;
}

void Native::Exception::set_value(const std::string & value_path, std::string value)
{
}

Native::Exception::Crashinfo::Crashinfo()
    :
    buffersize{YType::uint16, "buffersize"}
{
    yang_name = "crashinfo"; yang_parent_name = "exception";
}

Native::Exception::Crashinfo::~Crashinfo()
{
}

bool Native::Exception::Crashinfo::has_data() const
{
    return buffersize.is_set;
}

bool Native::Exception::Crashinfo::has_operation() const
{
    return is_set(operation)
	|| is_set(buffersize.operation);
}

std::string Native::Exception::Crashinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crashinfo";

    return path_buffer.str();

}

const EntityPath Native::Exception::Crashinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/exception/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.operation)) leaf_name_data.push_back(buffersize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Exception::Crashinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Exception::Crashinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Exception::Crashinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "buffersize")
    {
        buffersize = value;
    }
}

Native::Ap::Ap()
    :
    dot11(std::make_shared<Native::Ap::Dot11>())
{
    dot11->parent = this;

    yang_name = "ap"; yang_parent_name = "native";
}

Native::Ap::~Ap()
{
}

bool Native::Ap::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ap:ap";

    return path_buffer.str();

}

const EntityPath Native::Ap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Dot11>();
        }
        return dot11;
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
        auto c = std::make_shared<Native::Ap::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Group()
    :
    name{YType::str, "name"}
    	,
    config(std::make_shared<Native::Ap::Group::Config>())
{
    config->parent = this;

    yang_name = "group"; yang_parent_name = "ap";
}

Native::Ap::Group::~Group()
{
}

bool Native::Ap::Group::has_data() const
{
    return name.is_set
	|| (config !=  nullptr && config->has_data());
}

bool Native::Ap::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Ap::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ap::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Ap::Group::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Ap::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ap::Group::Config::Config()
    :
    description{YType::str, "description"},
    remote_lan{YType::str, "remote-lan"}
    	,
    airtime_fairness(std::make_shared<Native::Ap::Group::Config::AirtimeFairness>())
	,hyperlocation(nullptr) // presence node
	,ntp(std::make_shared<Native::Ap::Group::Config::Ntp>())
	,rf_profile(std::make_shared<Native::Ap::Group::Config::RfProfile>())
{
    airtime_fairness->parent = this;

    ntp->parent = this;

    rf_profile->parent = this;

    yang_name = "config"; yang_parent_name = "group";
}

Native::Ap::Group::Config::~Config()
{
}

bool Native::Ap::Group::Config::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wlan.size(); index++)
    {
        if(wlan[index]->has_data())
            return true;
    }
    return description.is_set
	|| remote_lan.is_set
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data())
	|| (hyperlocation !=  nullptr && hyperlocation->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (rf_profile !=  nullptr && rf_profile->has_data());
}

bool Native::Ap::Group::Config::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wlan.size(); index++)
    {
        if(wlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(remote_lan.operation)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation())
	|| (hyperlocation !=  nullptr && hyperlocation->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (rf_profile !=  nullptr && rf_profile->has_operation());
}

std::string Native::Ap::Group::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (remote_lan.is_set || is_set(remote_lan.operation)) leaf_name_data.push_back(remote_lan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Group::Config::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    if(child_yang_name == "hyperlocation")
    {
        if(hyperlocation == nullptr)
        {
            hyperlocation = std::make_shared<Native::Ap::Group::Config::Hyperlocation>();
        }
        return hyperlocation;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Ap::Group::Config::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group::Config::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    if(child_yang_name == "rf-profile")
    {
        if(rf_profile == nullptr)
        {
            rf_profile = std::make_shared<Native::Ap::Group::Config::RfProfile>();
        }
        return rf_profile;
    }

    if(child_yang_name == "wlan")
    {
        for(auto const & c : wlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ap::Group::Config::Wlan>();
        c->parent = this;
        wlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    if(hyperlocation != nullptr)
    {
        children["hyperlocation"] = hyperlocation;
    }

    if(ntp != nullptr)
    {
        children["ntp"] = ntp;
    }

    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    if(rf_profile != nullptr)
    {
        children["rf-profile"] = rf_profile;
    }

    for (auto const & c : wlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ap::Group::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "remote-lan")
    {
        remote_lan = value;
    }
}

Native::Ap::Group::Config::AirtimeFairness::AirtimeFairness()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11>())
{
    dot11->parent = this;

    yang_name = "airtime-fairness"; yang_parent_name = "config";
}

Native::Ap::Group::Config::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::has_operation() const
{
    return is_set(operation)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::AirtimeFairness::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AirtimeFairness' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz>())
	,y_5ghz(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz>())
{
    y_24ghz->parent = this;

    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "airtime-fairness";
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::has_operation() const
{
    return is_set(operation)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::AirtimeFairness::Dot11::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot11' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24GHz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_5GHz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24GHz"] = y_24ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5GHz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::Y_24Ghz()
    :
    mode{YType::enumeration, "mode"},
    optimization{YType::empty, "optimization"}
{
    yang_name = "_24GHz"; yang_parent_name = "dot11";
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::~Y_24Ghz()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::has_data() const
{
    return mode.is_set
	|| optimization.is_set;
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(optimization.operation);
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24GHz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Y_24Ghz' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.operation)) leaf_name_data.push_back(optimization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "optimization")
    {
        optimization = value;
    }
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Y_5Ghz()
    :
    optimization{YType::empty, "optimization"}
    	,
    mode(std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode>())
{
    mode->parent = this;

    yang_name = "_5GHz"; yang_parent_name = "dot11";
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::~Y_5Ghz()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::has_data() const
{
    return optimization.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::has_operation() const
{
    return is_set(operation)
	|| is_set(optimization.operation)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5GHz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Y_5Ghz' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimization.is_set || is_set(optimization.operation)) leaf_name_data.push_back(optimization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optimization")
    {
        optimization = value;
    }
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::Mode()
    :
    enforce_policy{YType::empty, "enforce-policy"},
    monitor{YType::empty, "monitor"}
{
    yang_name = "mode"; yang_parent_name = "_5GHz";
}

Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::~Mode()
{
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::has_data() const
{
    return enforce_policy.is_set
	|| monitor.is_set;
}

bool Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(enforce_policy.operation)
	|| is_set(monitor.operation);
}

std::string Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enforce_policy.is_set || is_set(enforce_policy.operation)) leaf_name_data.push_back(enforce_policy.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enforce-policy")
    {
        enforce_policy = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

Native::Ap::Group::Config::Hyperlocation::Hyperlocation()
    :
    threshold(std::make_shared<Native::Ap::Group::Config::Hyperlocation::Threshold>())
{
    threshold->parent = this;

    yang_name = "hyperlocation"; yang_parent_name = "config";
}

Native::Ap::Group::Config::Hyperlocation::~Hyperlocation()
{
}

bool Native::Ap::Group::Config::Hyperlocation::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Ap::Group::Config::Hyperlocation::has_operation() const
{
    return is_set(operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Ap::Group::Config::Hyperlocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyperlocation";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Hyperlocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hyperlocation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Hyperlocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Ap::Group::Config::Hyperlocation::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Hyperlocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Ap::Group::Config::Hyperlocation::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Config::Hyperlocation::Threshold::Threshold()
    :
    detection{YType::int8, "detection"},
    reset{YType::uint8, "reset"},
    trigger{YType::uint8, "trigger"}
{
    yang_name = "threshold"; yang_parent_name = "hyperlocation";
}

Native::Ap::Group::Config::Hyperlocation::Threshold::~Threshold()
{
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_data() const
{
    return detection.is_set
	|| reset.is_set
	|| trigger.is_set;
}

bool Native::Ap::Group::Config::Hyperlocation::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(detection.operation)
	|| is_set(reset.operation)
	|| is_set(trigger.operation);
}

std::string Native::Ap::Group::Config::Hyperlocation::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Hyperlocation::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.operation)) leaf_name_data.push_back(detection.get_name_leafdata());
    if (reset.is_set || is_set(reset.operation)) leaf_name_data.push_back(reset.get_name_leafdata());
    if (trigger.is_set || is_set(trigger.operation)) leaf_name_data.push_back(trigger.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Hyperlocation::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Hyperlocation::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Hyperlocation::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection")
    {
        detection = value;
    }
    if(value_path == "reset")
    {
        reset = value;
    }
    if(value_path == "trigger")
    {
        trigger = value;
    }
}

Native::Ap::Group::Config::Ntp::Ntp()
    :
    ip{YType::str, "ip"}
{
    yang_name = "ntp"; yang_parent_name = "config";
}

Native::Ap::Group::Config::Ntp::~Ntp()
{
}

bool Native::Ap::Group::Config::Ntp::has_data() const
{
    return ip.is_set;
}

bool Native::Ap::Group::Config::Ntp::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Ap::Group::Config::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Ntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ntp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Ntp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Ap::Group::Config::Port::Port()
    :
    id{YType::uint8, "id"},
    poe{YType::empty, "poe"},
    remote_lan{YType::str, "remote-lan"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "port"; yang_parent_name = "config";
}

Native::Ap::Group::Config::Port::~Port()
{
}

bool Native::Ap::Group::Config::Port::has_data() const
{
    return id.is_set
	|| poe.is_set
	|| remote_lan.is_set
	|| shutdown.is_set;
}

bool Native::Ap::Group::Config::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(poe.operation)
	|| is_set(remote_lan.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Ap::Group::Config::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poe.is_set || is_set(poe.operation)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (remote_lan.is_set || is_set(remote_lan.operation)) leaf_name_data.push_back(remote_lan.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "poe")
    {
        poe = value;
    }
    if(value_path == "remote-lan")
    {
        remote_lan = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Ap::Group::Config::RfProfile::RfProfile()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::RfProfile::Dot11>())
{
    dot11->parent = this;

    yang_name = "rf-profile"; yang_parent_name = "config";
}

Native::Ap::Group::Config::RfProfile::~RfProfile()
{
}

bool Native::Ap::Group::Config::RfProfile::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::RfProfile::has_operation() const
{
    return is_set(operation)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::RfProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rf-profile";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::RfProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RfProfile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::RfProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::RfProfile::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::RfProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::RfProfile::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Config::RfProfile::Dot11::Dot11()
    :
    y_24ghz{YType::str, "_24ghz"},
    y_5ghz{YType::str, "_5ghz"}
{
    yang_name = "dot11"; yang_parent_name = "rf-profile";
}

Native::Ap::Group::Config::RfProfile::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_data() const
{
    return y_24ghz.is_set
	|| y_5ghz.is_set;
}

bool Native::Ap::Group::Config::RfProfile::Dot11::has_operation() const
{
    return is_set(operation)
	|| is_set(y_24ghz.operation)
	|| is_set(y_5ghz.operation);
}

std::string Native::Ap::Group::Config::RfProfile::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::RfProfile::Dot11::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot11' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_24ghz.is_set || is_set(y_24ghz.operation)) leaf_name_data.push_back(y_24ghz.get_name_leafdata());
    if (y_5ghz.is_set || is_set(y_5ghz.operation)) leaf_name_data.push_back(y_5ghz.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::RfProfile::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::RfProfile::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::RfProfile::Dot11::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "_24ghz")
    {
        y_24ghz = value;
    }
    if(value_path == "_5ghz")
    {
        y_5ghz = value;
    }
}

Native::Ap::Group::Config::Wlan::Wlan()
    :
    name{YType::str, "name"},
    radio_policy{YType::enumeration, "radio-policy"},
    vlan{YType::str, "vlan"}
    	,
    airtime_fairness(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness>())
{
    airtime_fairness->parent = this;

    yang_name = "wlan"; yang_parent_name = "config";
}

Native::Ap::Group::Config::Wlan::~Wlan()
{
}

bool Native::Ap::Group::Config::Wlan::has_data() const
{
    return name.is_set
	|| radio_policy.is_set
	|| vlan.is_set
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_data());
}

bool Native::Ap::Group::Config::Wlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(radio_policy.operation)
	|| is_set(vlan.operation)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wlan" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Wlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (radio_policy.is_set || is_set(radio_policy.operation)) leaf_name_data.push_back(radio_policy.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "radio-policy")
    {
        radio_policy = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::AirtimeFairness()
    :
    dot11(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11>())
{
    dot11->parent = this;

    yang_name = "airtime-fairness"; yang_parent_name = "wlan";
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::~AirtimeFairness()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_data() const
{
    return (dot11 !=  nullptr && dot11->has_data());
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::has_operation() const
{
    return is_set(operation)
	|| (dot11 !=  nullptr && dot11->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "airtime-fairness";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Wlan::AirtimeFairness::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AirtimeFairness' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot11")
    {
        if(dot11 == nullptr)
        {
            dot11 = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11>();
        }
        return dot11;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot11 != nullptr)
    {
        children["dot11"] = dot11;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Dot11()
    :
    y_24ghz(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz>())
	,y_5ghz(std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz>())
{
    y_24ghz->parent = this;

    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "airtime-fairness";
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::~Dot11()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_data() const
{
    return (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::has_operation() const
{
    return is_set(operation)
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot11' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_24GHz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_5GHz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(y_24ghz != nullptr)
    {
        children["_24GHz"] = y_24ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5GHz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::Y_24Ghz()
    :
    policy{YType::str, "policy"}
{
    yang_name = "_24GHz"; yang_parent_name = "dot11";
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::~Y_24Ghz()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::has_data() const
{
    return policy.is_set;
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24GHz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Y_24Ghz' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::Y_5Ghz()
    :
    policy{YType::str, "policy"}
{
    yang_name = "_5GHz"; yang_parent_name = "dot11";
}

Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::~Y_5Ghz()
{
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::has_data() const
{
    return policy.is_set;
}

bool Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_5GHz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Y_5Ghz' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Native::Ap::Dot11::Dot11()
    :
    airtime_fairness(std::make_shared<Native::Ap::Dot11::AirtimeFairness>())
	,y_24ghz(std::make_shared<Native::Ap::Dot11::Y_24Ghz>())
	,y_49ghz(std::make_shared<Native::Ap::Dot11::Y_49Ghz>())
	,y_5ghz(std::make_shared<Native::Ap::Dot11::Y_5Ghz>())
{
    airtime_fairness->parent = this;

    y_24ghz->parent = this;

    y_49ghz->parent = this;

    y_5ghz->parent = this;

    yang_name = "dot11"; yang_parent_name = "ap";
}

Native::Ap::Dot11::~Dot11()
{
}

bool Native::Ap::Dot11::has_data() const
{
    return (airtime_fairness !=  nullptr && airtime_fairness->has_data())
	|| (y_24ghz !=  nullptr && y_24ghz->has_data())
	|| (y_49ghz !=  nullptr && y_49ghz->has_data())
	|| (y_5ghz !=  nullptr && y_5ghz->has_data());
}

bool Native::Ap::Dot11::has_operation() const
{
    return is_set(operation)
	|| (airtime_fairness !=  nullptr && airtime_fairness->has_operation())
	|| (y_24ghz !=  nullptr && y_24ghz->has_operation())
	|| (y_49ghz !=  nullptr && y_49ghz->has_operation())
	|| (y_5ghz !=  nullptr && y_5ghz->has_operation());
}

std::string Native::Ap::Dot11::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot11";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "airtime-fairness")
    {
        if(airtime_fairness == nullptr)
        {
            airtime_fairness = std::make_shared<Native::Ap::Dot11::AirtimeFairness>();
        }
        return airtime_fairness;
    }

    if(child_yang_name == "_24ghz")
    {
        if(y_24ghz == nullptr)
        {
            y_24ghz = std::make_shared<Native::Ap::Dot11::Y_24Ghz>();
        }
        return y_24ghz;
    }

    if(child_yang_name == "_49ghz")
    {
        if(y_49ghz == nullptr)
        {
            y_49ghz = std::make_shared<Native::Ap::Dot11::Y_49Ghz>();
        }
        return y_49ghz;
    }

    if(child_yang_name == "_5ghz")
    {
        if(y_5ghz == nullptr)
        {
            y_5ghz = std::make_shared<Native::Ap::Dot11::Y_5Ghz>();
        }
        return y_5ghz;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(airtime_fairness != nullptr)
    {
        children["airtime-fairness"] = airtime_fairness;
    }

    if(y_24ghz != nullptr)
    {
        children["_24ghz"] = y_24ghz;
    }

    if(y_49ghz != nullptr)
    {
        children["_49ghz"] = y_49ghz;
    }

    if(y_5ghz != nullptr)
    {
        children["_5ghz"] = y_5ghz;
    }

    return children;
}

void Native::Ap::Dot11::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_24Ghz::Y_24Ghz()
    :
    rate(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate>())
{
    rate->parent = this;

    yang_name = "_24ghz"; yang_parent_name = "dot11";
}

Native::Ap::Dot11::Y_24Ghz::~Y_24Ghz()
{
}

bool Native::Ap::Dot11::Y_24Ghz::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::Ap::Dot11::Y_24Ghz::has_operation() const
{
    return is_set(operation)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Ap::Dot11::Y_24Ghz::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_24ghz";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::Ap::Dot11::Y_24Ghz::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate()
    :
    rate_11m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M>())
	,rate_12m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M>())
	,rate_18m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M>())
	,rate_1m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M>())
	,rate_24m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M>())
	,rate_2m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M>())
	,rate_36m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M>())
	,rate_48m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M>())
	,rate_54m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M>())
	,rate_5_5m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M>())
	,rate_6m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M>())
	,rate_9m(std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M>())
{
    rate_11m->parent = this;

    rate_12m->parent = this;

    rate_18m->parent = this;

    rate_1m->parent = this;

    rate_24m->parent = this;

    rate_2m->parent = this;

    rate_36m->parent = this;

    rate_48m->parent = this;

    rate_54m->parent = this;

    rate_5_5m->parent = this;

    rate_6m->parent = this;

    rate_9m->parent = this;

    yang_name = "rate"; yang_parent_name = "_24ghz";
}

Native::Ap::Dot11::Y_24Ghz::Rate::~Rate()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::has_data() const
{
    return (rate_11m !=  nullptr && rate_11m->has_data())
	|| (rate_12m !=  nullptr && rate_12m->has_data())
	|| (rate_18m !=  nullptr && rate_18m->has_data())
	|| (rate_1m !=  nullptr && rate_1m->has_data())
	|| (rate_24m !=  nullptr && rate_24m->has_data())
	|| (rate_2m !=  nullptr && rate_2m->has_data())
	|| (rate_36m !=  nullptr && rate_36m->has_data())
	|| (rate_48m !=  nullptr && rate_48m->has_data())
	|| (rate_54m !=  nullptr && rate_54m->has_data())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_data())
	|| (rate_6m !=  nullptr && rate_6m->has_data())
	|| (rate_9m !=  nullptr && rate_9m->has_data());
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::has_operation() const
{
    return is_set(operation)
	|| (rate_11m !=  nullptr && rate_11m->has_operation())
	|| (rate_12m !=  nullptr && rate_12m->has_operation())
	|| (rate_18m !=  nullptr && rate_18m->has_operation())
	|| (rate_1m !=  nullptr && rate_1m->has_operation())
	|| (rate_24m !=  nullptr && rate_24m->has_operation())
	|| (rate_2m !=  nullptr && rate_2m->has_operation())
	|| (rate_36m !=  nullptr && rate_36m->has_operation())
	|| (rate_48m !=  nullptr && rate_48m->has_operation())
	|| (rate_54m !=  nullptr && rate_54m->has_operation())
	|| (rate_5_5m !=  nullptr && rate_5_5m->has_operation())
	|| (rate_6m !=  nullptr && rate_6m->has_operation())
	|| (rate_9m !=  nullptr && rate_9m->has_operation());
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RATE_11M")
    {
        if(rate_11m == nullptr)
        {
            rate_11m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M>();
        }
        return rate_11m;
    }

    if(child_yang_name == "RATE_12M")
    {
        if(rate_12m == nullptr)
        {
            rate_12m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M>();
        }
        return rate_12m;
    }

    if(child_yang_name == "RATE_18M")
    {
        if(rate_18m == nullptr)
        {
            rate_18m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M>();
        }
        return rate_18m;
    }

    if(child_yang_name == "RATE_1M")
    {
        if(rate_1m == nullptr)
        {
            rate_1m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M>();
        }
        return rate_1m;
    }

    if(child_yang_name == "RATE_24M")
    {
        if(rate_24m == nullptr)
        {
            rate_24m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M>();
        }
        return rate_24m;
    }

    if(child_yang_name == "RATE_2M")
    {
        if(rate_2m == nullptr)
        {
            rate_2m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M>();
        }
        return rate_2m;
    }

    if(child_yang_name == "RATE_36M")
    {
        if(rate_36m == nullptr)
        {
            rate_36m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M>();
        }
        return rate_36m;
    }

    if(child_yang_name == "RATE_48M")
    {
        if(rate_48m == nullptr)
        {
            rate_48m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M>();
        }
        return rate_48m;
    }

    if(child_yang_name == "RATE_54M")
    {
        if(rate_54m == nullptr)
        {
            rate_54m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M>();
        }
        return rate_54m;
    }

    if(child_yang_name == "RATE_5_5M")
    {
        if(rate_5_5m == nullptr)
        {
            rate_5_5m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M>();
        }
        return rate_5_5m;
    }

    if(child_yang_name == "RATE_6M")
    {
        if(rate_6m == nullptr)
        {
            rate_6m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M>();
        }
        return rate_6m;
    }

    if(child_yang_name == "RATE_9M")
    {
        if(rate_9m == nullptr)
        {
            rate_9m = std::make_shared<Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M>();
        }
        return rate_9m;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_11m != nullptr)
    {
        children["RATE_11M"] = rate_11m;
    }

    if(rate_12m != nullptr)
    {
        children["RATE_12M"] = rate_12m;
    }

    if(rate_18m != nullptr)
    {
        children["RATE_18M"] = rate_18m;
    }

    if(rate_1m != nullptr)
    {
        children["RATE_1M"] = rate_1m;
    }

    if(rate_24m != nullptr)
    {
        children["RATE_24M"] = rate_24m;
    }

    if(rate_2m != nullptr)
    {
        children["RATE_2M"] = rate_2m;
    }

    if(rate_36m != nullptr)
    {
        children["RATE_36M"] = rate_36m;
    }

    if(rate_48m != nullptr)
    {
        children["RATE_48M"] = rate_48m;
    }

    if(rate_54m != nullptr)
    {
        children["RATE_54M"] = rate_54m;
    }

    if(rate_5_5m != nullptr)
    {
        children["RATE_5_5M"] = rate_5_5m;
    }

    if(rate_6m != nullptr)
    {
        children["RATE_6M"] = rate_6m;
    }

    if(rate_9m != nullptr)
    {
        children["RATE_9M"] = rate_9m;
    }

    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::Rate_11M()
    :
    supported{YType::empty, "supported"}
{
    yang_name = "RATE_11M"; yang_parent_name = "rate";
}

Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::~Rate_11M()
{
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::has_data() const
{
    return supported.is_set;
}

bool Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation);
}

std::string Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RATE_11M";

    return path_buffer.str();

}

const EntityPath Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-ap:ap/dot11/_24ghz/rate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

const Enum::YLeaf Native::Line::Vty::Password::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Vty::Password::TypeEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::InputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::OutputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::lat {1, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::mop {2, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::none {4, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::pad {5, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::ProtocolEnum::udptn {9, "udptn"};

const Enum::YLeaf Native::Wsma::Profile::Listener::TransportEnum::http {0, "http"};
const Enum::YLeaf Native::Wsma::Profile::Listener::TransportEnum::https {1, "https"};
const Enum::YLeaf Native::Wsma::Profile::Listener::TransportEnum::ssh {2, "ssh"};
const Enum::YLeaf Native::Wsma::Profile::Listener::TransportEnum::tls {3, "tls"};

const Enum::YLeaf Native::Event::Manager::Applet::AuthorizationEnum::bypass {0, "bypass"};

const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::counter {0, "counter"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::gauge {1, "gauge"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::int_ {2, "int"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::ipv4 {3, "ipv4"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::octet {4, "octet"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::string {5, "string"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum::uint {6, "uint"};

const Enum::YLeaf Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::ModeEnum::enforce_policy {0, "enforce-policy"};
const Enum::YLeaf Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::ModeEnum::monitor {1, "monitor"};

const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicyEnum::all {0, "all"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicyEnum::dot11a {1, "dot11a"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicyEnum::dot11bg {2, "dot11bg"};
const Enum::YLeaf Native::Ap::Group::Config::Wlan::RadioPolicyEnum::dot11g {3, "dot11g"};


}
}

