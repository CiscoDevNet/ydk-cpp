
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_171.hpp"
#include "Cisco_IOS_XE_native_172.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
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

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


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

void Native::Line::Vty::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Line::Vty::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Line::Vty::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(software.yfilter);
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

    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());


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

void Native::Line::Vty::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware" || name == "NONE" || name == "software")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
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

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());


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

void Native::Line::Vty::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::Vty::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
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

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());


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

void Native::Line::Vty::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
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

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());


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

void Native::Line::Vty::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Line::Vty::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Line::Vty::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
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

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());


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

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Line::Vty::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Line::Vty::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(local.yfilter);
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

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());


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

void Native::Line::Vty::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "local")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
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

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());


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

void Native::Line::Vty::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::Vty::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dtr_delay.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter);
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

    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());


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

void Native::Line::Vty::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "answer-timeout" || name == "CTS-Alarm" || name == "Dialin" || name == "DTR-active" || name == "dtr-delay" || name == "Host" || name == "InOut" || name == "Printer")
        return true;
    return false;
}

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
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
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

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());


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

void Native::Line::Vty::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
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

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());


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

void Native::Line::Vty::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(secret.yfilter)
	|| ydk::is_set(type.yfilter);
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

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


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

void Native::Line::Vty::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "secret" || name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
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

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());


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

void Native::Line::Vty::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Line::Vty::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
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

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


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

void Native::Line::Vty::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(session_timeout_value.yfilter);
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

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());


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

void Native::Line::Vty::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
}

bool Native::Line::Vty::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "session-timeout-value")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
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

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());


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

void Native::Line::Vty::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
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

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());


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

void Native::Line::Vty::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Line::Vty::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
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

void Native::Line::Vty::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Vty::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
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

void Native::Line::Vty::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Vty::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
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

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


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

void Native::Line::Vty::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Vty::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{
    yang_name = "usb-inactivity-timeout"; yang_parent_name = "vty";
}

Native::Line::Vty::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Vty::UsbInactivityTimeout::has_data() const
{
    return switch_.is_set;
}

bool Native::Line::Vty::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
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

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


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

void Native::Line::Vty::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Vty::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(broadcastdelay.yfilter)
	|| ydk::is_set(clock_period.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(max_associations.yfilter)
	|| ydk::is_set(maxdistance.yfilter)
	|| ydk::is_set(mindistance.yfilter)
	|| ydk::is_set(orphan.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(update_calendar.yfilter)
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

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (broadcastdelay.is_set || is_set(broadcastdelay.yfilter)) leaf_name_data.push_back(broadcastdelay.get_name_leafdata());
    if (clock_period.is_set || is_set(clock_period.yfilter)) leaf_name_data.push_back(clock_period.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (max_associations.is_set || is_set(max_associations.yfilter)) leaf_name_data.push_back(max_associations.get_name_leafdata());
    if (maxdistance.is_set || is_set(maxdistance.yfilter)) leaf_name_data.push_back(maxdistance.get_name_leafdata());
    if (mindistance.is_set || is_set(mindistance.yfilter)) leaf_name_data.push_back(mindistance.get_name_leafdata());
    if (orphan.is_set || is_set(orphan.yfilter)) leaf_name_data.push_back(orphan.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (update_calendar.is_set || is_set(update_calendar.yfilter)) leaf_name_data.push_back(update_calendar.get_name_leafdata());


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

void Native::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastdelay")
    {
        broadcastdelay = value;
        broadcastdelay.value_namespace = name_space;
        broadcastdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock-period")
    {
        clock_period = value;
        clock_period.value_namespace = name_space;
        clock_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-associations")
    {
        max_associations = value;
        max_associations.value_namespace = name_space;
        max_associations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxdistance")
    {
        maxdistance = value;
        maxdistance.value_namespace = name_space;
        maxdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mindistance")
    {
        mindistance = value;
        mindistance.value_namespace = name_space;
        mindistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orphan")
    {
        orphan = value;
        orphan.value_namespace = name_space;
        orphan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-calendar")
    {
        update_calendar = value;
        update_calendar.value_namespace = name_space;
        update_calendar.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "broadcastdelay")
    {
        broadcastdelay.yfilter = yfilter;
    }
    if(value_path == "clock-period")
    {
        clock_period.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "max-associations")
    {
        max_associations.yfilter = yfilter;
    }
    if(value_path == "maxdistance")
    {
        maxdistance.yfilter = yfilter;
    }
    if(value_path == "mindistance")
    {
        mindistance.yfilter = yfilter;
    }
    if(value_path == "orphan")
    {
        orphan.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "update-calendar")
    {
        update_calendar.yfilter = yfilter;
    }
}

bool Native::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "allow" || name == "authentication-key" || name == "master" || name == "panic" || name == "peer" || name == "server" || name == "source" || name == "trusted-key" || name == "authenticate" || name == "broadcastdelay" || name == "clock-period" || name == "logging" || name == "max-associations" || name == "maxdistance" || name == "mindistance" || name == "orphan" || name == "passive" || name == "update-calendar")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Ntp::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Ntp::AccessGroup::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv4::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv4::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Ntp::AccessGroup::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv6::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv6::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
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

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());


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

void Native::Ntp::AccessGroup::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Ntp::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(private_.yfilter)
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

    if (private_.is_set || is_set(private_.yfilter)) leaf_name_data.push_back(private_.get_name_leafdata());


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

void Native::Ntp::Allow::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "private")
    {
        private_ = value;
        private_.value_namespace = name_space;
        private_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Allow::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "private")
    {
        private_.yfilter = yfilter;
    }
}

bool Native::Ntp::Allow::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "private")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
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

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());


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

void Native::Ntp::Allow::Mode::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Allow::Mode::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Ntp::Allow::Mode::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(md5.yfilter);
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

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());


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

void Native::Ntp::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Ntp::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "encryption-type" || name == "md5")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(stratum_number.yfilter);
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

    if (stratum_number.is_set || is_set(stratum_number.yfilter)) leaf_name_data.push_back(stratum_number.get_name_leafdata());


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

void Native::Ntp::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stratum-number")
    {
        stratum_number = value;
        stratum_number.value_namespace = name_space;
        stratum_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stratum-number")
    {
        stratum_number.yfilter = yfilter;
    }
}

bool Native::Ntp::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stratum-number")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter);
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

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());


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

void Native::Ntp::Panic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Panic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Ntp::Panic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Ntp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "vrf")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Peer::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Peer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Peer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


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

void Native::Ntp::Peer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "name")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Peer::Vrf::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Peer::Vrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Peer::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Ntp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "vrf")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Server::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Server::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


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

void Native::Ntp::Server::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "server-list" || name == "name")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Server::Vrf::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Server::Vrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
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

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


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

void Native::Ntp::Server::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
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
    lisp{YType::str, "LISP"},
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
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
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

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


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

void Native::Ntp::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
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

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


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

void Native::Ntp::Source::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
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

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


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

void Native::Ntp::Source::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
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

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


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

void Native::Ntp::Source::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
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

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


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

void Native::Ntp::Source::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(end_key.yfilter);
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

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (end_key.is_set || is_set(end_key.yfilter)) leaf_name_data.push_back(end_key.get_name_leafdata());


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

void Native::Ntp::TrustedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-key")
    {
        end_key = value;
        end_key.value_namespace = name_space;
        end_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::TrustedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "end-key")
    {
        end_key.yfilter = yfilter;
    }
}

bool Native::Ntp::TrustedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "end-key")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Wsma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "profile")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Wsma::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "exec" || name == "filesys" || name == "notify")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
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

void Native::Wsma::Agent::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
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

void Native::Wsma::Agent::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
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

void Native::Wsma::Agent::Filesys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Filesys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Filesys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
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

void Native::Wsma::Agent::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Wsma::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(transport.yfilter);
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());


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

void Native::Wsma::Profile::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Wsma::Profile::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool Native::Wsma::Profile::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "transport")
        return true;
    return false;
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
    return is_set(yfilter)
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
    return is_set(yfilter)
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

void Native::Event::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applet" || name == "directory" || name == "environment" || name == "session")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter);
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
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

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


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
    return is_set(yfilter)
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
    return is_set(yfilter)
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
    return is_set(yfilter);
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
    return is_set(yfilter)
	|| ydk::is_set(username_in_word.yfilter)
	|| ydk::is_set(privilege.yfilter);
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

    if (username_in_word.is_set || is_set(username_in_word.yfilter)) leaf_name_data.push_back(username_in_word.get_name_leafdata());
    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());


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

void Native::Event::Manager::Session::Cli::Username::Username_In_Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Event::Manager::Session::Cli::Username::Username_In_Word::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Event::Manager::Session::Cli::Username::Username_In_Word::has_leaf_or_child_of_name(const std::string & name) const
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(trap.yfilter)
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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


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
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "event" || name == "trigger" || name == "name" || name == "authorization" || name == "class" || name == "description" || name == "trap")
        return true;
    return false;
}

Native::Event::Manager::Applet::Event_::Event_()
    :
    snmp_notification(std::make_shared<Native::Event::Manager::Applet::Event_::SnmpNotification>())
	,syslog(std::make_shared<Native::Event::Manager::Applet::Event_::Syslog>())
	,timer(std::make_shared<Native::Event::Manager::Applet::Event_::Timer>())
	,track(std::make_shared<Native::Event::Manager::Applet::Event_::Track>())
{
    snmp_notification->parent = this;

    syslog->parent = this;

    timer->parent = this;

    track->parent = this;

    yang_name = "event"; yang_parent_name = "applet";
}

Native::Event::Manager::Applet::Event_::~Event_()
{
}

bool Native::Event::Manager::Applet::Event_::has_data() const
{
    return (snmp_notification !=  nullptr && snmp_notification->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (track !=  nullptr && track->has_data());
}

bool Native::Event::Manager::Applet::Event_::has_operation() const
{
    return is_set(yfilter)
	|| (snmp_notification !=  nullptr && snmp_notification->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (track !=  nullptr && track->has_operation());
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

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Event::Manager::Applet::Event_::Track>();
        }
        return track;
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

    if(track != nullptr)
    {
        children["track"] = track;
    }

    return children;
}

void Native::Event::Manager::Applet::Event_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-notification" || name == "syslog" || name == "timer" || name == "track")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Event::Manager::Applet::Event_::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchdog")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-name")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(timer_name.yfilter)
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

    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());


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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "timer-name")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
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

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxrun" || name == "time-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter);
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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-in-seconds")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(timer_in_seconds.yfilter)
	|| ydk::is_set(ratelimit.yfilter);
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

    if (timer_in_seconds.is_set || is_set(timer_in_seconds.yfilter)) leaf_name_data.push_back(timer_in_seconds.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());


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

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-in-seconds")
    {
        timer_in_seconds = value;
        timer_in_seconds.value_namespace = name_space;
        timer_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-in-seconds")
    {
        timer_in_seconds.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-in-seconds" || name == "ratelimit")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dest_ip_address.yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_val.yfilter)
	|| ydk::is_set(op.yfilter)
	|| ydk::is_set(src_ip_address.yfilter);
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

    if (dest_ip_address.is_set || is_set(dest_ip_address.yfilter)) leaf_name_data.push_back(dest_ip_address.get_name_leafdata());
    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_val.is_set || is_set(oid_val.yfilter)) leaf_name_data.push_back(oid_val.get_name_leafdata());
    if (op.is_set || is_set(op.yfilter)) leaf_name_data.push_back(op.get_name_leafdata());
    if (src_ip_address.is_set || is_set(src_ip_address.yfilter)) leaf_name_data.push_back(src_ip_address.get_name_leafdata());


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

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-ip-address")
    {
        dest_ip_address = value;
        dest_ip_address.value_namespace = name_space;
        dest_ip_address.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Event::Manager::Applet::Event_::SnmpNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-ip-address")
    {
        dest_ip_address.yfilter = yfilter;
    }
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
}

bool Native::Event::Manager::Applet::Event_::SnmpNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ip-address" || name == "oid" || name == "oid-val" || name == "op" || name == "src-ip-address")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(pattern.yfilter);
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

    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());


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
    state{YType::enumeration, "state"},
    track_object_number{YType::uint16, "track-object-number"}
{
    yang_name = "track"; yang_parent_name = "event";
}

Native::Event::Manager::Applet::Event_::Track::~Track()
{
}

bool Native::Event::Manager::Applet::Event_::Track::has_data() const
{
    return state.is_set
	|| track_object_number.is_set;
}

bool Native::Event::Manager::Applet::Event_::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(track_object_number.yfilter);
}

std::string Native::Event::Manager::Applet::Event_::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";

    return path_buffer.str();

}

const EntityPath Native::Event::Manager::Applet::Event_::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (track_object_number.is_set || is_set(track_object_number.yfilter)) leaf_name_data.push_back(track_object_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Event_::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Event_::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Event::Manager::Applet::Event_::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-object-number")
    {
        track_object_number = value;
        track_object_number.value_namespace = name_space;
        track_object_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Event_::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "track-object-number")
    {
        track_object_number.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Event_::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "track-object-number")
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
	,if_(std::make_shared<Native::Event::Manager::Applet::Action::If_>())
	,info(std::make_shared<Native::Event::Manager::Applet::Action::Info>())
	,regexp(std::make_shared<Native::Event::Manager::Applet::Action::Regexp>())
	,snmp_trap(nullptr) // presence node
	,string(std::make_shared<Native::Event::Manager::Applet::Action::String>())
	,syslog(std::make_shared<Native::Event::Manager::Applet::Action::Syslog>())
{
    cli->parent = this;

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

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (exit.is_set || is_set(exit.yfilter)) leaf_name_data.push_back(exit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
    if(cli != nullptr)
    {
        children["cli"] = cli;
    }

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
    yang_name = "cli"; yang_parent_name = "action";
}

Native::Event::Manager::Applet::Action::Cli::~Cli()
{
}

bool Native::Event::Manager::Applet::Action::Cli::has_data() const
{
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

const EntityPath Native::Event::Manager::Applet::Action::Cli::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cli' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Event::Manager::Applet::Action::Cli::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Event::Manager::Applet::Action::Cli::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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

Native::Event::Manager::Applet::Action::If_::If_()
    :
    goto_{YType::str, "goto"},
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
    return goto_.is_set
	|| keyword.is_set
	|| string_op_1.is_set
	|| string_op_2.is_set;
}

bool Native::Event::Manager::Applet::Action::If_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(goto_.yfilter)
	|| ydk::is_set(keyword.yfilter)
	|| ydk::is_set(string_op_1.yfilter)
	|| ydk::is_set(string_op_2.yfilter);
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

    if (goto_.is_set || is_set(goto_.yfilter)) leaf_name_data.push_back(goto_.get_name_leafdata());
    if (keyword.is_set || is_set(keyword.yfilter)) leaf_name_data.push_back(keyword.get_name_leafdata());
    if (string_op_1.is_set || is_set(string_op_1.yfilter)) leaf_name_data.push_back(string_op_1.get_name_leafdata());
    if (string_op_2.is_set || is_set(string_op_2.yfilter)) leaf_name_data.push_back(string_op_2.get_name_leafdata());


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

void Native::Event::Manager::Applet::Action::If_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "goto")
    {
        goto_ = value;
        goto_.value_namespace = name_space;
        goto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyword")
    {
        keyword = value;
        keyword.value_namespace = name_space;
        keyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-op-1")
    {
        string_op_1 = value;
        string_op_1.value_namespace = name_space;
        string_op_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string-op-2")
    {
        string_op_2 = value;
        string_op_2.value_namespace = name_space;
        string_op_2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::If_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "goto")
    {
        goto_.yfilter = yfilter;
    }
    if(value_path == "keyword")
    {
        keyword.yfilter = yfilter;
    }
    if(value_path == "string-op-1")
    {
        string_op_1.yfilter = yfilter;
    }
    if(value_path == "string-op-2")
    {
        string_op_2.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::If_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "goto" || name == "keyword" || name == "string-op-1" || name == "string-op-2")
        return true;
    return false;
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
    return is_set(yfilter)
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
    return is_set(yfilter)
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
    return is_set(yfilter)
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

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "var")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(oid.yfilter)
	|| ydk::is_set(oid_type.yfilter)
	|| ydk::is_set(oid_type_value.yfilter)
	|| ydk::is_set(variable_name.yfilter);
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

    if (oid.is_set || is_set(oid.yfilter)) leaf_name_data.push_back(oid.get_name_leafdata());
    if (oid_type.is_set || is_set(oid_type.yfilter)) leaf_name_data.push_back(oid_type.get_name_leafdata());
    if (oid_type_value.is_set || is_set(oid_type_value.yfilter)) leaf_name_data.push_back(oid_type_value.get_name_leafdata());
    if (variable_name.is_set || is_set(variable_name.yfilter)) leaf_name_data.push_back(variable_name.get_name_leafdata());


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

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "variable-name")
    {
        variable_name = value;
        variable_name.value_namespace = name_space;
        variable_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "variable-name")
    {
        variable_name.yfilter = yfilter;
    }
}

bool Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oid" || name == "oid-type" || name == "oid-type-value" || name == "variable-name")
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

    if (enterprise_oid.is_set || is_set(enterprise_oid.yfilter)) leaf_name_data.push_back(enterprise_oid.get_name_leafdata());
    if (generic_trapnum.is_set || is_set(generic_trapnum.yfilter)) leaf_name_data.push_back(generic_trapnum.get_name_leafdata());
    if (specific_trapnum.is_set || is_set(specific_trapnum.yfilter)) leaf_name_data.push_back(specific_trapnum.get_name_leafdata());
    if (trap_oid.is_set || is_set(trap_oid.yfilter)) leaf_name_data.push_back(trap_oid.get_name_leafdata());
    if (trap_var.is_set || is_set(trap_var.yfilter)) leaf_name_data.push_back(trap_var.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(string_input.yfilter)
	|| ydk::is_set(string_match.yfilter)
	|| ydk::is_set(string_pattern.yfilter)
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

    if (string_input.is_set || is_set(string_input.yfilter)) leaf_name_data.push_back(string_input.get_name_leafdata());
    if (string_match.is_set || is_set(string_match.yfilter)) leaf_name_data.push_back(string_match.get_name_leafdata());
    if (string_pattern.is_set || is_set(string_pattern.yfilter)) leaf_name_data.push_back(string_pattern.get_name_leafdata());
    if (string_submatch1.is_set || is_set(string_submatch1.yfilter)) leaf_name_data.push_back(string_submatch1.get_name_leafdata());
    if (string_submatch2.is_set || is_set(string_submatch2.yfilter)) leaf_name_data.push_back(string_submatch2.get_name_leafdata());
    if (string_submatch3.is_set || is_set(string_submatch3.yfilter)) leaf_name_data.push_back(string_submatch3.get_name_leafdata());


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

void Native::Event::Manager::Applet::Action::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "string-pattern")
    {
        string_pattern = value;
        string_pattern.value_namespace = name_space;
        string_pattern.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "string-input")
    {
        string_input.yfilter = yfilter;
    }
    if(value_path == "string-match")
    {
        string_match.yfilter = yfilter;
    }
    if(value_path == "string-pattern")
    {
        string_pattern.yfilter = yfilter;
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
    if(name == "string-input" || name == "string-match" || name == "string-pattern" || name == "string-submatch1" || name == "string-submatch2" || name == "string-submatch3")
        return true;
    return false;
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

    if (intdata1.is_set || is_set(intdata1.yfilter)) leaf_name_data.push_back(intdata1.get_name_leafdata());
    if (intdata2.is_set || is_set(intdata2.yfilter)) leaf_name_data.push_back(intdata2.get_name_leafdata());
    if (strdata.is_set || is_set(strdata.yfilter)) leaf_name_data.push_back(strdata.get_name_leafdata());


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
    return is_set(yfilter)
	|| ydk::is_set(trim.yfilter);
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

    if (trim.is_set || is_set(trim.yfilter)) leaf_name_data.push_back(trim.get_name_leafdata());


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

    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (msg.is_set || is_set(msg.yfilter)) leaf_name_data.push_back(msg.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


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
    return is_set(yfilter);
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

Native::CiscoIosXeNative_Template::CiscoIosXeNative_Template()
{
    yang_name = "Cisco-IOS-XE-native_template"; yang_parent_name = "native";
}

Native::CiscoIosXeNative_Template::~CiscoIosXeNative_Template()
{
}

bool Native::CiscoIosXeNative_Template::has_data() const
{
    for (std::size_t index=0; index<template_details.size(); index++)
    {
        if(template_details[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeNative_Template::has_operation() const
{
    for (std::size_t index=0; index<template_details.size(); index++)
    {
        if(template_details[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeNative_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native_template";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template_details")
    {
        for(auto const & c : template_details)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details>();
        c->parent = this;
        template_details.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_details)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template_details")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Template_Details()
    :
    template_name{YType::str, "template_name"}
    	,
    ethernet(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "template_details"; yang_parent_name = "Cisco-IOS-XE-native_template";
}

Native::CiscoIosXeNative_Template::Template_Details::~Template_Details()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::has_data() const
{
    return template_name.is_set
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-template:template_details" <<"[template_name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-native_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template_name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template_name")
    {
        template_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "template_name")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Ethernet()
    :
    oam(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam>())
{
    oam->parent = this;

    yang_name = "ethernet"; yang_parent_name = "template_details";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::~Ethernet()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::has_data() const
{
    return (oam !=  nullptr && oam->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::Oam()
    :
    link_monitor(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor>())
	,remote_failure(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure>())
{
    link_monitor->parent = this;

    remote_failure->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::~Oam()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::has_data() const
{
    return (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oam' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_monitor != nullptr)
    {
        children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        children["remote-failure"] = remote_failure;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    window{YType::uint16, "window"}
    	,
    frame(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame>())
	,frame_period(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds>())
	,high_threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold>())
	,receive_crc(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
	,symbol_period(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
	,transmit_crc(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc>())
{
    frame->parent = this;

    frame_period->parent = this;

    frame_seconds->parent = this;

    high_threshold->parent = this;

    receive_crc->parent = this;

    symbol_period->parent = this;

    transmit_crc->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::has_data() const
{
    return window.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data())
	|| (transmit_crc !=  nullptr && transmit_crc->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::has_operation() const
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

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    if(child_yang_name == "transmit-crc")
    {
        if(transmit_crc == nullptr)
        {
            transmit_crc = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc>();
        }
        return transmit_crc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    if(transmit_crc != nullptr)
    {
        children["transmit-crc"] = transmit_crc;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "transmit-crc" || name == "window")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frame' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    return high_range.is_set
	|| none.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramePeriod' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    return high_range.is_set
	|| none.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameSeconds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    return high_range.is_set
	|| none.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "high-threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveCrc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    return high_range.is_set
	|| none.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SymbolPeriod' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    return high_range.is_set
	|| none.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::TransmitCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "transmit-crc"; yang_parent_name = "link-monitor";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::~TransmitCrc()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-crc";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransmitCrc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "transmit-crc";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::~Threshold()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::High()
    :
    high_range{YType::uint16, "high-range"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::~High()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::has_data() const
{
    return high_range.is_set
	|| none.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_range.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_range.is_set || is_set(high_range.yfilter)) leaf_name_data.push_back(high_range.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::LinkMonitor::TransmitCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-range" || name == "none")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent>())
	,dying_gasp(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp>())
	,link_fault(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;

    dying_gasp->parent = this;

    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::has_data() const
{
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteFailure' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_event != nullptr)
    {
        children["critical-event"] = critical_event;
    }

    if(dying_gasp != nullptr)
    {
        children["dying-gasp"] = dying_gasp;
    }

    if(link_fault != nullptr)
    {
        children["link-fault"] = link_fault;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalEvent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "critical-event";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{
    yang_name = "dying-gasp"; yang_parent_name = "remote-failure";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DyingGasp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "dying-gasp";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{
    yang_name = "link-fault"; yang_parent_name = "remote-failure";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFault' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "link-fault";
}

Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeNative_Template::Template_Details::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Process::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Process::Cpu::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
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
    return is_set(yfilter)
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

void Native::Process::Cpu::Threshold::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt" || name == "process" || name == "total")
        return true;
    return false;
}

const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::Vty::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Vty::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::http {0, "http"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::https {1, "https"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::ssh {2, "ssh"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::tls {3, "tls"};

const Enum::YLeaf Native::Event::Manager::Applet::Authorization::bypass {0, "bypass"};

const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::any {0, "any"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::down {1, "down"};
const Enum::YLeaf Native::Event::Manager::Applet::Event_::Track::State::up {2, "up"};

const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::counter {0, "counter"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::gauge {1, "gauge"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::int_ {2, "int"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::ipv4 {3, "ipv4"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::octet {4, "octet"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::string {5, "string"};
const Enum::YLeaf Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidType::uint {6, "uint"};


}
}

