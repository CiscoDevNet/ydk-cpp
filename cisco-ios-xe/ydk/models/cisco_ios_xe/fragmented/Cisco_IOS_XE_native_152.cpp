
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_152.hpp"
#include "Cisco_IOS_XE_native_153.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Line::LineList::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{
    yang_name = "databits"; yang_parent_name = "line-list";
}

Native::Line::LineList::Databits::~Databits()
{
}

bool Native::Line::LineList::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::LineList::Databits::has_operation() const
{
    return is_set(operation)
	|| is_set(set_to_5.operation)
	|| is_set(set_to_6.operation)
	|| is_set(set_to_7.operation)
	|| is_set(set_to_8.operation);
}

std::string Native::Line::LineList::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Databits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Databits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.operation)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.operation)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.operation)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.operation)) leaf_name_data.push_back(set_to_8.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Databits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
    }
}

Native::Line::LineList::EscapeCharacter::EscapeCharacter()
    :
    char{YType::str, "char"},
    soft{YType::empty, "soft"}
{
    yang_name = "escape-character"; yang_parent_name = "line-list";
}

Native::Line::LineList::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::LineList::EscapeCharacter::has_data() const
{
    return char.is_set
	|| soft.is_set;
}

bool Native::Line::LineList::EscapeCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(char.operation)
	|| is_set(soft.operation);
}

std::string Native::Line::LineList::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::EscapeCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EscapeCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char.is_set || is_set(char.operation)) leaf_name_data.push_back(char.get_name_leafdata());
    if (soft.is_set || is_set(soft.operation)) leaf_name_data.push_back(soft.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::EscapeCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "char")
    {
        char = value;
    }
    if(value_path == "soft")
    {
        soft = value;
    }
}

Native::Line::LineList::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{
    yang_name = "no-exec"; yang_parent_name = "line-list";
}

Native::Line::LineList::NoExec::~NoExec()
{
}

bool Native::Line::LineList::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::LineList::NoExec::has_operation() const
{
    return is_set(operation)
	|| is_set(exec.operation);
}

std::string Native::Line::LineList::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::NoExec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoExec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.operation)) leaf_name_data.push_back(exec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::NoExec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exec")
    {
        exec = value;
    }
}

Native::Line::LineList::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::LineList::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "line-list";
}

Native::Line::LineList::Exec::~Exec()
{
}

bool Native::Line::LineList::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::LineList::Exec::has_operation() const
{
    return is_set(operation)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::LineList::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::LineList::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::LineList::Exec::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{
    yang_name = "prompt"; yang_parent_name = "exec";
}

Native::Line::LineList::Exec::Prompt::~Prompt()
{
}

bool Native::Line::LineList::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::LineList::Exec::Prompt::has_operation() const
{
    return is_set(operation)
	|| is_set(timestamp.operation);
}

std::string Native::Line::LineList::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Exec::Prompt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prompt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Exec::Prompt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Native::Line::LineList::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "exec-timeout"; yang_parent_name = "line-list";
}

Native::Line::LineList::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::LineList::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::LineList::ExecTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Line::LineList::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::ExecTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExecTimeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::ExecTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::LineList::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{
    yang_name = "flowcontrol"; yang_parent_name = "line-list";
}

Native::Line::LineList::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::LineList::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::LineList::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(hardware.operation)
	|| is_set(none.operation)
	|| is_set(software.operation);
}

std::string Native::Line::LineList::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.operation)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.operation)) leaf_name_data.push_back(software.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hardware")
    {
        hardware = value;
    }
    if(value_path == "NONE")
    {
        none = value;
    }
    if(value_path == "software")
    {
        software = value;
    }
}

Native::Line::LineList::History::History()
    :
    size{YType::uint8, "size"}
{
    yang_name = "history"; yang_parent_name = "line-list";
}

Native::Line::LineList::History::~History()
{
}

bool Native::Line::LineList::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::LineList::History::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Line::LineList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Line::LineList::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{
    yang_name = "ip"; yang_parent_name = "line-list";
}

Native::Line::LineList::Ip::~Ip()
{
}

bool Native::Line::LineList::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::LineList::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp.operation)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::LineList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Ip::get_entity_path(Entity* ancestor) const
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

    if (tcp.is_set || is_set(tcp.operation)) leaf_name_data.push_back(tcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::LineList::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::LineList::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp")
    {
        tcp = value;
    }
}

Native::Line::LineList::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{
    yang_name = "netmask-format"; yang_parent_name = "ip";
}

Native::Line::LineList::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::LineList::Ip::NetmaskFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation);
}

std::string Native::Line::LineList::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Ip::NetmaskFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetmaskFormat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Ip::NetmaskFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
}

Native::Line::LineList::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::LineList::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "line-list";
}

Native::Line::LineList::Ipv6::~Ipv6()
{
}

bool Native::Line::LineList::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::LineList::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::LineList::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Ipv6::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::LineList::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "ipv6";
}

Native::Line::LineList::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::LineList::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Ipv6::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::LineList::Ipv6::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{
    yang_name = "access-class"; yang_parent_name = "access-class";
}

Native::Line::LineList::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::LineList::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(operation)
	|| is_set(access_class_name.operation)
	|| is_set(enumeration_in_out.operation);
}

std::string Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.operation)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.operation)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
    }
}

Native::Line::LineList::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "line-list";
}

Native::Line::LineList::Logging::~Logging()
{
}

bool Native::Line::LineList::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::LineList::Logging::has_operation() const
{
    return is_set(operation)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::LineList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::LineList::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::LineList::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Logging::Synchronous::Synchronous()
{
    yang_name = "synchronous"; yang_parent_name = "logging";
}

Native::Line::LineList::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::LineList::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::LineList::Logging::Synchronous::has_operation() const
{
    return is_set(operation);
}

std::string Native::Line::LineList::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Logging::Synchronous::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Synchronous' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Logging::Synchronous::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{
    yang_name = "login"; yang_parent_name = "line-list";
}

Native::Line::LineList::Login::~Login()
{
}

bool Native::Line::LineList::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::LineList::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication.operation)
	|| is_set(local.operation);
}

std::string Native::Line::LineList::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Login' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Line::LineList::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{
    yang_name = "media-type"; yang_parent_name = "line-list";
}

Native::Line::LineList::MediaType::~MediaType()
{
}

bool Native::Line::LineList::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::LineList::MediaType::has_operation() const
{
    return is_set(operation)
	|| is_set(rj45.operation);
}

std::string Native::Line::LineList::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.operation)) leaf_name_data.push_back(rj45.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rj45")
    {
        rj45 = value;
    }
}

Native::Line::LineList::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{
    yang_name = "modem"; yang_parent_name = "line-list";
}

Native::Line::LineList::Modem::~Modem()
{
}

bool Native::Line::LineList::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::LineList::Modem::has_operation() const
{
    return is_set(operation)
	|| is_set(answer_timeout.operation)
	|| is_set(cts_alarm.operation)
	|| is_set(dialin.operation)
	|| is_set(dtr_active.operation)
	|| is_set(dtr_delay.operation)
	|| is_set(host.operation)
	|| is_set(inout.operation)
	|| is_set(printer.operation);
}

std::string Native::Line::LineList::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Modem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.operation)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.operation)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.operation)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.operation)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.operation)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.operation)) leaf_name_data.push_back(printer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::LineList::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Modem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
    }
    if(value_path == "Host")
    {
        host = value;
    }
    if(value_path == "InOut")
    {
        inout = value;
    }
    if(value_path == "Printer")
    {
        printer = value;
    }
}

Native::Line::LineList::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{
    yang_name = "padding"; yang_parent_name = "line-list";
}

Native::Line::LineList::Padding::~Padding()
{
}

bool Native::Line::LineList::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::LineList::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation)
	|| is_set(null.operation);
}

std::string Native::Line::LineList::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Padding::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Padding::set_value(const std::string & value_path, std::string value)
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

Native::Line::LineList::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{
    yang_name = "parity"; yang_parent_name = "line-list";
}

Native::Line::LineList::Parity::~Parity()
{
}

bool Native::Line::LineList::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::LineList::Parity::has_operation() const
{
    return is_set(operation)
	|| is_set(even.operation)
	|| is_set(mark.operation)
	|| is_set(none.operation)
	|| is_set(odd.operation)
	|| is_set(space.operation);
}

std::string Native::Line::LineList::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Parity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Parity::set_value(const std::string & value_path, std::string value)
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

Native::Line::LineList::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "password"; yang_parent_name = "line-list";
}

Native::Line::LineList::Password::~Password()
{
}

bool Native::Line::LineList::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::LineList::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Line::LineList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Password::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Password::set_value(const std::string & value_path, std::string value)
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

Native::Line::LineList::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{
    yang_name = "prc"; yang_parent_name = "line-list";
}

Native::Line::LineList::Prc::~Prc()
{
}

bool Native::Line::LineList::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::LineList::Prc::has_operation() const
{
    return is_set(operation)
	|| is_set(expose.operation)
	|| is_set(hide.operation);
}

std::string Native::Line::LineList::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Prc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Prc::set_value(const std::string & value_path, std::string value)
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

Native::Line::LineList::Privilege::Privilege()
    :
    level(nullptr) // presence node
{
    yang_name = "privilege"; yang_parent_name = "line-list";
}

Native::Line::LineList::Privilege::~Privilege()
{
}

bool Native::Line::LineList::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::LineList::Privilege::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::LineList::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Privilege::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::LineList::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::LineList::Privilege::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{
    yang_name = "level"; yang_parent_name = "privilege";
}

Native::Line::LineList::Privilege::Level::~Level()
{
}

bool Native::Line::LineList::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::LineList::Privilege::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Line::LineList::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Privilege::Level::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Privilege::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Line::LineList::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{
    yang_name = "session-timeout"; yang_parent_name = "line-list";
}

Native::Line::LineList::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::LineList::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::LineList::SessionTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation)
	|| is_set(session_timeout_value.operation);
}

std::string Native::Line::LineList::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::SessionTimeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::SessionTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::LineList::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{
    yang_name = "timeout"; yang_parent_name = "line-list";
}

Native::Line::LineList::Timeout::~Timeout()
{
}

bool Native::Line::LineList::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::LineList::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Native::Line::LineList::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Timeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
    }
}

Native::Line::LineList::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{
    yang_name = "telnet"; yang_parent_name = "line-list";
}

Native::Line::LineList::Telnet::~Telnet()
{
}

bool Native::Line::LineList::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::LineList::Telnet::has_operation() const
{
    return is_set(operation)
	|| is_set(transparent.operation);
}

std::string Native::Line::LineList::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Telnet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Telnet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Line::LineList::Transport::Transport()
    :
    input(std::make_shared<Native::Line::LineList::Transport::Input>())
	,output(std::make_shared<Native::Line::LineList::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;

    output->parent = this;

    yang_name = "transport"; yang_parent_name = "line-list";
}

Native::Line::LineList::Transport::~Transport()
{
}

bool Native::Line::LineList::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::LineList::Transport::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::LineList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Transport::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::LineList::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::LineList::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::LineList::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::get_children() const
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

void Native::Line::LineList::Transport::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::LineList::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{
    yang_name = "input"; yang_parent_name = "transport";
}

Native::Line::LineList::Transport::Input::~Input()
{
}

bool Native::Line::LineList::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::LineList::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(input.operation);
}

std::string Native::Line::LineList::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Transport::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Transport::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

Native::Line::LineList::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{
    yang_name = "output"; yang_parent_name = "transport";
}

Native::Line::LineList::Transport::Output::~Output()
{
}

bool Native::Line::LineList::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::LineList::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Line::LineList::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Transport::Output::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Transport::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

Native::Line::LineList::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "preferred"; yang_parent_name = "transport";
}

Native::Line::LineList::Transport::Preferred::~Preferred()
{
}

bool Native::Line::LineList::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::LineList::Transport::Preferred::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Line::LineList::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::Transport::Preferred::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Transport::Preferred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Line::LineList::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "usb-inactivity-timeout"; yang_parent_name = "line-list";
}

Native::Line::LineList::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::LineList::UsbInactivityTimeout::has_data() const
{
    return switch.is_set;
}

bool Native::Line::LineList::UsbInactivityTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::Line::LineList::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::UsbInactivityTimeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::UsbInactivityTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Line::LineList::VacantMessage::VacantMessage()
    :
    banner{YType::str, "banner"}
{
    yang_name = "vacant-message"; yang_parent_name = "line-list";
}

Native::Line::LineList::VacantMessage::~VacantMessage()
{
}

bool Native::Line::LineList::VacantMessage::has_data() const
{
    return banner.is_set;
}

bool Native::Line::LineList::VacantMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(banner.operation);
}

std::string Native::Line::LineList::VacantMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacant-message";

    return path_buffer.str();

}

const EntityPath Native::Line::LineList::VacantMessage::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::LineList::VacantMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::VacantMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::VacantMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "banner")
    {
        banner = value;
    }
}

Native::Line::Aux::Aux()
    :
    first{YType::enumeration, "first"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    refuse_message{YType::str, "refuse-message"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::Aux::AccessClass>())
	,authorization(std::make_shared<Native::Line::Aux::Authorization>())
	,autocommand(std::make_shared<Native::Line::Aux::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::Aux::Databits>())
	,escape_character(std::make_shared<Native::Line::Aux::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::Aux::Exec>())
	,exec_timeout(std::make_shared<Native::Line::Aux::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::Aux::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::Aux::Ip>())
	,ipv6(std::make_shared<Native::Line::Aux::Ipv6>())
	,logging(std::make_shared<Native::Line::Aux::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::Aux::MediaType>())
	,modem(std::make_shared<Native::Line::Aux::Modem>())
	,no_exec(std::make_shared<Native::Line::Aux::NoExec>())
	,padding(std::make_shared<Native::Line::Aux::Padding>())
	,parity(std::make_shared<Native::Line::Aux::Parity>())
	,password(std::make_shared<Native::Line::Aux::Password>())
	,prc(std::make_shared<Native::Line::Aux::Prc>())
	,privilege(std::make_shared<Native::Line::Aux::Privilege>())
	,session_timeout(std::make_shared<Native::Line::Aux::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::Aux::Telnet>())
	,timeout(std::make_shared<Native::Line::Aux::Timeout>())
	,transport(std::make_shared<Native::Line::Aux::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::Aux::UsbInactivityTimeout>())
	,vacant_message(nullptr) // presence node
{
    access_class->parent = this;

    authorization->parent = this;

    autocommand->parent = this;

    databits->parent = this;

    escape_character->parent = this;

    exec->parent = this;

    exec_timeout->parent = this;

    flowcontrol->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    logging->parent = this;

    media_type->parent = this;

    modem->parent = this;

    no_exec->parent = this;

    padding->parent = this;

    parity->parent = this;

    password->parent = this;

    prc->parent = this;

    privilege->parent = this;

    session_timeout->parent = this;

    telnet->parent = this;

    timeout->parent = this;

    transport->parent = this;

    usb_inactivity_timeout->parent = this;

    yang_name = "aux"; yang_parent_name = "line";
}

Native::Line::Aux::~Aux()
{
}

bool Native::Line::Aux::has_data() const
{
    return first.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| refuse_message.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data())
	|| (vacant_message !=  nullptr && vacant_message->has_data());
}

bool Native::Line::Aux::has_operation() const
{
    return is_set(operation)
	|| is_set(first.operation)
	|| is_set(activation_character.operation)
	|| is_set(data_character_bits.operation)
	|| is_set(domain_lookup.operation)
	|| is_set(editing.operation)
	|| is_set(exec_banner.operation)
	|| is_set(exec_character_bits.operation)
	|| is_set(full_help.operation)
	|| is_set(international.operation)
	|| is_set(length.operation)
	|| is_set(line.operation)
	|| is_set(location.operation)
	|| is_set(monitor.operation)
	|| is_set(motd_banner.operation)
	|| is_set(no_activation_character.operation)
	|| is_set(notify.operation)
	|| is_set(refuse_message.operation)
	|| is_set(rotary.operation)
	|| is_set(rxspeed.operation)
	|| is_set(special_character_bits.operation)
	|| is_set(speed.operation)
	|| is_set(start_character.operation)
	|| is_set(stop_character.operation)
	|| is_set(stopbits.operation)
	|| is_set(terminal_type.operation)
	|| is_set(txspeed.operation)
	|| is_set(width.operation)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation())
	|| (vacant_message !=  nullptr && vacant_message->has_operation());
}

std::string Native::Line::Aux::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aux" <<"[first='" <<first <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.operation)) leaf_name_data.push_back(first.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.operation)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.operation)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.operation)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.operation)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.operation)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.operation)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.operation)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.operation)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.operation)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.operation)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.operation)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (refuse_message.is_set || is_set(refuse_message.operation)) leaf_name_data.push_back(refuse_message.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.operation)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.operation)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.operation)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.operation)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.operation)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.operation)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.operation)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Aux::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Aux::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Aux::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Aux::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Aux::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Aux::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Aux::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Aux::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Aux::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Aux::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Aux::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Aux::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Aux::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Aux::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Aux::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Aux::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Aux::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Aux::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Aux::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Aux::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Aux::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Aux::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Aux::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Aux::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Aux::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Aux::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Aux::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    if(child_yang_name == "vacant-message")
    {
        if(vacant_message == nullptr)
        {
            vacant_message = std::make_shared<Native::Line::Aux::VacantMessage>();
        }
        return vacant_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    if(vacant_message != nullptr)
    {
        children["vacant-message"] = vacant_message;
    }

    return children;
}

void Native::Line::Aux::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first")
    {
        first = value;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
    }
    if(value_path == "editing")
    {
        editing = value;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
    }
    if(value_path == "full-help")
    {
        full_help = value;
    }
    if(value_path == "international")
    {
        international = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
    }
    if(value_path == "notify")
    {
        notify = value;
    }
    if(value_path == "refuse-message")
    {
        refuse_message = value;
    }
    if(value_path == "rotary")
    {
        rotary = value;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "start-character")
    {
        start_character = value;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

Native::Line::Aux::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Aux::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "aux";
}

Native::Line::Aux::Authorization::~Authorization()
{
}

bool Native::Line::Aux::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::Aux::Authorization::has_operation() const
{
    return is_set(operation)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::Aux::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Aux::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::Aux::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{
    yang_name = "command"; yang_parent_name = "authorization";
}

Native::Line::Aux::Authorization::Command::~Command()
{
}

bool Native::Line::Aux::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::Aux::Authorization::Command::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_name.operation)
	|| is_set(enable_level.operation);
}

std::string Native::Line::Aux::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Authorization::Command::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Command' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.operation)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.operation)) leaf_name_data.push_back(enable_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Authorization::Command::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
    }
}

Native::Line::Aux::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "aux";
}

Native::Line::Aux::AccessClass::~AccessClass()
{
}

bool Native::Line::Aux::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Aux::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::Aux::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Aux::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{
    yang_name = "acccess-list"; yang_parent_name = "access-class";
}

Native::Line::Aux::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Aux::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Aux::AccessClass::AcccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(access_list.operation)
	|| is_set(vrf_also.operation);
}

std::string Native::Line::Aux::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::AccessClass::AcccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcccessList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.operation)) leaf_name_data.push_back(vrf_also.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AccessClass::AcccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
    }
}

Native::Line::Aux::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{
    yang_name = "autocommand"; yang_parent_name = "aux";
}

Native::Line::Aux::Autocommand::~Autocommand()
{
}

bool Native::Line::Aux::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Aux::Autocommand::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Aux::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Autocommand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autocommand' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Aux::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Aux::Autocommand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::Aux::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{
    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand";
}

Native::Line::Aux::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::Aux::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoSuppressLinenumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::Aux::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{
    yang_name = "autocommand-options"; yang_parent_name = "aux";
}

Native::Line::Aux::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Aux::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Aux::AutocommandOptions::has_operation() const
{
    return is_set(operation)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Aux::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::AutocommandOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutocommandOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Aux::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Aux::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Aux::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Aux::AutocommandOptions::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{
    yang_name = "abort-character"; yang_parent_name = "autocommand-options";
}

Native::Line::Aux::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::Aux::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation);
}

std::string Native::Line::Aux::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::AutocommandOptions::AbortCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AbortCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.operation)) leaf_name_data.push_back(character.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "character")
    {
        character = value;
    }
}

Native::Line::Aux::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{
    yang_name = "delay"; yang_parent_name = "autocommand-options";
}

Native::Line::Aux::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::Aux::AutocommandOptions::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation);
}

std::string Native::Line::Aux::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::AutocommandOptions::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AutocommandOptions::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Line::Aux::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{
    yang_name = "nohangup"; yang_parent_name = "autocommand-options";
}

Native::Line::Aux::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Aux::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(operation)
	|| is_set(abort_character.operation)
	|| is_set(delay.operation);
}

std::string Native::Line::Aux::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::AutocommandOptions::Nohangup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nohangup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.operation)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::AutocommandOptions::Nohangup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Line::Aux::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{
    yang_name = "databits"; yang_parent_name = "aux";
}

Native::Line::Aux::Databits::~Databits()
{
}

bool Native::Line::Aux::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Aux::Databits::has_operation() const
{
    return is_set(operation)
	|| is_set(set_to_5.operation)
	|| is_set(set_to_6.operation)
	|| is_set(set_to_7.operation)
	|| is_set(set_to_8.operation);
}

std::string Native::Line::Aux::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Databits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Databits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.operation)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.operation)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.operation)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.operation)) leaf_name_data.push_back(set_to_8.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Databits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
    }
}

Native::Line::Aux::EscapeCharacter::EscapeCharacter()
    :
    char{YType::str, "char"},
    soft{YType::empty, "soft"}
{
    yang_name = "escape-character"; yang_parent_name = "aux";
}

Native::Line::Aux::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Aux::EscapeCharacter::has_data() const
{
    return char.is_set
	|| soft.is_set;
}

bool Native::Line::Aux::EscapeCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(char.operation)
	|| is_set(soft.operation);
}

std::string Native::Line::Aux::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::EscapeCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EscapeCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char.is_set || is_set(char.operation)) leaf_name_data.push_back(char.get_name_leafdata());
    if (soft.is_set || is_set(soft.operation)) leaf_name_data.push_back(soft.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::EscapeCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "char")
    {
        char = value;
    }
    if(value_path == "soft")
    {
        soft = value;
    }
}

Native::Line::Aux::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{
    yang_name = "no-exec"; yang_parent_name = "aux";
}

Native::Line::Aux::NoExec::~NoExec()
{
}

bool Native::Line::Aux::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::Aux::NoExec::has_operation() const
{
    return is_set(operation)
	|| is_set(exec.operation);
}

std::string Native::Line::Aux::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::NoExec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoExec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.operation)) leaf_name_data.push_back(exec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::NoExec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exec")
    {
        exec = value;
    }
}

Native::Line::Aux::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Aux::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "aux";
}

Native::Line::Aux::Exec::~Exec()
{
}

bool Native::Line::Aux::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Aux::Exec::has_operation() const
{
    return is_set(operation)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Aux::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Aux::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::Aux::Exec::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{
    yang_name = "prompt"; yang_parent_name = "exec";
}

Native::Line::Aux::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Aux::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::Aux::Exec::Prompt::has_operation() const
{
    return is_set(operation)
	|| is_set(timestamp.operation);
}

std::string Native::Line::Aux::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Exec::Prompt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prompt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Exec::Prompt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Native::Line::Aux::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "exec-timeout"; yang_parent_name = "aux";
}

Native::Line::Aux::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Aux::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Aux::ExecTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Line::Aux::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::ExecTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExecTimeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::ExecTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::Aux::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{
    yang_name = "flowcontrol"; yang_parent_name = "aux";
}

Native::Line::Aux::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Aux::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::Aux::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(hardware.operation)
	|| is_set(none.operation)
	|| is_set(software.operation);
}

std::string Native::Line::Aux::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.operation)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.operation)) leaf_name_data.push_back(software.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hardware")
    {
        hardware = value;
    }
    if(value_path == "NONE")
    {
        none = value;
    }
    if(value_path == "software")
    {
        software = value;
    }
}

Native::Line::Aux::History::History()
    :
    size{YType::uint8, "size"}
{
    yang_name = "history"; yang_parent_name = "aux";
}

Native::Line::Aux::History::~History()
{
}

bool Native::Line::Aux::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::Aux::History::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Line::Aux::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Line::Aux::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{
    yang_name = "ip"; yang_parent_name = "aux";
}

Native::Line::Aux::Ip::~Ip()
{
}

bool Native::Line::Aux::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Aux::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp.operation)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Aux::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Ip::get_entity_path(Entity* ancestor) const
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

    if (tcp.is_set || is_set(tcp.operation)) leaf_name_data.push_back(tcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Aux::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::Aux::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp")
    {
        tcp = value;
    }
}

Native::Line::Aux::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{
    yang_name = "netmask-format"; yang_parent_name = "ip";
}

Native::Line::Aux::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Aux::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::Aux::Ip::NetmaskFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation);
}

std::string Native::Line::Aux::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Ip::NetmaskFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetmaskFormat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Ip::NetmaskFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
}

Native::Line::Aux::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Aux::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "aux";
}

Native::Line::Aux::Ipv6::~Ipv6()
{
}

bool Native::Line::Aux::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Aux::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Aux::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Ipv6::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Aux::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::Aux::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Ipv6::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "ipv6";
}

Native::Line::Aux::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Aux::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Aux::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::Aux::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Ipv6::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Aux::Ipv6::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{
    yang_name = "access-class"; yang_parent_name = "access-class";
}

Native::Line::Aux::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Aux::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Aux::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(operation)
	|| is_set(access_class_name.operation)
	|| is_set(enumeration_in_out.operation);
}

std::string Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.operation)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.operation)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
    }
}

Native::Line::Aux::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "aux";
}

Native::Line::Aux::Logging::~Logging()
{
}

bool Native::Line::Aux::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Aux::Logging::has_operation() const
{
    return is_set(operation)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Aux::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Aux::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::Aux::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Logging::Synchronous::Synchronous()
{
    yang_name = "synchronous"; yang_parent_name = "logging";
}

Native::Line::Aux::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Aux::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::Aux::Logging::Synchronous::has_operation() const
{
    return is_set(operation);
}

std::string Native::Line::Aux::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Logging::Synchronous::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Synchronous' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Logging::Synchronous::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{
    yang_name = "login"; yang_parent_name = "aux";
}

Native::Line::Aux::Login::~Login()
{
}

bool Native::Line::Aux::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::Aux::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication.operation)
	|| is_set(local.operation);
}

std::string Native::Line::Aux::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Login' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Line::Aux::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{
    yang_name = "media-type"; yang_parent_name = "aux";
}

Native::Line::Aux::MediaType::~MediaType()
{
}

bool Native::Line::Aux::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::Aux::MediaType::has_operation() const
{
    return is_set(operation)
	|| is_set(rj45.operation);
}

std::string Native::Line::Aux::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.operation)) leaf_name_data.push_back(rj45.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rj45")
    {
        rj45 = value;
    }
}

Native::Line::Aux::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{
    yang_name = "modem"; yang_parent_name = "aux";
}

Native::Line::Aux::Modem::~Modem()
{
}

bool Native::Line::Aux::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::Aux::Modem::has_operation() const
{
    return is_set(operation)
	|| is_set(answer_timeout.operation)
	|| is_set(cts_alarm.operation)
	|| is_set(dialin.operation)
	|| is_set(dtr_active.operation)
	|| is_set(dtr_delay.operation)
	|| is_set(host.operation)
	|| is_set(inout.operation)
	|| is_set(printer.operation);
}

std::string Native::Line::Aux::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Modem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.operation)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.operation)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.operation)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.operation)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.operation)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.operation)) leaf_name_data.push_back(printer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Aux::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Modem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
    }
    if(value_path == "Host")
    {
        host = value;
    }
    if(value_path == "InOut")
    {
        inout = value;
    }
    if(value_path == "Printer")
    {
        printer = value;
    }
}

Native::Line::Aux::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{
    yang_name = "padding"; yang_parent_name = "aux";
}

Native::Line::Aux::Padding::~Padding()
{
}

bool Native::Line::Aux::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Aux::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation)
	|| is_set(null.operation);
}

std::string Native::Line::Aux::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Padding::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Padding::set_value(const std::string & value_path, std::string value)
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

Native::Line::Aux::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{
    yang_name = "parity"; yang_parent_name = "aux";
}

Native::Line::Aux::Parity::~Parity()
{
}

bool Native::Line::Aux::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Aux::Parity::has_operation() const
{
    return is_set(operation)
	|| is_set(even.operation)
	|| is_set(mark.operation)
	|| is_set(none.operation)
	|| is_set(odd.operation)
	|| is_set(space.operation);
}

std::string Native::Line::Aux::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Parity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Parity::set_value(const std::string & value_path, std::string value)
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

Native::Line::Aux::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "password"; yang_parent_name = "aux";
}

Native::Line::Aux::Password::~Password()
{
}

bool Native::Line::Aux::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::Aux::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Line::Aux::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Password::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Password::set_value(const std::string & value_path, std::string value)
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

Native::Line::Aux::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{
    yang_name = "prc"; yang_parent_name = "aux";
}

Native::Line::Aux::Prc::~Prc()
{
}

bool Native::Line::Aux::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Aux::Prc::has_operation() const
{
    return is_set(operation)
	|| is_set(expose.operation)
	|| is_set(hide.operation);
}

std::string Native::Line::Aux::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Prc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Prc::set_value(const std::string & value_path, std::string value)
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

Native::Line::Aux::Privilege::Privilege()
    :
    level(nullptr) // presence node
{
    yang_name = "privilege"; yang_parent_name = "aux";
}

Native::Line::Aux::Privilege::~Privilege()
{
}

bool Native::Line::Aux::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Aux::Privilege::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Aux::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Privilege::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Aux::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::Aux::Privilege::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{
    yang_name = "level"; yang_parent_name = "privilege";
}

Native::Line::Aux::Privilege::Level::~Level()
{
}

bool Native::Line::Aux::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::Aux::Privilege::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Line::Aux::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Privilege::Level::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Privilege::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Line::Aux::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{
    yang_name = "session-timeout"; yang_parent_name = "aux";
}

Native::Line::Aux::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Aux::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::Aux::SessionTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation)
	|| is_set(session_timeout_value.operation);
}

std::string Native::Line::Aux::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::SessionTimeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::SessionTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::Aux::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{
    yang_name = "timeout"; yang_parent_name = "aux";
}

Native::Line::Aux::Timeout::~Timeout()
{
}

bool Native::Line::Aux::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::Aux::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Native::Line::Aux::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Timeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
    }
}

Native::Line::Aux::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{
    yang_name = "telnet"; yang_parent_name = "aux";
}

Native::Line::Aux::Telnet::~Telnet()
{
}

bool Native::Line::Aux::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::Aux::Telnet::has_operation() const
{
    return is_set(operation)
	|| is_set(transparent.operation);
}

std::string Native::Line::Aux::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Telnet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Telnet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Line::Aux::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Aux::Transport::Input>())
	,output(std::make_shared<Native::Line::Aux::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;

    output->parent = this;

    yang_name = "transport"; yang_parent_name = "aux";
}

Native::Line::Aux::Transport::~Transport()
{
}

bool Native::Line::Aux::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Aux::Transport::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Aux::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Transport::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Aux::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Aux::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Aux::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::get_children() const
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

void Native::Line::Aux::Transport::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Aux::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{
    yang_name = "input"; yang_parent_name = "transport";
}

Native::Line::Aux::Transport::Input::~Input()
{
}

bool Native::Line::Aux::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Aux::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(input.operation);
}

std::string Native::Line::Aux::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Transport::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Transport::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

Native::Line::Aux::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{
    yang_name = "output"; yang_parent_name = "transport";
}

Native::Line::Aux::Transport::Output::~Output()
{
}

bool Native::Line::Aux::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Aux::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Line::Aux::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Transport::Output::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Transport::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

Native::Line::Aux::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "preferred"; yang_parent_name = "transport";
}

Native::Line::Aux::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Aux::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::Aux::Transport::Preferred::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Line::Aux::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::Transport::Preferred::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::Transport::Preferred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Line::Aux::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "usb-inactivity-timeout"; yang_parent_name = "aux";
}

Native::Line::Aux::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Aux::UsbInactivityTimeout::has_data() const
{
    return switch.is_set;
}

bool Native::Line::Aux::UsbInactivityTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::Line::Aux::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::UsbInactivityTimeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::UsbInactivityTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Line::Aux::VacantMessage::VacantMessage()
    :
    banner{YType::str, "banner"}
{
    yang_name = "vacant-message"; yang_parent_name = "aux";
}

Native::Line::Aux::VacantMessage::~VacantMessage()
{
}

bool Native::Line::Aux::VacantMessage::has_data() const
{
    return banner.is_set;
}

bool Native::Line::Aux::VacantMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(banner.operation);
}

std::string Native::Line::Aux::VacantMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacant-message";

    return path_buffer.str();

}

const EntityPath Native::Line::Aux::VacantMessage::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Aux::VacantMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Aux::VacantMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Aux::VacantMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "banner")
    {
        banner = value;
    }
}

Native::Line::Console::Console()
    :
    first{YType::enumeration, "first"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    refuse_message{YType::str, "refuse-message"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::Console::AccessClass>())
	,authorization(std::make_shared<Native::Line::Console::Authorization>())
	,autocommand(std::make_shared<Native::Line::Console::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::Console::Databits>())
	,escape_character(std::make_shared<Native::Line::Console::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::Console::Exec>())
	,exec_timeout(std::make_shared<Native::Line::Console::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::Console::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::Console::Ip>())
	,ipv6(std::make_shared<Native::Line::Console::Ipv6>())
	,logging(std::make_shared<Native::Line::Console::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::Console::MediaType>())
	,modem(std::make_shared<Native::Line::Console::Modem>())
	,no_exec(std::make_shared<Native::Line::Console::NoExec>())
	,padding(std::make_shared<Native::Line::Console::Padding>())
	,parity(std::make_shared<Native::Line::Console::Parity>())
	,password(std::make_shared<Native::Line::Console::Password>())
	,prc(std::make_shared<Native::Line::Console::Prc>())
	,privilege(std::make_shared<Native::Line::Console::Privilege>())
	,session_timeout(std::make_shared<Native::Line::Console::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::Console::Telnet>())
	,timeout(std::make_shared<Native::Line::Console::Timeout>())
	,transport(std::make_shared<Native::Line::Console::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::Console::UsbInactivityTimeout>())
	,vacant_message(nullptr) // presence node
{
    access_class->parent = this;

    authorization->parent = this;

    autocommand->parent = this;

    databits->parent = this;

    escape_character->parent = this;

    exec->parent = this;

    exec_timeout->parent = this;

    flowcontrol->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    logging->parent = this;

    media_type->parent = this;

    modem->parent = this;

    no_exec->parent = this;

    padding->parent = this;

    parity->parent = this;

    password->parent = this;

    prc->parent = this;

    privilege->parent = this;

    session_timeout->parent = this;

    telnet->parent = this;

    timeout->parent = this;

    transport->parent = this;

    usb_inactivity_timeout->parent = this;

    yang_name = "console"; yang_parent_name = "line";
}

Native::Line::Console::~Console()
{
}

bool Native::Line::Console::has_data() const
{
    return first.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| refuse_message.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data())
	|| (vacant_message !=  nullptr && vacant_message->has_data());
}

bool Native::Line::Console::has_operation() const
{
    return is_set(operation)
	|| is_set(first.operation)
	|| is_set(activation_character.operation)
	|| is_set(data_character_bits.operation)
	|| is_set(domain_lookup.operation)
	|| is_set(editing.operation)
	|| is_set(exec_banner.operation)
	|| is_set(exec_character_bits.operation)
	|| is_set(full_help.operation)
	|| is_set(international.operation)
	|| is_set(length.operation)
	|| is_set(line.operation)
	|| is_set(location.operation)
	|| is_set(monitor.operation)
	|| is_set(motd_banner.operation)
	|| is_set(no_activation_character.operation)
	|| is_set(notify.operation)
	|| is_set(refuse_message.operation)
	|| is_set(rotary.operation)
	|| is_set(rxspeed.operation)
	|| is_set(special_character_bits.operation)
	|| is_set(speed.operation)
	|| is_set(start_character.operation)
	|| is_set(stop_character.operation)
	|| is_set(stopbits.operation)
	|| is_set(terminal_type.operation)
	|| is_set(txspeed.operation)
	|| is_set(width.operation)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation())
	|| (vacant_message !=  nullptr && vacant_message->has_operation());
}

std::string Native::Line::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console" <<"[first='" <<first <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.operation)) leaf_name_data.push_back(first.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.operation)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.operation)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.operation)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.operation)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.operation)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.operation)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.operation)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.operation)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.operation)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.operation)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.operation)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (refuse_message.is_set || is_set(refuse_message.operation)) leaf_name_data.push_back(refuse_message.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.operation)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.operation)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.operation)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.operation)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.operation)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.operation)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.operation)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Console::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Console::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Console::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Console::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Console::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Console::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Console::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Console::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Console::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Console::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Console::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Console::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Console::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Console::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Console::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Console::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Console::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Console::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Console::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Console::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Console::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Console::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Console::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Console::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Console::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Console::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Console::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    if(child_yang_name == "vacant-message")
    {
        if(vacant_message == nullptr)
        {
            vacant_message = std::make_shared<Native::Line::Console::VacantMessage>();
        }
        return vacant_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    if(vacant_message != nullptr)
    {
        children["vacant-message"] = vacant_message;
    }

    return children;
}

void Native::Line::Console::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first")
    {
        first = value;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
    }
    if(value_path == "editing")
    {
        editing = value;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
    }
    if(value_path == "full-help")
    {
        full_help = value;
    }
    if(value_path == "international")
    {
        international = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
    }
    if(value_path == "notify")
    {
        notify = value;
    }
    if(value_path == "refuse-message")
    {
        refuse_message = value;
    }
    if(value_path == "rotary")
    {
        rotary = value;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "start-character")
    {
        start_character = value;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

Native::Line::Console::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Console::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "console";
}

Native::Line::Console::Authorization::~Authorization()
{
}

bool Native::Line::Console::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::Console::Authorization::has_operation() const
{
    return is_set(operation)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::Console::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Console::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::Console::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{
    yang_name = "command"; yang_parent_name = "authorization";
}

Native::Line::Console::Authorization::Command::~Command()
{
}

bool Native::Line::Console::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::Console::Authorization::Command::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_name.operation)
	|| is_set(enable_level.operation);
}

std::string Native::Line::Console::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Authorization::Command::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Command' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.operation)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.operation)) leaf_name_data.push_back(enable_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Authorization::Command::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
    }
}

Native::Line::Console::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "console";
}

Native::Line::Console::AccessClass::~AccessClass()
{
}

bool Native::Line::Console::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Console::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::Console::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Console::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{
    yang_name = "acccess-list"; yang_parent_name = "access-class";
}

Native::Line::Console::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Console::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Console::AccessClass::AcccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(access_list.operation)
	|| is_set(vrf_also.operation);
}

std::string Native::Line::Console::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::AccessClass::AcccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcccessList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.operation)) leaf_name_data.push_back(vrf_also.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AccessClass::AcccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
    }
}

Native::Line::Console::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{
    yang_name = "autocommand"; yang_parent_name = "console";
}

Native::Line::Console::Autocommand::~Autocommand()
{
}

bool Native::Line::Console::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Console::Autocommand::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Console::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Autocommand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autocommand' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Console::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Console::Autocommand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::Console::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{
    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand";
}

Native::Line::Console::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Line::Console::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Autocommand::NoSuppressLinenumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoSuppressLinenumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::Console::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{
    yang_name = "autocommand-options"; yang_parent_name = "console";
}

Native::Line::Console::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Console::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Console::AutocommandOptions::has_operation() const
{
    return is_set(operation)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Console::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::AutocommandOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutocommandOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Console::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Console::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Console::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Console::AutocommandOptions::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{
    yang_name = "abort-character"; yang_parent_name = "autocommand-options";
}

Native::Line::Console::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation);
}

std::string Native::Line::Console::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::AutocommandOptions::AbortCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AbortCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.operation)) leaf_name_data.push_back(character.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "character")
    {
        character = value;
    }
}

Native::Line::Console::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{
    yang_name = "delay"; yang_parent_name = "autocommand-options";
}

Native::Line::Console::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Console::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::Console::AutocommandOptions::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation);
}

std::string Native::Line::Console::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::AutocommandOptions::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AutocommandOptions::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Line::Console::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{
    yang_name = "nohangup"; yang_parent_name = "autocommand-options";
}

Native::Line::Console::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(operation)
	|| is_set(abort_character.operation)
	|| is_set(delay.operation);
}

std::string Native::Line::Console::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::AutocommandOptions::Nohangup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nohangup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.operation)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::AutocommandOptions::Nohangup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Line::Console::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{
    yang_name = "databits"; yang_parent_name = "console";
}

Native::Line::Console::Databits::~Databits()
{
}

bool Native::Line::Console::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Console::Databits::has_operation() const
{
    return is_set(operation)
	|| is_set(set_to_5.operation)
	|| is_set(set_to_6.operation)
	|| is_set(set_to_7.operation)
	|| is_set(set_to_8.operation);
}

std::string Native::Line::Console::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Databits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Databits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.operation)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.operation)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.operation)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.operation)) leaf_name_data.push_back(set_to_8.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Databits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
    }
}

Native::Line::Console::EscapeCharacter::EscapeCharacter()
    :
    char{YType::str, "char"},
    soft{YType::empty, "soft"}
{
    yang_name = "escape-character"; yang_parent_name = "console";
}

Native::Line::Console::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Console::EscapeCharacter::has_data() const
{
    return char.is_set
	|| soft.is_set;
}

bool Native::Line::Console::EscapeCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(char.operation)
	|| is_set(soft.operation);
}

std::string Native::Line::Console::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::EscapeCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EscapeCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char.is_set || is_set(char.operation)) leaf_name_data.push_back(char.get_name_leafdata());
    if (soft.is_set || is_set(soft.operation)) leaf_name_data.push_back(soft.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::EscapeCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "char")
    {
        char = value;
    }
    if(value_path == "soft")
    {
        soft = value;
    }
}

Native::Line::Console::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{
    yang_name = "no-exec"; yang_parent_name = "console";
}

Native::Line::Console::NoExec::~NoExec()
{
}

bool Native::Line::Console::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::Console::NoExec::has_operation() const
{
    return is_set(operation)
	|| is_set(exec.operation);
}

std::string Native::Line::Console::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::NoExec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoExec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.operation)) leaf_name_data.push_back(exec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::NoExec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exec")
    {
        exec = value;
    }
}

Native::Line::Console::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Console::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "console";
}

Native::Line::Console::Exec::~Exec()
{
}

bool Native::Line::Console::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Console::Exec::has_operation() const
{
    return is_set(operation)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Console::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Console::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::Console::Exec::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{
    yang_name = "prompt"; yang_parent_name = "exec";
}

Native::Line::Console::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Console::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::Console::Exec::Prompt::has_operation() const
{
    return is_set(operation)
	|| is_set(timestamp.operation);
}

std::string Native::Line::Console::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Exec::Prompt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prompt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Exec::Prompt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Native::Line::Console::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "exec-timeout"; yang_parent_name = "console";
}

Native::Line::Console::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Console::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Console::ExecTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Line::Console::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::ExecTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExecTimeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::ExecTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::Console::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{
    yang_name = "flowcontrol"; yang_parent_name = "console";
}

Native::Line::Console::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Console::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::Console::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(hardware.operation)
	|| is_set(none.operation)
	|| is_set(software.operation);
}

std::string Native::Line::Console::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.operation)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.operation)) leaf_name_data.push_back(software.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hardware")
    {
        hardware = value;
    }
    if(value_path == "NONE")
    {
        none = value;
    }
    if(value_path == "software")
    {
        software = value;
    }
}

Native::Line::Console::History::History()
    :
    size{YType::uint8, "size"}
{
    yang_name = "history"; yang_parent_name = "console";
}

Native::Line::Console::History::~History()
{
}

bool Native::Line::Console::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::Console::History::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Line::Console::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Line::Console::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{
    yang_name = "ip"; yang_parent_name = "console";
}

Native::Line::Console::Ip::~Ip()
{
}

bool Native::Line::Console::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Console::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp.operation)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Console::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Ip::get_entity_path(Entity* ancestor) const
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

    if (tcp.is_set || is_set(tcp.operation)) leaf_name_data.push_back(tcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Console::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::Console::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp")
    {
        tcp = value;
    }
}

Native::Line::Console::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{
    yang_name = "netmask-format"; yang_parent_name = "ip";
}

Native::Line::Console::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Console::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::Console::Ip::NetmaskFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation);
}

std::string Native::Line::Console::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Ip::NetmaskFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetmaskFormat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Ip::NetmaskFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
}

Native::Line::Console::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Console::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "console";
}

Native::Line::Console::Ipv6::~Ipv6()
{
}

bool Native::Line::Console::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Console::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Console::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Ipv6::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Console::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::Console::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Ipv6::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "ipv6";
}

Native::Line::Console::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Console::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Console::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::Console::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Ipv6::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Console::Ipv6::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{
    yang_name = "access-class"; yang_parent_name = "access-class";
}

Native::Line::Console::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(operation)
	|| is_set(access_class_name.operation)
	|| is_set(enumeration_in_out.operation);
}

std::string Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.operation)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.operation)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
    }
}

Native::Line::Console::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "console";
}

Native::Line::Console::Logging::~Logging()
{
}

bool Native::Line::Console::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Console::Logging::has_operation() const
{
    return is_set(operation)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Console::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Console::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::Console::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Logging::Synchronous::Synchronous()
{
    yang_name = "synchronous"; yang_parent_name = "logging";
}

Native::Line::Console::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Console::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::Console::Logging::Synchronous::has_operation() const
{
    return is_set(operation);
}

std::string Native::Line::Console::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Logging::Synchronous::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Synchronous' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Logging::Synchronous::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{
    yang_name = "login"; yang_parent_name = "console";
}

Native::Line::Console::Login::~Login()
{
}

bool Native::Line::Console::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::Console::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication.operation)
	|| is_set(local.operation);
}

std::string Native::Line::Console::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Login' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Line::Console::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{
    yang_name = "media-type"; yang_parent_name = "console";
}

Native::Line::Console::MediaType::~MediaType()
{
}

bool Native::Line::Console::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::Console::MediaType::has_operation() const
{
    return is_set(operation)
	|| is_set(rj45.operation);
}

std::string Native::Line::Console::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.operation)) leaf_name_data.push_back(rj45.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rj45")
    {
        rj45 = value;
    }
}

Native::Line::Console::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{
    yang_name = "modem"; yang_parent_name = "console";
}

Native::Line::Console::Modem::~Modem()
{
}

bool Native::Line::Console::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::Console::Modem::has_operation() const
{
    return is_set(operation)
	|| is_set(answer_timeout.operation)
	|| is_set(cts_alarm.operation)
	|| is_set(dialin.operation)
	|| is_set(dtr_active.operation)
	|| is_set(dtr_delay.operation)
	|| is_set(host.operation)
	|| is_set(inout.operation)
	|| is_set(printer.operation);
}

std::string Native::Line::Console::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Modem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.operation)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.operation)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.operation)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.operation)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.operation)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.operation)) leaf_name_data.push_back(printer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Console::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Modem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
    }
    if(value_path == "Host")
    {
        host = value;
    }
    if(value_path == "InOut")
    {
        inout = value;
    }
    if(value_path == "Printer")
    {
        printer = value;
    }
}

Native::Line::Console::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{
    yang_name = "padding"; yang_parent_name = "console";
}

Native::Line::Console::Padding::~Padding()
{
}

bool Native::Line::Console::Padding::has_data() const
{
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Console::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation)
	|| is_set(null.operation);
}

std::string Native::Line::Console::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Padding::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Padding::set_value(const std::string & value_path, std::string value)
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

Native::Line::Console::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{
    yang_name = "parity"; yang_parent_name = "console";
}

Native::Line::Console::Parity::~Parity()
{
}

bool Native::Line::Console::Parity::has_data() const
{
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Console::Parity::has_operation() const
{
    return is_set(operation)
	|| is_set(even.operation)
	|| is_set(mark.operation)
	|| is_set(none.operation)
	|| is_set(odd.operation)
	|| is_set(space.operation);
}

std::string Native::Line::Console::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Parity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Parity::set_value(const std::string & value_path, std::string value)
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

Native::Line::Console::Password::Password()
    :
    level{YType::uint8, "level"},
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "password"; yang_parent_name = "console";
}

Native::Line::Console::Password::~Password()
{
}

bool Native::Line::Console::Password::has_data() const
{
    return level.is_set
	|| secret.is_set
	|| type.is_set;
}

bool Native::Line::Console::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Line::Console::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Password::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Password::set_value(const std::string & value_path, std::string value)
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

Native::Line::Console::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{
    yang_name = "prc"; yang_parent_name = "console";
}

Native::Line::Console::Prc::~Prc()
{
}

bool Native::Line::Console::Prc::has_data() const
{
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Console::Prc::has_operation() const
{
    return is_set(operation)
	|| is_set(expose.operation)
	|| is_set(hide.operation);
}

std::string Native::Line::Console::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Prc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Prc::set_value(const std::string & value_path, std::string value)
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

Native::Line::Console::Privilege::Privilege()
    :
    level(nullptr) // presence node
{
    yang_name = "privilege"; yang_parent_name = "console";
}

Native::Line::Console::Privilege::~Privilege()
{
}

bool Native::Line::Console::Privilege::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Console::Privilege::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Console::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Privilege::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Console::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Line::Console::Privilege::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{
    yang_name = "level"; yang_parent_name = "privilege";
}

Native::Line::Console::Privilege::Level::~Level()
{
}

bool Native::Line::Console::Privilege::Level::has_data() const
{
    return number.is_set;
}

bool Native::Line::Console::Privilege::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Line::Console::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Privilege::Level::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Privilege::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Line::Console::SessionTimeout::SessionTimeout()
    :
    output{YType::empty, "output"},
    session_timeout_value{YType::uint16, "session-timeout-value"}
{
    yang_name = "session-timeout"; yang_parent_name = "console";
}

Native::Line::Console::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Console::SessionTimeout::has_data() const
{
    return output.is_set
	|| session_timeout_value.is_set;
}

bool Native::Line::Console::SessionTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation)
	|| is_set(session_timeout_value.operation);
}

std::string Native::Line::Console::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::SessionTimeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::SessionTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::Console::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{
    yang_name = "timeout"; yang_parent_name = "console";
}

Native::Line::Console::Timeout::~Timeout()
{
}

bool Native::Line::Console::Timeout::has_data() const
{
    return login.is_set;
}

bool Native::Line::Console::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Native::Line::Console::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Timeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
    }
}

Native::Line::Console::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{
    yang_name = "telnet"; yang_parent_name = "console";
}

Native::Line::Console::Telnet::~Telnet()
{
}

bool Native::Line::Console::Telnet::has_data() const
{
    return transparent.is_set;
}

bool Native::Line::Console::Telnet::has_operation() const
{
    return is_set(operation)
	|| is_set(transparent.operation);
}

std::string Native::Line::Console::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Telnet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Telnet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transparent")
    {
        transparent = value;
    }
}

Native::Line::Console::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Console::Transport::Input>())
	,output(std::make_shared<Native::Line::Console::Transport::Output>())
	,preferred(nullptr) // presence node
{
    input->parent = this;

    output->parent = this;

    yang_name = "transport"; yang_parent_name = "console";
}

Native::Line::Console::Transport::~Transport()
{
}

bool Native::Line::Console::Transport::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Console::Transport::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Console::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Transport::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Console::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Console::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Console::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::get_children() const
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

void Native::Line::Console::Transport::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Console::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{
    yang_name = "input"; yang_parent_name = "transport";
}

Native::Line::Console::Transport::Input::~Input()
{
}

bool Native::Line::Console::Transport::Input::has_data() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Console::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(input.operation);
}

std::string Native::Line::Console::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Transport::Input::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Transport::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

Native::Line::Console::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{
    yang_name = "output"; yang_parent_name = "transport";
}

Native::Line::Console::Transport::Output::~Output()
{
}

bool Native::Line::Console::Transport::Output::has_data() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Console::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Line::Console::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Transport::Output::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Transport::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

Native::Line::Console::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "preferred"; yang_parent_name = "transport";
}

Native::Line::Console::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Console::Transport::Preferred::has_data() const
{
    return protocol.is_set;
}

bool Native::Line::Console::Transport::Preferred::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Line::Console::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::Transport::Preferred::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::Transport::Preferred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Line::Console::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch{YType::empty, "switch"}
{
    yang_name = "usb-inactivity-timeout"; yang_parent_name = "console";
}

Native::Line::Console::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Console::UsbInactivityTimeout::has_data() const
{
    return switch.is_set;
}

bool Native::Line::Console::UsbInactivityTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation);
}

std::string Native::Line::Console::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::UsbInactivityTimeout::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::UsbInactivityTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::Line::Console::VacantMessage::VacantMessage()
    :
    banner{YType::str, "banner"}
{
    yang_name = "vacant-message"; yang_parent_name = "console";
}

Native::Line::Console::VacantMessage::~VacantMessage()
{
}

bool Native::Line::Console::VacantMessage::has_data() const
{
    return banner.is_set;
}

bool Native::Line::Console::VacantMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(banner.operation);
}

std::string Native::Line::Console::VacantMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vacant-message";

    return path_buffer.str();

}

const EntityPath Native::Line::Console::VacantMessage::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Line::Console::VacantMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Console::VacantMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Console::VacantMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "banner")
    {
        banner = value;
    }
}

Native::Line::Vty::Vty()
    :
    first{YType::uint16, "first"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    last{YType::uint16, "last"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    no_activation_character{YType::boolean, "no-activation-character"},
    notify{YType::empty, "notify"},
    refuse_message{YType::str, "refuse-message"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    access_class(std::make_shared<Native::Line::Vty::AccessClass>())
	,authorization(std::make_shared<Native::Line::Vty::Authorization>())
	,autocommand(std::make_shared<Native::Line::Vty::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::Vty::Databits>())
	,escape_character(std::make_shared<Native::Line::Vty::EscapeCharacter>())
	,exec(std::make_shared<Native::Line::Vty::Exec>())
	,exec_timeout(std::make_shared<Native::Line::Vty::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::Vty::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::Vty::Ip>())
	,ipv6(std::make_shared<Native::Line::Vty::Ipv6>())
	,logging(std::make_shared<Native::Line::Vty::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::Vty::MediaType>())
	,modem(std::make_shared<Native::Line::Vty::Modem>())
	,no_exec(std::make_shared<Native::Line::Vty::NoExec>())
	,padding(std::make_shared<Native::Line::Vty::Padding>())
	,parity(std::make_shared<Native::Line::Vty::Parity>())
	,password(std::make_shared<Native::Line::Vty::Password>())
	,prc(std::make_shared<Native::Line::Vty::Prc>())
	,privilege(std::make_shared<Native::Line::Vty::Privilege>())
	,session_timeout(std::make_shared<Native::Line::Vty::SessionTimeout>())
	,telnet(std::make_shared<Native::Line::Vty::Telnet>())
	,timeout(std::make_shared<Native::Line::Vty::Timeout>())
	,transport(std::make_shared<Native::Line::Vty::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::Vty::UsbInactivityTimeout>())
	,vacant_message(nullptr) // presence node
{
    access_class->parent = this;

    authorization->parent = this;

    autocommand->parent = this;

    databits->parent = this;

    escape_character->parent = this;

    exec->parent = this;

    exec_timeout->parent = this;

    flowcontrol->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    logging->parent = this;

    media_type->parent = this;

    modem->parent = this;

    no_exec->parent = this;

    padding->parent = this;

    parity->parent = this;

    password->parent = this;

    prc->parent = this;

    privilege->parent = this;

    session_timeout->parent = this;

    telnet->parent = this;

    timeout->parent = this;

    transport->parent = this;

    usb_inactivity_timeout->parent = this;

    yang_name = "vty"; yang_parent_name = "line";
}

Native::Line::Vty::~Vty()
{
}

bool Native::Line::Vty::has_data() const
{
    return first.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| last.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| no_activation_character.is_set
	|| notify.is_set
	|| refuse_message.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (access_class !=  nullptr && access_class->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data())
	|| (vacant_message !=  nullptr && vacant_message->has_data());
}

bool Native::Line::Vty::has_operation() const
{
    return is_set(operation)
	|| is_set(first.operation)
	|| is_set(activation_character.operation)
	|| is_set(data_character_bits.operation)
	|| is_set(domain_lookup.operation)
	|| is_set(editing.operation)
	|| is_set(exec_banner.operation)
	|| is_set(exec_character_bits.operation)
	|| is_set(full_help.operation)
	|| is_set(international.operation)
	|| is_set(last.operation)
	|| is_set(length.operation)
	|| is_set(line.operation)
	|| is_set(location.operation)
	|| is_set(monitor.operation)
	|| is_set(motd_banner.operation)
	|| is_set(no_activation_character.operation)
	|| is_set(notify.operation)
	|| is_set(refuse_message.operation)
	|| is_set(rotary.operation)
	|| is_set(rxspeed.operation)
	|| is_set(special_character_bits.operation)
	|| is_set(speed.operation)
	|| is_set(start_character.operation)
	|| is_set(stop_character.operation)
	|| is_set(stopbits.operation)
	|| is_set(terminal_type.operation)
	|| is_set(txspeed.operation)
	|| is_set(width.operation)
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation())
	|| (vacant_message !=  nullptr && vacant_message->has_operation());
}

std::string Native::Line::Vty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty" <<"[first='" <<first <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.operation)) leaf_name_data.push_back(first.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.operation)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.operation)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.operation)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.operation)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.operation)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.operation)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.operation)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.operation)) leaf_name_data.push_back(international.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.operation)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.operation)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (notify.is_set || is_set(notify.operation)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (refuse_message.is_set || is_set(refuse_message.operation)) leaf_name_data.push_back(refuse_message.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.operation)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.operation)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.operation)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.operation)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.operation)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.operation)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.operation)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.operation)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.operation)) leaf_name_data.push_back(width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Vty::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Vty::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Vty::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Vty::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Vty::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Vty::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Vty::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Vty::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Vty::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Vty::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Vty::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Vty::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Vty::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Vty::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Vty::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Vty::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Vty::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Vty::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Vty::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Vty::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Vty::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Vty::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Vty::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Vty::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Vty::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Vty::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Vty::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    if(child_yang_name == "vacant-message")
    {
        if(vacant_message == nullptr)
        {
            vacant_message = std::make_shared<Native::Line::Vty::VacantMessage>();
        }
        return vacant_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    if(vacant_message != nullptr)
    {
        children["vacant-message"] = vacant_message;
    }

    return children;
}

void Native::Line::Vty::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first")
    {
        first = value;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
    }
    if(value_path == "editing")
    {
        editing = value;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
    }
    if(value_path == "full-help")
    {
        full_help = value;
    }
    if(value_path == "international")
    {
        international = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
    }
    if(value_path == "notify")
    {
        notify = value;
    }
    if(value_path == "refuse-message")
    {
        refuse_message = value;
    }
    if(value_path == "rotary")
    {
        rotary = value;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "start-character")
    {
        start_character = value;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
    }
    if(value_path == "width")
    {
        width = value;
    }
}

Native::Line::Vty::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Vty::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "vty";
}

Native::Line::Vty::Authorization::~Authorization()
{
}

bool Native::Line::Vty::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::Vty::Authorization::has_operation() const
{
    return is_set(operation)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::Vty::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Vty::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::Vty::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Authorization::Command::Command()
    :
    auth_name{YType::str, "auth-name"},
    enable_level{YType::uint8, "enable-level"}
{
    yang_name = "command"; yang_parent_name = "authorization";
}

Native::Line::Vty::Authorization::Command::~Command()
{
}

bool Native::Line::Vty::Authorization::Command::has_data() const
{
    return auth_name.is_set
	|| enable_level.is_set;
}

bool Native::Line::Vty::Authorization::Command::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_name.operation)
	|| is_set(enable_level.operation);
}

std::string Native::Line::Vty::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Authorization::Command::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Command' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_name.is_set || is_set(auth_name.operation)) leaf_name_data.push_back(auth_name.get_name_leafdata());
    if (enable_level.is_set || is_set(enable_level.operation)) leaf_name_data.push_back(enable_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Authorization::Command::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-name")
    {
        auth_name = value;
    }
    if(value_path == "enable-level")
    {
        enable_level = value;
    }
}

Native::Line::Vty::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "vty";
}

Native::Line::Vty::AccessClass::~AccessClass()
{
}

bool Native::Line::Vty::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Vty::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::Vty::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Vty::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{
    yang_name = "acccess-list"; yang_parent_name = "access-class";
}

Native::Line::Vty::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Vty::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Vty::AccessClass::AcccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(access_list.operation)
	|| is_set(vrf_also.operation);
}

std::string Native::Line::Vty::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::AccessClass::AcccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcccessList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.operation)) leaf_name_data.push_back(vrf_also.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AccessClass::AcccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
    }
}

Native::Line::Vty::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{
    yang_name = "autocommand"; yang_parent_name = "vty";
}

Native::Line::Vty::Autocommand::~Autocommand()
{
}

bool Native::Line::Vty::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Vty::Autocommand::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Vty::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Autocommand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autocommand' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Vty::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::Vty::Autocommand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::Vty::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{
    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand";
}

Native::Line::Vty::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(operation)
	|| is_set(line.operation);
}

std::string Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoSuppressLinenumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line")
    {
        line = value;
    }
}

Native::Line::Vty::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{
    yang_name = "autocommand-options"; yang_parent_name = "vty";
}

Native::Line::Vty::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Vty::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Vty::AutocommandOptions::has_operation() const
{
    return is_set(operation)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Vty::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::AutocommandOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutocommandOptions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Vty::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Vty::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Vty::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::Vty::AutocommandOptions::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{
    yang_name = "abort-character"; yang_parent_name = "autocommand-options";
}

Native::Line::Vty::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(character.operation);
}

std::string Native::Line::Vty::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::AutocommandOptions::AbortCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AbortCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.operation)) leaf_name_data.push_back(character.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "character")
    {
        character = value;
    }
}

Native::Line::Vty::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{
    yang_name = "delay"; yang_parent_name = "autocommand-options";
}

Native::Line::Vty::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(time.operation);
}

std::string Native::Line::Vty::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::AutocommandOptions::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AutocommandOptions::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Line::Vty::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{
    yang_name = "nohangup"; yang_parent_name = "autocommand-options";
}

Native::Line::Vty::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(operation)
	|| is_set(abort_character.operation)
	|| is_set(delay.operation);
}

std::string Native::Line::Vty::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::AutocommandOptions::Nohangup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nohangup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.operation)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::AutocommandOptions::Nohangup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Line::Vty::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{
    yang_name = "databits"; yang_parent_name = "vty";
}

Native::Line::Vty::Databits::~Databits()
{
}

bool Native::Line::Vty::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Vty::Databits::has_operation() const
{
    return is_set(operation)
	|| is_set(set_to_5.operation)
	|| is_set(set_to_6.operation)
	|| is_set(set_to_7.operation)
	|| is_set(set_to_8.operation);
}

std::string Native::Line::Vty::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Databits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Databits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.operation)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.operation)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.operation)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.operation)) leaf_name_data.push_back(set_to_8.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Databits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
    }
}

Native::Line::Vty::EscapeCharacter::EscapeCharacter()
    :
    char{YType::str, "char"},
    soft{YType::empty, "soft"}
{
    yang_name = "escape-character"; yang_parent_name = "vty";
}

Native::Line::Vty::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Vty::EscapeCharacter::has_data() const
{
    return char.is_set
	|| soft.is_set;
}

bool Native::Line::Vty::EscapeCharacter::has_operation() const
{
    return is_set(operation)
	|| is_set(char.operation)
	|| is_set(soft.operation);
}

std::string Native::Line::Vty::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::EscapeCharacter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EscapeCharacter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char.is_set || is_set(char.operation)) leaf_name_data.push_back(char.get_name_leafdata());
    if (soft.is_set || is_set(soft.operation)) leaf_name_data.push_back(soft.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::EscapeCharacter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "char")
    {
        char = value;
    }
    if(value_path == "soft")
    {
        soft = value;
    }
}

Native::Line::Vty::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{
    yang_name = "no-exec"; yang_parent_name = "vty";
}

Native::Line::Vty::NoExec::~NoExec()
{
}

bool Native::Line::Vty::NoExec::has_data() const
{
    return exec.is_set;
}

bool Native::Line::Vty::NoExec::has_operation() const
{
    return is_set(operation)
	|| is_set(exec.operation);
}

std::string Native::Line::Vty::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::NoExec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoExec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.operation)) leaf_name_data.push_back(exec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::NoExec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exec")
    {
        exec = value;
    }
}

Native::Line::Vty::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Vty::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "vty";
}

Native::Line::Vty::Exec::~Exec()
{
}

bool Native::Line::Vty::Exec::has_data() const
{
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Vty::Exec::has_operation() const
{
    return is_set(operation)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Vty::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Vty::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt != nullptr)
    {
        children["prompt"] = prompt;
    }

    return children;
}

void Native::Line::Vty::Exec::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{
    yang_name = "prompt"; yang_parent_name = "exec";
}

Native::Line::Vty::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Vty::Exec::Prompt::has_data() const
{
    return timestamp.is_set;
}

bool Native::Line::Vty::Exec::Prompt::has_operation() const
{
    return is_set(operation)
	|| is_set(timestamp.operation);
}

std::string Native::Line::Vty::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Exec::Prompt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prompt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Exec::Prompt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

Native::Line::Vty::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "exec-timeout"; yang_parent_name = "vty";
}

Native::Line::Vty::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Vty::ExecTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Vty::ExecTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Line::Vty::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::ExecTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExecTimeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::ExecTimeout::set_value(const std::string & value_path, std::string value)
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

Native::Line::Vty::Flowcontrol::Flowcontrol()
    :
    hardware{YType::empty, "hardware"},
    none{YType::empty, "NONE"},
    software{YType::empty, "software"}
{
    yang_name = "flowcontrol"; yang_parent_name = "vty";
}

Native::Line::Vty::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Vty::Flowcontrol::has_data() const
{
    return hardware.is_set
	|| none.is_set
	|| software.is_set;
}

bool Native::Line::Vty::Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(hardware.operation)
	|| is_set(none.operation)
	|| is_set(software.operation);
}

std::string Native::Line::Vty::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hardware.is_set || is_set(hardware.operation)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.operation)) leaf_name_data.push_back(software.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hardware")
    {
        hardware = value;
    }
    if(value_path == "NONE")
    {
        none = value;
    }
    if(value_path == "software")
    {
        software = value;
    }
}

Native::Line::Vty::History::History()
    :
    size{YType::uint8, "size"}
{
    yang_name = "history"; yang_parent_name = "vty";
}

Native::Line::Vty::History::~History()
{
}

bool Native::Line::Vty::History::has_data() const
{
    return size.is_set;
}

bool Native::Line::Vty::History::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Line::Vty::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Line::Vty::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
    	,
    netmask_format(nullptr) // presence node
{
    yang_name = "ip"; yang_parent_name = "vty";
}

Native::Line::Vty::Ip::~Ip()
{
}

bool Native::Line::Vty::Ip::has_data() const
{
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Vty::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp.operation)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Vty::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Ip::get_entity_path(Entity* ancestor) const
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

    if (tcp.is_set || is_set(tcp.operation)) leaf_name_data.push_back(tcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Vty::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(netmask_format != nullptr)
    {
        children["netmask-format"] = netmask_format;
    }

    return children;
}

void Native::Line::Vty::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp")
    {
        tcp = value;
    }
}

Native::Line::Vty::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{
    yang_name = "netmask-format"; yang_parent_name = "ip";
}

Native::Line::Vty::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_data() const
{
    return format.is_set;
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation);
}

std::string Native::Line::Vty::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Ip::NetmaskFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetmaskFormat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Ip::NetmaskFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
}

Native::Line::Vty::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Vty::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vty";
}

Native::Line::Vty::Ipv6::~Ipv6()
{
}

bool Native::Line::Vty::Ipv6::has_data() const
{
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Vty::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Vty::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Ipv6::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Vty::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    return children;
}

void Native::Line::Vty::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass()
{
    yang_name = "access-class"; yang_parent_name = "ipv6";
}

Native::Line::Vty::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Vty::Ipv6::AccessClass::has_data() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Vty::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.size(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Line::Vty::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Ipv6::AccessClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        for(auto const & c : access_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty::Ipv6::AccessClass::AccessClass_>();
        c->parent = this;
        access_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::Vty::Ipv6::AccessClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{
    yang_name = "access-class"; yang_parent_name = "access-class";
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_data() const
{
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(operation)
	|| is_set(access_class_name.operation)
	|| is_set(enumeration_in_out.operation);
}

std::string Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class" <<"[access-class-name='" <<access_class_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessClass_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.operation)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.operation)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
    }
}

Native::Line::Vty::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "vty";
}

Native::Line::Vty::Logging::~Logging()
{
}

bool Native::Line::Vty::Logging::has_data() const
{
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Vty::Logging::has_operation() const
{
    return is_set(operation)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Vty::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Vty::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronous != nullptr)
    {
        children["synchronous"] = synchronous;
    }

    return children;
}

void Native::Line::Vty::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Logging::Synchronous::Synchronous()
{
    yang_name = "synchronous"; yang_parent_name = "logging";
}

Native::Line::Vty::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Vty::Logging::Synchronous::has_data() const
{
    return false;
}

bool Native::Line::Vty::Logging::Synchronous::has_operation() const
{
    return is_set(operation);
}

std::string Native::Line::Vty::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Logging::Synchronous::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Synchronous' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Logging::Synchronous::set_value(const std::string & value_path, std::string value)
{
}

Native::Line::Vty::Login::Login()
    :
    authentication{YType::str, "authentication"},
    local{YType::empty, "local"}
{
    yang_name = "login"; yang_parent_name = "vty";
}

Native::Line::Vty::Login::~Login()
{
}

bool Native::Line::Vty::Login::has_data() const
{
    return authentication.is_set
	|| local.is_set;
}

bool Native::Line::Vty::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication.operation)
	|| is_set(local.operation);
}

std::string Native::Line::Vty::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Login' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Line::Vty::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{
    yang_name = "media-type"; yang_parent_name = "vty";
}

Native::Line::Vty::MediaType::~MediaType()
{
}

bool Native::Line::Vty::MediaType::has_data() const
{
    return rj45.is_set;
}

bool Native::Line::Vty::MediaType::has_operation() const
{
    return is_set(operation)
	|| is_set(rj45.operation);
}

std::string Native::Line::Vty::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::MediaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.operation)) leaf_name_data.push_back(rj45.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::MediaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rj45")
    {
        rj45 = value;
    }
}

Native::Line::Vty::Modem::Modem()
    :
    answer_timeout{YType::empty, "answer-timeout"},
    cts_alarm{YType::empty, "CTS-Alarm"},
    dialin{YType::empty, "Dialin"},
    dtr_active{YType::empty, "DTR-active"},
    dtr_delay{YType::empty, "dtr-delay"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"}
{
    yang_name = "modem"; yang_parent_name = "vty";
}

Native::Line::Vty::Modem::~Modem()
{
}

bool Native::Line::Vty::Modem::has_data() const
{
    return answer_timeout.is_set
	|| cts_alarm.is_set
	|| dialin.is_set
	|| dtr_active.is_set
	|| dtr_delay.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set;
}

bool Native::Line::Vty::Modem::has_operation() const
{
    return is_set(operation)
	|| is_set(answer_timeout.operation)
	|| is_set(cts_alarm.operation)
	|| is_set(dialin.operation)
	|| is_set(dtr_active.operation)
	|| is_set(dtr_delay.operation)
	|| is_set(host.operation)
	|| is_set(inout.operation)
	|| is_set(printer.operation);
}

std::string Native::Line::Vty::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";

    return path_buffer.str();

}

const EntityPath Native::Line::Vty::Modem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Modem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (answer_timeout.is_set || is_set(answer_timeout.operation)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.operation)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.operation)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.operation)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.operation)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.operation)) leaf_name_data.push_back(printer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Line::Vty::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::Vty::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::Vty::Modem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
    }
    if(value_path == "Host")
    {
        host = value;
    }
    if(value_path == "InOut")
    {
        inout = value;
    }
    if(value_path == "Printer")
    {
        printer = value;
    }
}

const Enum::YLeaf Native::Line::LineList::EscapeCharacter::CharEnum::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::CharEnum::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::CharEnum::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::FormatEnum::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::FormatEnum::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::LineList::Ip::NetmaskFormat::FormatEnum::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::out {1, "out"};

const Enum::YLeaf Native::Line::LineList::Password::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::LineList::Password::TypeEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::LineList::Transport::Input::InputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::LineList::Transport::Output::OutputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::lat {1, "lat"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::mop {2, "mop"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::none {4, "none"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::pad {5, "pad"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::LineList::Transport::Preferred::ProtocolEnum::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Aux::FirstEnum::Y_0 {0, "0"};

const Enum::YLeaf Native::Line::Aux::StopbitsEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Aux::StopbitsEnum::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Aux::StopbitsEnum::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Aux::AccessClass::AcccessList::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Line::Aux::AccessClass::AcccessList::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Line::Aux::EscapeCharacter::CharEnum::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Aux::EscapeCharacter::CharEnum::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Aux::EscapeCharacter::CharEnum::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Aux::Ip::NetmaskFormat::FormatEnum::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Aux::Ip::NetmaskFormat::FormatEnum::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Aux::Ip::NetmaskFormat::FormatEnum::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::in {0, "in"};
const Enum::YLeaf Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::out {1, "out"};

const Enum::YLeaf Native::Line::Aux::Password::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Aux::Password::TypeEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::InputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::OutputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::lat {1, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::mop {2, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::none {4, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::pad {5, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::ProtocolEnum::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Console::FirstEnum::Y_0 {0, "0"};

const Enum::YLeaf Native::Line::Console::StopbitsEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Console::StopbitsEnum::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Console::StopbitsEnum::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Console::AccessClass::AcccessList::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Line::Console::AccessClass::AcccessList::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Line::Console::EscapeCharacter::CharEnum::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Console::EscapeCharacter::CharEnum::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Console::EscapeCharacter::CharEnum::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::FormatEnum::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::FormatEnum::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::FormatEnum::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::in {0, "in"};
const Enum::YLeaf Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::out {1, "out"};

const Enum::YLeaf Native::Line::Console::Password::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Console::Password::TypeEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Console::Transport::Input::InputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::all {1, "all"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::lat {3, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::mop {4, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::none {6, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::pad {7, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Console::Transport::Output::OutputEnum::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::lat {1, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::mop {2, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::none {4, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::pad {5, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::ProtocolEnum::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Vty::StopbitsEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Vty::StopbitsEnum::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Vty::StopbitsEnum::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Vty::AccessClass::AcccessList::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::AccessClass::AcccessList::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Line::Vty::EscapeCharacter::CharEnum::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Vty::EscapeCharacter::CharEnum::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Vty::EscapeCharacter::CharEnum::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::FormatEnum::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::FormatEnum::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::FormatEnum::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOutEnum::out {1, "out"};


}
}

