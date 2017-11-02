
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_56.hpp"
#include "Cisco_IOS_XE_native_57.hpp"
#include "Cisco_IOS_XE_native_58.hpp"
#include "Cisco_IOS_XE_native_59.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Cellular::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Cellular::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Cellular::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Cellular::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Cellular::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Cellular::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::AccessSession::~AccessSession()
{
}

bool Native::Interface::Cellular::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Cellular::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Cellular::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Cellular::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Cellular::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::Cellular::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::Cellular::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Cellular::AccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Cellular::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::AccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::AccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::AccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::AccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::Cellular::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Cellular::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Cellular::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::~StormControl()
{
}

bool Native::Interface::Cellular::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Cellular::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Cellular::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Cellular::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Cellular::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Cellular::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Cellular::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Action::~Action()
{
}

bool Native::Interface::Cellular::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Cellular::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Cellular::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Cellular::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Cellular::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Cellular::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Cellular::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Multicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Multicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Cellular::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Threshold>())
	,bps(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Cellular::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Trust::~Trust()
{
}

bool Native::Interface::Cellular::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Cellular::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Cellular::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Cellular::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Utd::~Utd()
{
}

bool Native::Interface::Cellular::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Cellular::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Cellular::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Cellular::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Cellular::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::Cellular::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Cellular::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Cellular::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Cellular::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Cellular::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Cellular::PriorityQueue::CosMap::CosMap()
    :
    id{YType::uint8, "id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Cellular::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Cellular::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Cellular::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Cellular::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Cellular::RcvQueue::RcvQueue()
{

    yang_name = "rcv-queue"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::Cellular::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Cellular::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Cellular::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Cellular::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Cellular::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Cellular::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Cellular::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Cellular::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::Cellular::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::Cellular::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Cellular::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::Cellular::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Peer::~Peer()
{
}

bool Native::Interface::Cellular::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Cellular::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Cellular::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Cellular::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Cellular::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Cellular::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Peer::Default_::~Default_()
{
}

bool Native::Interface::Cellular::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Cellular::Peer::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Cellular::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Peer::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Cellular::Peer::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::Peer::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::Peer::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Cellular::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Cellular::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Cellular::Peer::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Peer::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Cellular::Peer::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Cellular::Peer::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Cellular::Peer::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Peer::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::Cellular::Peer::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Peer::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Cellular::PmPath::PmPath()
    :
    name{YType::str, "name"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "pm-path"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Cellular::PmPath::~PmPath()
{
}

bool Native::Interface::Cellular::PmPath::has_data() const
{
    return name.is_set
	|| interface_id.is_set;
}

bool Native::Interface::Cellular::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::Cellular::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Cellular::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Cellular::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Cellular::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::Cellular::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::Vlan::Vlan()
    :
    name{YType::uint16, "name"},
    cisco_ios_xe_interfaces_description{YType::str, "Cisco-IOS-XE-interfaces_description"},
    cisco_ios_xe_interfaces_mac_address{YType::str, "Cisco-IOS-XE-interfaces_mac-address"},
    cisco_ios_xe_interfaces_shutdown{YType::empty, "Cisco-IOS-XE-interfaces_shutdown"},
    keepalive{YType::boolean, "keepalive"},
    cisco_ios_xe_interfaces_if_state{YType::enumeration, "Cisco-IOS-XE-interfaces_if-state"},
    cisco_ios_xe_interfaces_delay{YType::uint32, "Cisco-IOS-XE-interfaces_delay"},
    cisco_ios_xe_interfaces_load_interval{YType::uint16, "Cisco-IOS-XE-interfaces_load-interval"},
    cisco_ios_xe_interfaces_max_reserved_bandwidth{YType::uint8, "Cisco-IOS-XE-interfaces_max-reserved-bandwidth"},
    cisco_ios_xe_interfaces_mtu{YType::uint16, "Cisco-IOS-XE-interfaces_mtu"},
    cisco_ios_xe_interfaces_service_insertion{YType::enumeration, "Cisco-IOS-XE-interfaces_service-insertion"},
    cisco_ios_xe_interfaces_description_{YType::str, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_description"},
    cisco_ios_xe_interfaces_mac_address_{YType::str, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mac-address"},
    cisco_ios_xe_interfaces_shutdown_{YType::empty, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_shutdown"},
    keepalive_{YType::boolean, "Cisco-IOS-XE-vlan:keepalive"},
    cisco_ios_xe_interfaces_if_state_{YType::enumeration, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_if-state"},
    cisco_ios_xe_interfaces_delay_{YType::uint32, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_delay"},
    cisco_ios_xe_interfaces_load_interval_{YType::uint16, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_load-interval"},
    cisco_ios_xe_interfaces_max_reserved_bandwidth_{YType::uint8, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_max-reserved-bandwidth"},
    cisco_ios_xe_interfaces_mtu_{YType::uint16, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mtu"},
    cisco_ios_xe_interfaces_service_insertion_{YType::enumeration, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_service-insertion"}
    	,
    cisco_ios_xe_interfaces_switchport_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf>())
	,cisco_ios_xe_interfaces_switchport(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport>())
	,cisco_ios_xe_interfaces_arp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp>())
	,cisco_ios_xe_interfaces_backup(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup>())
	,cisco_ios_xe_interfaces_cemoudp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp>())
	,cisco_ios_xe_interfaces_cws_tunnel(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel>())
	,cisco_ios_xe_interfaces_l2protocol_tunnel(nullptr) // presence node
	,cisco_ios_xe_interfaces_encapsulation(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation>())
	,cisco_ios_xe_interfaces_fair_queue_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf>())
	,cisco_ios_xe_interfaces_fair_queue(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue>())
	,cisco_ios_xe_interfaces_flowcontrol(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol>())
	,cisco_ios_xe_interfaces_isis(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis>())
	,keepalive_settings(std::make_shared<Native::Interface::Vlan::KeepaliveSettings>())
	,cisco_ios_xe_interfaces_bfd(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd>())
	,cisco_ios_xe_interfaces_bandwidth(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth>())
	,cisco_ios_xe_interfaces_dampening(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening>())
	,cisco_ios_xe_interfaces_domain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain>())
	,cisco_ios_xe_interfaces_mpls(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls>())
	,ip_vrf(std::make_shared<Native::Interface::Vlan::IpVrf>())
	,vrf(std::make_shared<Native::Interface::Vlan::Vrf>())
	,cisco_ios_xe_interfaces_ip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp>())
	,cisco_ios_xe_interfaces_ipv6(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6>())
	,cisco_ios_xe_interfaces_logging(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging>())
	,cisco_ios_xe_interfaces_mdix(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix>())
	,cisco_ios_xe_interfaces_mop(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop>())
	,cisco_ios_xe_interfaces_interface_qos(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos>())
	,cisco_ios_xe_interfaces_standby(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby>())
	,cisco_ios_xe_interfaces_access_session(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession>())
	,cisco_ios_xe_interfaces_storm_control(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl>())
	,cisco_ios_xe_interfaces_trust(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust>())
	,cisco_ios_xe_interfaces_utd(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd>())
	,cisco_ios_xe_interfaces_priority_queue(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue>())
	,cisco_ios_xe_interfaces_rcv_queue(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue>())
	,cisco_ios_xe_interfaces_peer(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer>())
	,cisco_ios_xe_interfaces_pm_path(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath>())
	,crypto(std::make_shared<Native::Interface::Vlan::Crypto>())
	,cts(std::make_shared<Native::Interface::Vlan::Cts>())
	,service_policy(std::make_shared<Native::Interface::Vlan::ServicePolicy>())
	,lisp(std::make_shared<Native::Interface::Vlan::Lisp>())
	,private_vlan(std::make_shared<Native::Interface::Vlan::PrivateVlan>())
	,service_routing(std::make_shared<Native::Interface::Vlan::ServiceRouting>())
	,glbp(std::make_shared<Native::Interface::Vlan::Glbp>())
	,cisco_ios_xe_interfaces_switchport_conf_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_>())
	,cisco_ios_xe_interfaces_switchport_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_>())
	,cisco_ios_xe_interfaces_arp_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp_>())
	,cisco_ios_xe_interfaces_backup_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_>())
	,cisco_ios_xe_interfaces_cemoudp_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_>())
	,cisco_ios_xe_interfaces_cws_tunnel_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_>())
	,cisco_ios_xe_interfaces_l2protocol_tunnel_(nullptr) // presence node
	,cisco_ios_xe_interfaces_encapsulation_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_>())
	,cisco_ios_xe_interfaces_fair_queue_conf_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_>())
	,cisco_ios_xe_interfaces_fair_queue_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_>())
	,cisco_ios_xe_interfaces_flowcontrol_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_>())
	,cisco_ios_xe_interfaces_isis_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_>())
	,keepalive_settings_(std::make_shared<Native::Interface::Vlan::KeepaliveSettings_>())
	,cisco_ios_xe_interfaces_bfd_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_>())
	,cisco_ios_xe_interfaces_bandwidth_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_>())
	,cisco_ios_xe_interfaces_dampening_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_>())
	,cisco_ios_xe_interfaces_domain_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_>())
	,cisco_ios_xe_interfaces_mpls_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_>())
	,ip_vrf_(std::make_shared<Native::Interface::Vlan::IpVrf_>())
	,vrf_(std::make_shared<Native::Interface::Vlan::Vrf_>())
	,cisco_ios_xe_interfaces_ip_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_>())
	,cisco_ios_xe_interfaces_ipv6_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_>())
	,cisco_ios_xe_interfaces_logging_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_>())
	,cisco_ios_xe_interfaces_mdix_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_>())
	,cisco_ios_xe_interfaces_mop_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop_>())
	,cisco_ios_xe_interfaces_interface_qos_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_>())
	,cisco_ios_xe_interfaces_standby_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_>())
	,cisco_ios_xe_interfaces_access_session_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_>())
	,cisco_ios_xe_interfaces_storm_control_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_>())
	,cisco_ios_xe_interfaces_trust_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_>())
	,cisco_ios_xe_interfaces_utd_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_>())
	,cisco_ios_xe_interfaces_priority_queue_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_>())
	,cisco_ios_xe_interfaces_rcv_queue_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_>())
	,cisco_ios_xe_interfaces_peer_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_>())
	,cisco_ios_xe_interfaces_pm_path_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_>())
	,zone_member(std::make_shared<Native::Interface::Vlan::ZoneMember>())
{
    cisco_ios_xe_interfaces_switchport_conf->parent = this;
    cisco_ios_xe_interfaces_switchport->parent = this;
    cisco_ios_xe_interfaces_arp->parent = this;
    cisco_ios_xe_interfaces_backup->parent = this;
    cisco_ios_xe_interfaces_cemoudp->parent = this;
    cisco_ios_xe_interfaces_cws_tunnel->parent = this;
    cisco_ios_xe_interfaces_encapsulation->parent = this;
    cisco_ios_xe_interfaces_fair_queue_conf->parent = this;
    cisco_ios_xe_interfaces_fair_queue->parent = this;
    cisco_ios_xe_interfaces_flowcontrol->parent = this;
    cisco_ios_xe_interfaces_isis->parent = this;
    keepalive_settings->parent = this;
    cisco_ios_xe_interfaces_bfd->parent = this;
    cisco_ios_xe_interfaces_bandwidth->parent = this;
    cisco_ios_xe_interfaces_dampening->parent = this;
    cisco_ios_xe_interfaces_domain->parent = this;
    cisco_ios_xe_interfaces_mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    cisco_ios_xe_interfaces_ip->parent = this;
    cisco_ios_xe_interfaces_ipv6->parent = this;
    cisco_ios_xe_interfaces_logging->parent = this;
    cisco_ios_xe_interfaces_mdix->parent = this;
    cisco_ios_xe_interfaces_mop->parent = this;
    cisco_ios_xe_interfaces_interface_qos->parent = this;
    cisco_ios_xe_interfaces_standby->parent = this;
    cisco_ios_xe_interfaces_access_session->parent = this;
    cisco_ios_xe_interfaces_storm_control->parent = this;
    cisco_ios_xe_interfaces_trust->parent = this;
    cisco_ios_xe_interfaces_utd->parent = this;
    cisco_ios_xe_interfaces_priority_queue->parent = this;
    cisco_ios_xe_interfaces_rcv_queue->parent = this;
    cisco_ios_xe_interfaces_peer->parent = this;
    cisco_ios_xe_interfaces_pm_path->parent = this;
    crypto->parent = this;
    cts->parent = this;
    service_policy->parent = this;
    lisp->parent = this;
    private_vlan->parent = this;
    service_routing->parent = this;
    glbp->parent = this;
    cisco_ios_xe_interfaces_switchport_conf_->parent = this;
    cisco_ios_xe_interfaces_switchport_->parent = this;
    cisco_ios_xe_interfaces_arp_->parent = this;
    cisco_ios_xe_interfaces_backup_->parent = this;
    cisco_ios_xe_interfaces_cemoudp_->parent = this;
    cisco_ios_xe_interfaces_cws_tunnel_->parent = this;
    cisco_ios_xe_interfaces_encapsulation_->parent = this;
    cisco_ios_xe_interfaces_fair_queue_conf_->parent = this;
    cisco_ios_xe_interfaces_fair_queue_->parent = this;
    cisco_ios_xe_interfaces_flowcontrol_->parent = this;
    cisco_ios_xe_interfaces_isis_->parent = this;
    keepalive_settings_->parent = this;
    cisco_ios_xe_interfaces_bfd_->parent = this;
    cisco_ios_xe_interfaces_bandwidth_->parent = this;
    cisco_ios_xe_interfaces_dampening_->parent = this;
    cisco_ios_xe_interfaces_domain_->parent = this;
    cisco_ios_xe_interfaces_mpls_->parent = this;
    ip_vrf_->parent = this;
    vrf_->parent = this;
    cisco_ios_xe_interfaces_ip_->parent = this;
    cisco_ios_xe_interfaces_ipv6_->parent = this;
    cisco_ios_xe_interfaces_logging_->parent = this;
    cisco_ios_xe_interfaces_mdix_->parent = this;
    cisco_ios_xe_interfaces_mop_->parent = this;
    cisco_ios_xe_interfaces_interface_qos_->parent = this;
    cisco_ios_xe_interfaces_standby_->parent = this;
    cisco_ios_xe_interfaces_access_session_->parent = this;
    cisco_ios_xe_interfaces_storm_control_->parent = this;
    cisco_ios_xe_interfaces_trust_->parent = this;
    cisco_ios_xe_interfaces_utd_->parent = this;
    cisco_ios_xe_interfaces_priority_queue_->parent = this;
    cisco_ios_xe_interfaces_rcv_queue_->parent = this;
    cisco_ios_xe_interfaces_peer_->parent = this;
    cisco_ios_xe_interfaces_pm_path_->parent = this;
    zone_member->parent = this;

    yang_name = "Vlan"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::Vlan::~Vlan()
{
}

bool Native::Interface::Vlan::has_data() const
{
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrrp.size(); index++)
    {
        if(vrrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue_.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue_[index]->has_data())
            return true;
    }
    return name.is_set
	|| cisco_ios_xe_interfaces_description.is_set
	|| cisco_ios_xe_interfaces_mac_address.is_set
	|| cisco_ios_xe_interfaces_shutdown.is_set
	|| keepalive.is_set
	|| cisco_ios_xe_interfaces_if_state.is_set
	|| cisco_ios_xe_interfaces_delay.is_set
	|| cisco_ios_xe_interfaces_load_interval.is_set
	|| cisco_ios_xe_interfaces_max_reserved_bandwidth.is_set
	|| cisco_ios_xe_interfaces_mtu.is_set
	|| cisco_ios_xe_interfaces_service_insertion.is_set
	|| cisco_ios_xe_interfaces_description_.is_set
	|| cisco_ios_xe_interfaces_mac_address_.is_set
	|| cisco_ios_xe_interfaces_shutdown_.is_set
	|| keepalive_.is_set
	|| cisco_ios_xe_interfaces_if_state_.is_set
	|| cisco_ios_xe_interfaces_delay_.is_set
	|| cisco_ios_xe_interfaces_load_interval_.is_set
	|| cisco_ios_xe_interfaces_max_reserved_bandwidth_.is_set
	|| cisco_ios_xe_interfaces_mtu_.is_set
	|| cisco_ios_xe_interfaces_service_insertion_.is_set
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_data())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_data())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_data())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_data())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_data())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_data())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_data())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_data())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_data())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_data())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_data())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_data())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_data())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_data())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_data())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_data())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_data())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_data())
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_data())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_data())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_data())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_data())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_data())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_data())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_data())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (service_routing !=  nullptr && service_routing->has_data())
	|| (glbp !=  nullptr && glbp->has_data())
	|| (cisco_ios_xe_interfaces_switchport_conf_ !=  nullptr && cisco_ios_xe_interfaces_switchport_conf_->has_data())
	|| (cisco_ios_xe_interfaces_switchport_ !=  nullptr && cisco_ios_xe_interfaces_switchport_->has_data())
	|| (cisco_ios_xe_interfaces_arp_ !=  nullptr && cisco_ios_xe_interfaces_arp_->has_data())
	|| (cisco_ios_xe_interfaces_backup_ !=  nullptr && cisco_ios_xe_interfaces_backup_->has_data())
	|| (cisco_ios_xe_interfaces_cemoudp_ !=  nullptr && cisco_ios_xe_interfaces_cemoudp_->has_data())
	|| (cisco_ios_xe_interfaces_cws_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel_->has_data())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel_->has_data())
	|| (cisco_ios_xe_interfaces_encapsulation_ !=  nullptr && cisco_ios_xe_interfaces_encapsulation_->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_conf_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf_->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_->has_data())
	|| (cisco_ios_xe_interfaces_flowcontrol_ !=  nullptr && cisco_ios_xe_interfaces_flowcontrol_->has_data())
	|| (cisco_ios_xe_interfaces_isis_ !=  nullptr && cisco_ios_xe_interfaces_isis_->has_data())
	|| (keepalive_settings_ !=  nullptr && keepalive_settings_->has_data())
	|| (cisco_ios_xe_interfaces_bfd_ !=  nullptr && cisco_ios_xe_interfaces_bfd_->has_data())
	|| (cisco_ios_xe_interfaces_bandwidth_ !=  nullptr && cisco_ios_xe_interfaces_bandwidth_->has_data())
	|| (cisco_ios_xe_interfaces_dampening_ !=  nullptr && cisco_ios_xe_interfaces_dampening_->has_data())
	|| (cisco_ios_xe_interfaces_domain_ !=  nullptr && cisco_ios_xe_interfaces_domain_->has_data())
	|| (cisco_ios_xe_interfaces_mpls_ !=  nullptr && cisco_ios_xe_interfaces_mpls_->has_data())
	|| (ip_vrf_ !=  nullptr && ip_vrf_->has_data())
	|| (vrf_ !=  nullptr && vrf_->has_data())
	|| (cisco_ios_xe_interfaces_ip_ !=  nullptr && cisco_ios_xe_interfaces_ip_->has_data())
	|| (cisco_ios_xe_interfaces_ipv6_ !=  nullptr && cisco_ios_xe_interfaces_ipv6_->has_data())
	|| (cisco_ios_xe_interfaces_logging_ !=  nullptr && cisco_ios_xe_interfaces_logging_->has_data())
	|| (cisco_ios_xe_interfaces_mdix_ !=  nullptr && cisco_ios_xe_interfaces_mdix_->has_data())
	|| (cisco_ios_xe_interfaces_mop_ !=  nullptr && cisco_ios_xe_interfaces_mop_->has_data())
	|| (cisco_ios_xe_interfaces_interface_qos_ !=  nullptr && cisco_ios_xe_interfaces_interface_qos_->has_data())
	|| (cisco_ios_xe_interfaces_standby_ !=  nullptr && cisco_ios_xe_interfaces_standby_->has_data())
	|| (cisco_ios_xe_interfaces_access_session_ !=  nullptr && cisco_ios_xe_interfaces_access_session_->has_data())
	|| (cisco_ios_xe_interfaces_storm_control_ !=  nullptr && cisco_ios_xe_interfaces_storm_control_->has_data())
	|| (cisco_ios_xe_interfaces_trust_ !=  nullptr && cisco_ios_xe_interfaces_trust_->has_data())
	|| (cisco_ios_xe_interfaces_utd_ !=  nullptr && cisco_ios_xe_interfaces_utd_->has_data())
	|| (cisco_ios_xe_interfaces_priority_queue_ !=  nullptr && cisco_ios_xe_interfaces_priority_queue_->has_data())
	|| (cisco_ios_xe_interfaces_rcv_queue_ !=  nullptr && cisco_ios_xe_interfaces_rcv_queue_->has_data())
	|| (cisco_ios_xe_interfaces_peer_ !=  nullptr && cisco_ios_xe_interfaces_peer_->has_data())
	|| (cisco_ios_xe_interfaces_pm_path_ !=  nullptr && cisco_ios_xe_interfaces_pm_path_->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::Vlan::has_operation() const
{
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrrp.size(); index++)
    {
        if(vrrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue_.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_description.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mac_address.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_if_state.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_delay.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_load_interval.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mtu.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_service_insertion.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_description_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mac_address_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_shutdown_.yfilter)
	|| ydk::is_set(keepalive_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_if_state_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_delay_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_load_interval_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mtu_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_service_insertion_.yfilter)
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_operation())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_operation())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_operation())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_operation())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_operation())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_operation())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_operation())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_operation())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_operation())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_operation())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_operation())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_operation())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_operation())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_operation())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_operation())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_operation())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_operation())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_operation())
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_operation())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_operation())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_operation())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_operation())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_operation())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_operation())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_operation())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (service_routing !=  nullptr && service_routing->has_operation())
	|| (glbp !=  nullptr && glbp->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_conf_ !=  nullptr && cisco_ios_xe_interfaces_switchport_conf_->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_ !=  nullptr && cisco_ios_xe_interfaces_switchport_->has_operation())
	|| (cisco_ios_xe_interfaces_arp_ !=  nullptr && cisco_ios_xe_interfaces_arp_->has_operation())
	|| (cisco_ios_xe_interfaces_backup_ !=  nullptr && cisco_ios_xe_interfaces_backup_->has_operation())
	|| (cisco_ios_xe_interfaces_cemoudp_ !=  nullptr && cisco_ios_xe_interfaces_cemoudp_->has_operation())
	|| (cisco_ios_xe_interfaces_cws_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel_->has_operation())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel_->has_operation())
	|| (cisco_ios_xe_interfaces_encapsulation_ !=  nullptr && cisco_ios_xe_interfaces_encapsulation_->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_conf_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf_->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_->has_operation())
	|| (cisco_ios_xe_interfaces_flowcontrol_ !=  nullptr && cisco_ios_xe_interfaces_flowcontrol_->has_operation())
	|| (cisco_ios_xe_interfaces_isis_ !=  nullptr && cisco_ios_xe_interfaces_isis_->has_operation())
	|| (keepalive_settings_ !=  nullptr && keepalive_settings_->has_operation())
	|| (cisco_ios_xe_interfaces_bfd_ !=  nullptr && cisco_ios_xe_interfaces_bfd_->has_operation())
	|| (cisco_ios_xe_interfaces_bandwidth_ !=  nullptr && cisco_ios_xe_interfaces_bandwidth_->has_operation())
	|| (cisco_ios_xe_interfaces_dampening_ !=  nullptr && cisco_ios_xe_interfaces_dampening_->has_operation())
	|| (cisco_ios_xe_interfaces_domain_ !=  nullptr && cisco_ios_xe_interfaces_domain_->has_operation())
	|| (cisco_ios_xe_interfaces_mpls_ !=  nullptr && cisco_ios_xe_interfaces_mpls_->has_operation())
	|| (ip_vrf_ !=  nullptr && ip_vrf_->has_operation())
	|| (vrf_ !=  nullptr && vrf_->has_operation())
	|| (cisco_ios_xe_interfaces_ip_ !=  nullptr && cisco_ios_xe_interfaces_ip_->has_operation())
	|| (cisco_ios_xe_interfaces_ipv6_ !=  nullptr && cisco_ios_xe_interfaces_ipv6_->has_operation())
	|| (cisco_ios_xe_interfaces_logging_ !=  nullptr && cisco_ios_xe_interfaces_logging_->has_operation())
	|| (cisco_ios_xe_interfaces_mdix_ !=  nullptr && cisco_ios_xe_interfaces_mdix_->has_operation())
	|| (cisco_ios_xe_interfaces_mop_ !=  nullptr && cisco_ios_xe_interfaces_mop_->has_operation())
	|| (cisco_ios_xe_interfaces_interface_qos_ !=  nullptr && cisco_ios_xe_interfaces_interface_qos_->has_operation())
	|| (cisco_ios_xe_interfaces_standby_ !=  nullptr && cisco_ios_xe_interfaces_standby_->has_operation())
	|| (cisco_ios_xe_interfaces_access_session_ !=  nullptr && cisco_ios_xe_interfaces_access_session_->has_operation())
	|| (cisco_ios_xe_interfaces_storm_control_ !=  nullptr && cisco_ios_xe_interfaces_storm_control_->has_operation())
	|| (cisco_ios_xe_interfaces_trust_ !=  nullptr && cisco_ios_xe_interfaces_trust_->has_operation())
	|| (cisco_ios_xe_interfaces_utd_ !=  nullptr && cisco_ios_xe_interfaces_utd_->has_operation())
	|| (cisco_ios_xe_interfaces_priority_queue_ !=  nullptr && cisco_ios_xe_interfaces_priority_queue_->has_operation())
	|| (cisco_ios_xe_interfaces_rcv_queue_ !=  nullptr && cisco_ios_xe_interfaces_rcv_queue_->has_operation())
	|| (cisco_ios_xe_interfaces_peer_ !=  nullptr && cisco_ios_xe_interfaces_peer_->has_operation())
	|| (cisco_ios_xe_interfaces_pm_path_ !=  nullptr && cisco_ios_xe_interfaces_pm_path_->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cisco_ios_xe_interfaces_description.is_set || is_set(cisco_ios_xe_interfaces_description.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_description.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mac_address.is_set || is_set(cisco_ios_xe_interfaces_mac_address.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mac_address.get_name_leafdata());
    if (cisco_ios_xe_interfaces_shutdown.is_set || is_set(cisco_ios_xe_interfaces_shutdown.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (cisco_ios_xe_interfaces_if_state.is_set || is_set(cisco_ios_xe_interfaces_if_state.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_if_state.get_name_leafdata());
    if (cisco_ios_xe_interfaces_delay.is_set || is_set(cisco_ios_xe_interfaces_delay.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_delay.get_name_leafdata());
    if (cisco_ios_xe_interfaces_load_interval.is_set || is_set(cisco_ios_xe_interfaces_load_interval.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_load_interval.get_name_leafdata());
    if (cisco_ios_xe_interfaces_max_reserved_bandwidth.is_set || is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_max_reserved_bandwidth.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mtu.is_set || is_set(cisco_ios_xe_interfaces_mtu.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mtu.get_name_leafdata());
    if (cisco_ios_xe_interfaces_service_insertion.is_set || is_set(cisco_ios_xe_interfaces_service_insertion.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_service_insertion.get_name_leafdata());
    if (cisco_ios_xe_interfaces_description_.is_set || is_set(cisco_ios_xe_interfaces_description_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_description_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mac_address_.is_set || is_set(cisco_ios_xe_interfaces_mac_address_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mac_address_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_shutdown_.is_set || is_set(cisco_ios_xe_interfaces_shutdown_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_shutdown_.get_name_leafdata());
    if (keepalive_.is_set || is_set(keepalive_.yfilter)) leaf_name_data.push_back(keepalive_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_if_state_.is_set || is_set(cisco_ios_xe_interfaces_if_state_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_if_state_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_delay_.is_set || is_set(cisco_ios_xe_interfaces_delay_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_delay_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_load_interval_.is_set || is_set(cisco_ios_xe_interfaces_load_interval_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_load_interval_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_max_reserved_bandwidth_.is_set || is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_max_reserved_bandwidth_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mtu_.is_set || is_set(cisco_ios_xe_interfaces_mtu_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mtu_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_service_insertion_.is_set || is_set(cisco_ios_xe_interfaces_service_insertion_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_service_insertion_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport-conf")
    {
        if(cisco_ios_xe_interfaces_switchport_conf == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf>();
        }
        return cisco_ios_xe_interfaces_switchport_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport")
    {
        if(cisco_ios_xe_interfaces_switchport == nullptr)
        {
            cisco_ios_xe_interfaces_switchport = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport>();
        }
        return cisco_ios_xe_interfaces_switchport;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_arp")
    {
        if(cisco_ios_xe_interfaces_arp == nullptr)
        {
            cisco_ios_xe_interfaces_arp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp>();
        }
        return cisco_ios_xe_interfaces_arp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_backup")
    {
        if(cisco_ios_xe_interfaces_backup == nullptr)
        {
            cisco_ios_xe_interfaces_backup = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup>();
        }
        return cisco_ios_xe_interfaces_backup;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cemoudp")
    {
        if(cisco_ios_xe_interfaces_cemoudp == nullptr)
        {
            cisco_ios_xe_interfaces_cemoudp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp>();
        }
        return cisco_ios_xe_interfaces_cemoudp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cws-tunnel")
    {
        if(cisco_ios_xe_interfaces_cws_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_cws_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel>();
        }
        return cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel")
    {
        if(cisco_ios_xe_interfaces_l2protocol_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_l2protocol_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel>();
        }
        return cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_encapsulation")
    {
        if(cisco_ios_xe_interfaces_encapsulation == nullptr)
        {
            cisco_ios_xe_interfaces_encapsulation = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation>();
        }
        return cisco_ios_xe_interfaces_encapsulation;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue-conf")
    {
        if(cisco_ios_xe_interfaces_fair_queue_conf == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf>();
        }
        return cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue")
    {
        if(cisco_ios_xe_interfaces_fair_queue == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue>();
        }
        return cisco_ios_xe_interfaces_fair_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_flowcontrol")
    {
        if(cisco_ios_xe_interfaces_flowcontrol == nullptr)
        {
            cisco_ios_xe_interfaces_flowcontrol = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol>();
        }
        return cisco_ios_xe_interfaces_flowcontrol;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_isis")
    {
        if(cisco_ios_xe_interfaces_isis == nullptr)
        {
            cisco_ios_xe_interfaces_isis = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis>();
        }
        return cisco_ios_xe_interfaces_isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Vlan::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bfd")
    {
        if(cisco_ios_xe_interfaces_bfd == nullptr)
        {
            cisco_ios_xe_interfaces_bfd = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd>();
        }
        return cisco_ios_xe_interfaces_bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bandwidth")
    {
        if(cisco_ios_xe_interfaces_bandwidth == nullptr)
        {
            cisco_ios_xe_interfaces_bandwidth = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth>();
        }
        return cisco_ios_xe_interfaces_bandwidth;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_dampening")
    {
        if(cisco_ios_xe_interfaces_dampening == nullptr)
        {
            cisco_ios_xe_interfaces_dampening = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening>();
        }
        return cisco_ios_xe_interfaces_dampening;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_domain")
    {
        if(cisco_ios_xe_interfaces_domain == nullptr)
        {
            cisco_ios_xe_interfaces_domain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain>();
        }
        return cisco_ios_xe_interfaces_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_hold-queue")
    {
        for(auto const & c : cisco_ios_xe_interfaces_hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue>();
        c->parent = this;
        cisco_ios_xe_interfaces_hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mpls")
    {
        if(cisco_ios_xe_interfaces_mpls == nullptr)
        {
            cisco_ios_xe_interfaces_mpls = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls>();
        }
        return cisco_ios_xe_interfaces_mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Vlan::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ip")
    {
        if(cisco_ios_xe_interfaces_ip == nullptr)
        {
            cisco_ios_xe_interfaces_ip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp>();
        }
        return cisco_ios_xe_interfaces_ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ipv6")
    {
        if(cisco_ios_xe_interfaces_ipv6 == nullptr)
        {
            cisco_ios_xe_interfaces_ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6>();
        }
        return cisco_ios_xe_interfaces_ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_logging")
    {
        if(cisco_ios_xe_interfaces_logging == nullptr)
        {
            cisco_ios_xe_interfaces_logging = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging>();
        }
        return cisco_ios_xe_interfaces_logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mdix")
    {
        if(cisco_ios_xe_interfaces_mdix == nullptr)
        {
            cisco_ios_xe_interfaces_mdix = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix>();
        }
        return cisco_ios_xe_interfaces_mdix;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mop")
    {
        if(cisco_ios_xe_interfaces_mop == nullptr)
        {
            cisco_ios_xe_interfaces_mop = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop>();
        }
        return cisco_ios_xe_interfaces_mop;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_interface_qos")
    {
        if(cisco_ios_xe_interfaces_interface_qos == nullptr)
        {
            cisco_ios_xe_interfaces_interface_qos = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos>();
        }
        return cisco_ios_xe_interfaces_interface_qos;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_standby")
    {
        if(cisco_ios_xe_interfaces_standby == nullptr)
        {
            cisco_ios_xe_interfaces_standby = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby>();
        }
        return cisco_ios_xe_interfaces_standby;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_access-session")
    {
        if(cisco_ios_xe_interfaces_access_session == nullptr)
        {
            cisco_ios_xe_interfaces_access_session = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession>();
        }
        return cisco_ios_xe_interfaces_access_session;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_storm-control")
    {
        if(cisco_ios_xe_interfaces_storm_control == nullptr)
        {
            cisco_ios_xe_interfaces_storm_control = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl>();
        }
        return cisco_ios_xe_interfaces_storm_control;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_trust")
    {
        if(cisco_ios_xe_interfaces_trust == nullptr)
        {
            cisco_ios_xe_interfaces_trust = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust>();
        }
        return cisco_ios_xe_interfaces_trust;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_utd")
    {
        if(cisco_ios_xe_interfaces_utd == nullptr)
        {
            cisco_ios_xe_interfaces_utd = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd>();
        }
        return cisco_ios_xe_interfaces_utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_priority-queue")
    {
        if(cisco_ios_xe_interfaces_priority_queue == nullptr)
        {
            cisco_ios_xe_interfaces_priority_queue = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue>();
        }
        return cisco_ios_xe_interfaces_priority_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_rcv-queue")
    {
        if(cisco_ios_xe_interfaces_rcv_queue == nullptr)
        {
            cisco_ios_xe_interfaces_rcv_queue = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue>();
        }
        return cisco_ios_xe_interfaces_rcv_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_peer")
    {
        if(cisco_ios_xe_interfaces_peer == nullptr)
        {
            cisco_ios_xe_interfaces_peer = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer>();
        }
        return cisco_ios_xe_interfaces_peer;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_pm-path")
    {
        if(cisco_ios_xe_interfaces_pm_path == nullptr)
        {
            cisco_ios_xe_interfaces_pm_path = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath>();
        }
        return cisco_ios_xe_interfaces_pm_path;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::Vlan::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::Vlan::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Vlan::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::Vlan::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::Vlan::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "vrrp")
    {
        for(auto const & c : vrrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Vrrp>();
        c->parent = this;
        vrrp.push_back(c);
        return c;
    }

    if(child_yang_name == "service-routing")
    {
        if(service_routing == nullptr)
        {
            service_routing = std::make_shared<Native::Interface::Vlan::ServiceRouting>();
        }
        return service_routing;
    }

    if(child_yang_name == "glbp")
    {
        if(glbp == nullptr)
        {
            glbp = std::make_shared<Native::Interface::Vlan::Glbp>();
        }
        return glbp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport-conf")
    {
        if(cisco_ios_xe_interfaces_switchport_conf_ == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_conf_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_>();
        }
        return cisco_ios_xe_interfaces_switchport_conf_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport")
    {
        if(cisco_ios_xe_interfaces_switchport_ == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_>();
        }
        return cisco_ios_xe_interfaces_switchport_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_arp")
    {
        if(cisco_ios_xe_interfaces_arp_ == nullptr)
        {
            cisco_ios_xe_interfaces_arp_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp_>();
        }
        return cisco_ios_xe_interfaces_arp_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_backup")
    {
        if(cisco_ios_xe_interfaces_backup_ == nullptr)
        {
            cisco_ios_xe_interfaces_backup_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_>();
        }
        return cisco_ios_xe_interfaces_backup_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cemoudp")
    {
        if(cisco_ios_xe_interfaces_cemoudp_ == nullptr)
        {
            cisco_ios_xe_interfaces_cemoudp_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_>();
        }
        return cisco_ios_xe_interfaces_cemoudp_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cws-tunnel")
    {
        if(cisco_ios_xe_interfaces_cws_tunnel_ == nullptr)
        {
            cisco_ios_xe_interfaces_cws_tunnel_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_>();
        }
        return cisco_ios_xe_interfaces_cws_tunnel_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel")
    {
        if(cisco_ios_xe_interfaces_l2protocol_tunnel_ == nullptr)
        {
            cisco_ios_xe_interfaces_l2protocol_tunnel_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_>();
        }
        return cisco_ios_xe_interfaces_l2protocol_tunnel_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_encapsulation")
    {
        if(cisco_ios_xe_interfaces_encapsulation_ == nullptr)
        {
            cisco_ios_xe_interfaces_encapsulation_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_>();
        }
        return cisco_ios_xe_interfaces_encapsulation_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue-conf")
    {
        if(cisco_ios_xe_interfaces_fair_queue_conf_ == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_conf_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_>();
        }
        return cisco_ios_xe_interfaces_fair_queue_conf_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue")
    {
        if(cisco_ios_xe_interfaces_fair_queue_ == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_>();
        }
        return cisco_ios_xe_interfaces_fair_queue_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_flowcontrol")
    {
        if(cisco_ios_xe_interfaces_flowcontrol_ == nullptr)
        {
            cisco_ios_xe_interfaces_flowcontrol_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_>();
        }
        return cisco_ios_xe_interfaces_flowcontrol_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_isis")
    {
        if(cisco_ios_xe_interfaces_isis_ == nullptr)
        {
            cisco_ios_xe_interfaces_isis_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_>();
        }
        return cisco_ios_xe_interfaces_isis_;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings_ == nullptr)
        {
            keepalive_settings_ = std::make_shared<Native::Interface::Vlan::KeepaliveSettings_>();
        }
        return keepalive_settings_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bfd")
    {
        if(cisco_ios_xe_interfaces_bfd_ == nullptr)
        {
            cisco_ios_xe_interfaces_bfd_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_>();
        }
        return cisco_ios_xe_interfaces_bfd_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bandwidth")
    {
        if(cisco_ios_xe_interfaces_bandwidth_ == nullptr)
        {
            cisco_ios_xe_interfaces_bandwidth_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_>();
        }
        return cisco_ios_xe_interfaces_bandwidth_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_dampening")
    {
        if(cisco_ios_xe_interfaces_dampening_ == nullptr)
        {
            cisco_ios_xe_interfaces_dampening_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_>();
        }
        return cisco_ios_xe_interfaces_dampening_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_domain")
    {
        if(cisco_ios_xe_interfaces_domain_ == nullptr)
        {
            cisco_ios_xe_interfaces_domain_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_>();
        }
        return cisco_ios_xe_interfaces_domain_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_hold-queue")
    {
        for(auto const & c : cisco_ios_xe_interfaces_hold_queue_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_>();
        c->parent = this;
        cisco_ios_xe_interfaces_hold_queue_.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mpls")
    {
        if(cisco_ios_xe_interfaces_mpls_ == nullptr)
        {
            cisco_ios_xe_interfaces_mpls_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_>();
        }
        return cisco_ios_xe_interfaces_mpls_;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf_ == nullptr)
        {
            ip_vrf_ = std::make_shared<Native::Interface::Vlan::IpVrf_>();
        }
        return ip_vrf_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf_ == nullptr)
        {
            vrf_ = std::make_shared<Native::Interface::Vlan::Vrf_>();
        }
        return vrf_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ip")
    {
        if(cisco_ios_xe_interfaces_ip_ == nullptr)
        {
            cisco_ios_xe_interfaces_ip_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_>();
        }
        return cisco_ios_xe_interfaces_ip_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ipv6")
    {
        if(cisco_ios_xe_interfaces_ipv6_ == nullptr)
        {
            cisco_ios_xe_interfaces_ipv6_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_>();
        }
        return cisco_ios_xe_interfaces_ipv6_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_logging")
    {
        if(cisco_ios_xe_interfaces_logging_ == nullptr)
        {
            cisco_ios_xe_interfaces_logging_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_>();
        }
        return cisco_ios_xe_interfaces_logging_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mdix")
    {
        if(cisco_ios_xe_interfaces_mdix_ == nullptr)
        {
            cisco_ios_xe_interfaces_mdix_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_>();
        }
        return cisco_ios_xe_interfaces_mdix_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mop")
    {
        if(cisco_ios_xe_interfaces_mop_ == nullptr)
        {
            cisco_ios_xe_interfaces_mop_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop_>();
        }
        return cisco_ios_xe_interfaces_mop_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_interface_qos")
    {
        if(cisco_ios_xe_interfaces_interface_qos_ == nullptr)
        {
            cisco_ios_xe_interfaces_interface_qos_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_>();
        }
        return cisco_ios_xe_interfaces_interface_qos_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_standby")
    {
        if(cisco_ios_xe_interfaces_standby_ == nullptr)
        {
            cisco_ios_xe_interfaces_standby_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_>();
        }
        return cisco_ios_xe_interfaces_standby_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_access-session")
    {
        if(cisco_ios_xe_interfaces_access_session_ == nullptr)
        {
            cisco_ios_xe_interfaces_access_session_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_>();
        }
        return cisco_ios_xe_interfaces_access_session_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_storm-control")
    {
        if(cisco_ios_xe_interfaces_storm_control_ == nullptr)
        {
            cisco_ios_xe_interfaces_storm_control_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_>();
        }
        return cisco_ios_xe_interfaces_storm_control_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_trust")
    {
        if(cisco_ios_xe_interfaces_trust_ == nullptr)
        {
            cisco_ios_xe_interfaces_trust_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_>();
        }
        return cisco_ios_xe_interfaces_trust_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_utd")
    {
        if(cisco_ios_xe_interfaces_utd_ == nullptr)
        {
            cisco_ios_xe_interfaces_utd_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_>();
        }
        return cisco_ios_xe_interfaces_utd_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_priority-queue")
    {
        if(cisco_ios_xe_interfaces_priority_queue_ == nullptr)
        {
            cisco_ios_xe_interfaces_priority_queue_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_>();
        }
        return cisco_ios_xe_interfaces_priority_queue_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_rcv-queue")
    {
        if(cisco_ios_xe_interfaces_rcv_queue_ == nullptr)
        {
            cisco_ios_xe_interfaces_rcv_queue_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_>();
        }
        return cisco_ios_xe_interfaces_rcv_queue_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_peer")
    {
        if(cisco_ios_xe_interfaces_peer_ == nullptr)
        {
            cisco_ios_xe_interfaces_peer_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_>();
        }
        return cisco_ios_xe_interfaces_peer_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_pm-path")
    {
        if(cisco_ios_xe_interfaces_pm_path_ == nullptr)
        {
            cisco_ios_xe_interfaces_pm_path_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_>();
        }
        return cisco_ios_xe_interfaces_pm_path_;
    }

    if(child_yang_name == "zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::Vlan::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_ios_xe_interfaces_switchport_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport-conf"] = cisco_ios_xe_interfaces_switchport_conf;
    }

    if(cisco_ios_xe_interfaces_switchport != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport"] = cisco_ios_xe_interfaces_switchport;
    }

    if(cisco_ios_xe_interfaces_arp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_arp"] = cisco_ios_xe_interfaces_arp;
    }

    if(cisco_ios_xe_interfaces_backup != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_backup"] = cisco_ios_xe_interfaces_backup;
    }

    if(cisco_ios_xe_interfaces_cemoudp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cemoudp"] = cisco_ios_xe_interfaces_cemoudp;
    }

    if(cisco_ios_xe_interfaces_cws_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cws-tunnel"] = cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(cisco_ios_xe_interfaces_l2protocol_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_l2protocol-tunnel"] = cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(cisco_ios_xe_interfaces_encapsulation != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_encapsulation"] = cisco_ios_xe_interfaces_encapsulation;
    }

    if(cisco_ios_xe_interfaces_fair_queue_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue-conf"] = cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(cisco_ios_xe_interfaces_fair_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue"] = cisco_ios_xe_interfaces_fair_queue;
    }

    if(cisco_ios_xe_interfaces_flowcontrol != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_flowcontrol"] = cisco_ios_xe_interfaces_flowcontrol;
    }

    if(cisco_ios_xe_interfaces_isis != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_isis"] = cisco_ios_xe_interfaces_isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(cisco_ios_xe_interfaces_bfd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bfd"] = cisco_ios_xe_interfaces_bfd;
    }

    if(cisco_ios_xe_interfaces_bandwidth != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bandwidth"] = cisco_ios_xe_interfaces_bandwidth;
    }

    if(cisco_ios_xe_interfaces_dampening != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_dampening"] = cisco_ios_xe_interfaces_dampening;
    }

    if(cisco_ios_xe_interfaces_domain != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_domain"] = cisco_ios_xe_interfaces_domain;
    }

    for (auto const & c : cisco_ios_xe_interfaces_hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(cisco_ios_xe_interfaces_mpls != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mpls"] = cisco_ios_xe_interfaces_mpls;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(cisco_ios_xe_interfaces_ip != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ip"] = cisco_ios_xe_interfaces_ip;
    }

    if(cisco_ios_xe_interfaces_ipv6 != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ipv6"] = cisco_ios_xe_interfaces_ipv6;
    }

    if(cisco_ios_xe_interfaces_logging != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_logging"] = cisco_ios_xe_interfaces_logging;
    }

    if(cisco_ios_xe_interfaces_mdix != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mdix"] = cisco_ios_xe_interfaces_mdix;
    }

    if(cisco_ios_xe_interfaces_mop != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mop"] = cisco_ios_xe_interfaces_mop;
    }

    if(cisco_ios_xe_interfaces_interface_qos != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_interface_qos"] = cisco_ios_xe_interfaces_interface_qos;
    }

    if(cisco_ios_xe_interfaces_standby != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_standby"] = cisco_ios_xe_interfaces_standby;
    }

    if(cisco_ios_xe_interfaces_access_session != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_access-session"] = cisco_ios_xe_interfaces_access_session;
    }

    if(cisco_ios_xe_interfaces_storm_control != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_storm-control"] = cisco_ios_xe_interfaces_storm_control;
    }

    if(cisco_ios_xe_interfaces_trust != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_trust"] = cisco_ios_xe_interfaces_trust;
    }

    if(cisco_ios_xe_interfaces_utd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_utd"] = cisco_ios_xe_interfaces_utd;
    }

    if(cisco_ios_xe_interfaces_priority_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_priority-queue"] = cisco_ios_xe_interfaces_priority_queue;
    }

    if(cisco_ios_xe_interfaces_rcv_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_rcv-queue"] = cisco_ios_xe_interfaces_rcv_queue;
    }

    if(cisco_ios_xe_interfaces_peer != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_peer"] = cisco_ios_xe_interfaces_peer;
    }

    if(cisco_ios_xe_interfaces_pm_path != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_pm-path"] = cisco_ios_xe_interfaces_pm_path;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    for (auto const & c : vrrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_routing != nullptr)
    {
        children["service-routing"] = service_routing;
    }

    if(glbp != nullptr)
    {
        children["glbp"] = glbp;
    }

    if(cisco_ios_xe_interfaces_switchport_conf_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport-conf"] = cisco_ios_xe_interfaces_switchport_conf_;
    }

    if(cisco_ios_xe_interfaces_switchport_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport"] = cisco_ios_xe_interfaces_switchport_;
    }

    if(cisco_ios_xe_interfaces_arp_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_arp"] = cisco_ios_xe_interfaces_arp_;
    }

    if(cisco_ios_xe_interfaces_backup_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_backup"] = cisco_ios_xe_interfaces_backup_;
    }

    if(cisco_ios_xe_interfaces_cemoudp_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cemoudp"] = cisco_ios_xe_interfaces_cemoudp_;
    }

    if(cisco_ios_xe_interfaces_cws_tunnel_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cws-tunnel"] = cisco_ios_xe_interfaces_cws_tunnel_;
    }

    if(cisco_ios_xe_interfaces_l2protocol_tunnel_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_l2protocol-tunnel"] = cisco_ios_xe_interfaces_l2protocol_tunnel_;
    }

    if(cisco_ios_xe_interfaces_encapsulation_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_encapsulation"] = cisco_ios_xe_interfaces_encapsulation_;
    }

    if(cisco_ios_xe_interfaces_fair_queue_conf_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue-conf"] = cisco_ios_xe_interfaces_fair_queue_conf_;
    }

    if(cisco_ios_xe_interfaces_fair_queue_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue"] = cisco_ios_xe_interfaces_fair_queue_;
    }

    if(cisco_ios_xe_interfaces_flowcontrol_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_flowcontrol"] = cisco_ios_xe_interfaces_flowcontrol_;
    }

    if(cisco_ios_xe_interfaces_isis_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_isis"] = cisco_ios_xe_interfaces_isis_;
    }

    if(keepalive_settings_ != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings_;
    }

    if(cisco_ios_xe_interfaces_bfd_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bfd"] = cisco_ios_xe_interfaces_bfd_;
    }

    if(cisco_ios_xe_interfaces_bandwidth_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bandwidth"] = cisco_ios_xe_interfaces_bandwidth_;
    }

    if(cisco_ios_xe_interfaces_dampening_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_dampening"] = cisco_ios_xe_interfaces_dampening_;
    }

    if(cisco_ios_xe_interfaces_domain_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_domain"] = cisco_ios_xe_interfaces_domain_;
    }

    for (auto const & c : cisco_ios_xe_interfaces_hold_queue_)
    {
        children[c->get_segment_path()] = c;
    }

    if(cisco_ios_xe_interfaces_mpls_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mpls"] = cisco_ios_xe_interfaces_mpls_;
    }

    if(ip_vrf_ != nullptr)
    {
        children["ip-vrf"] = ip_vrf_;
    }

    if(vrf_ != nullptr)
    {
        children["vrf"] = vrf_;
    }

    if(cisco_ios_xe_interfaces_ip_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ip"] = cisco_ios_xe_interfaces_ip_;
    }

    if(cisco_ios_xe_interfaces_ipv6_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ipv6"] = cisco_ios_xe_interfaces_ipv6_;
    }

    if(cisco_ios_xe_interfaces_logging_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_logging"] = cisco_ios_xe_interfaces_logging_;
    }

    if(cisco_ios_xe_interfaces_mdix_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mdix"] = cisco_ios_xe_interfaces_mdix_;
    }

    if(cisco_ios_xe_interfaces_mop_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mop"] = cisco_ios_xe_interfaces_mop_;
    }

    if(cisco_ios_xe_interfaces_interface_qos_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_interface_qos"] = cisco_ios_xe_interfaces_interface_qos_;
    }

    if(cisco_ios_xe_interfaces_standby_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_standby"] = cisco_ios_xe_interfaces_standby_;
    }

    if(cisco_ios_xe_interfaces_access_session_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_access-session"] = cisco_ios_xe_interfaces_access_session_;
    }

    if(cisco_ios_xe_interfaces_storm_control_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_storm-control"] = cisco_ios_xe_interfaces_storm_control_;
    }

    if(cisco_ios_xe_interfaces_trust_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_trust"] = cisco_ios_xe_interfaces_trust_;
    }

    if(cisco_ios_xe_interfaces_utd_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_utd"] = cisco_ios_xe_interfaces_utd_;
    }

    if(cisco_ios_xe_interfaces_priority_queue_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_priority-queue"] = cisco_ios_xe_interfaces_priority_queue_;
    }

    if(cisco_ios_xe_interfaces_rcv_queue_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_rcv-queue"] = cisco_ios_xe_interfaces_rcv_queue_;
    }

    if(cisco_ios_xe_interfaces_peer_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_peer"] = cisco_ios_xe_interfaces_peer_;
    }

    if(cisco_ios_xe_interfaces_pm_path_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_pm-path"] = cisco_ios_xe_interfaces_pm_path_;
    }

    if(zone_member != nullptr)
    {
        children["zone-member"] = zone_member;
    }

    return children;
}

void Native::Interface::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description = value;
        cisco_ios_xe_interfaces_description.value_namespace = name_space;
        cisco_ios_xe_interfaces_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address = value;
        cisco_ios_xe_interfaces_mac_address.value_namespace = name_space;
        cisco_ios_xe_interfaces_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown = value;
        cisco_ios_xe_interfaces_shutdown.value_namespace = name_space;
        cisco_ios_xe_interfaces_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state = value;
        cisco_ios_xe_interfaces_if_state.value_namespace = name_space;
        cisco_ios_xe_interfaces_if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay = value;
        cisco_ios_xe_interfaces_delay.value_namespace = name_space;
        cisco_ios_xe_interfaces_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval = value;
        cisco_ios_xe_interfaces_load_interval.value_namespace = name_space;
        cisco_ios_xe_interfaces_load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth = value;
        cisco_ios_xe_interfaces_max_reserved_bandwidth.value_namespace = name_space;
        cisco_ios_xe_interfaces_max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu = value;
        cisco_ios_xe_interfaces_mtu.value_namespace = name_space;
        cisco_ios_xe_interfaces_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion = value;
        cisco_ios_xe_interfaces_service_insertion.value_namespace = name_space;
        cisco_ios_xe_interfaces_service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description_ = value;
        cisco_ios_xe_interfaces_description_.value_namespace = name_space;
        cisco_ios_xe_interfaces_description_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address_ = value;
        cisco_ios_xe_interfaces_mac_address_.value_namespace = name_space;
        cisco_ios_xe_interfaces_mac_address_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown_ = value;
        cisco_ios_xe_interfaces_shutdown_.value_namespace = name_space;
        cisco_ios_xe_interfaces_shutdown_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive_ = value;
        keepalive_.value_namespace = name_space;
        keepalive_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state_ = value;
        cisco_ios_xe_interfaces_if_state_.value_namespace = name_space;
        cisco_ios_xe_interfaces_if_state_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay_ = value;
        cisco_ios_xe_interfaces_delay_.value_namespace = name_space;
        cisco_ios_xe_interfaces_delay_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval_ = value;
        cisco_ios_xe_interfaces_load_interval_.value_namespace = name_space;
        cisco_ios_xe_interfaces_load_interval_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth_ = value;
        cisco_ios_xe_interfaces_max_reserved_bandwidth_.value_namespace = name_space;
        cisco_ios_xe_interfaces_max_reserved_bandwidth_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu_ = value;
        cisco_ios_xe_interfaces_mtu_.value_namespace = name_space;
        cisco_ios_xe_interfaces_mtu_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion_ = value;
        cisco_ios_xe_interfaces_service_insertion_.value_namespace = name_space;
        cisco_ios_xe_interfaces_service_insertion_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown_.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cisco-IOS-XE-interfaces_switchport-conf" || name == "Cisco-IOS-XE-interfaces_switchport" || name == "Cisco-IOS-XE-interfaces_arp" || name == "Cisco-IOS-XE-interfaces_backup" || name == "Cisco-IOS-XE-interfaces_cemoudp" || name == "Cisco-IOS-XE-interfaces_cws-tunnel" || name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel" || name == "Cisco-IOS-XE-interfaces_encapsulation" || name == "Cisco-IOS-XE-interfaces_fair-queue-conf" || name == "Cisco-IOS-XE-interfaces_fair-queue" || name == "Cisco-IOS-XE-interfaces_flowcontrol" || name == "Cisco-IOS-XE-interfaces_isis" || name == "keepalive-settings" || name == "Cisco-IOS-XE-interfaces_bfd" || name == "Cisco-IOS-XE-interfaces_bandwidth" || name == "Cisco-IOS-XE-interfaces_dampening" || name == "Cisco-IOS-XE-interfaces_domain" || name == "Cisco-IOS-XE-interfaces_hold-queue" || name == "Cisco-IOS-XE-interfaces_mpls" || name == "ip-vrf" || name == "vrf" || name == "Cisco-IOS-XE-interfaces_ip" || name == "Cisco-IOS-XE-interfaces_ipv6" || name == "Cisco-IOS-XE-interfaces_logging" || name == "Cisco-IOS-XE-interfaces_mdix" || name == "Cisco-IOS-XE-interfaces_mop" || name == "Cisco-IOS-XE-interfaces_interface_qos" || name == "Cisco-IOS-XE-interfaces_standby" || name == "Cisco-IOS-XE-interfaces_access-session" || name == "Cisco-IOS-XE-interfaces_storm-control" || name == "Cisco-IOS-XE-interfaces_trust" || name == "Cisco-IOS-XE-interfaces_utd" || name == "Cisco-IOS-XE-interfaces_priority-queue" || name == "Cisco-IOS-XE-interfaces_rcv-queue" || name == "Cisco-IOS-XE-interfaces_peer" || name == "Cisco-IOS-XE-interfaces_pm-path" || name == "crypto" || name == "cts" || name == "service-policy" || name == "lisp" || name == "private-vlan" || name == "vrrp" || name == "service-routing" || name == "glbp" || name == "Cisco-IOS-XE-interfaces_switchport-conf" || name == "Cisco-IOS-XE-interfaces_switchport" || name == "Cisco-IOS-XE-interfaces_arp" || name == "Cisco-IOS-XE-interfaces_backup" || name == "Cisco-IOS-XE-interfaces_cemoudp" || name == "Cisco-IOS-XE-interfaces_cws-tunnel" || name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel" || name == "Cisco-IOS-XE-interfaces_encapsulation" || name == "Cisco-IOS-XE-interfaces_fair-queue-conf" || name == "Cisco-IOS-XE-interfaces_fair-queue" || name == "Cisco-IOS-XE-interfaces_flowcontrol" || name == "Cisco-IOS-XE-interfaces_isis" || name == "keepalive-settings" || name == "Cisco-IOS-XE-interfaces_bfd" || name == "Cisco-IOS-XE-interfaces_bandwidth" || name == "Cisco-IOS-XE-interfaces_dampening" || name == "Cisco-IOS-XE-interfaces_domain" || name == "Cisco-IOS-XE-interfaces_hold-queue" || name == "Cisco-IOS-XE-interfaces_mpls" || name == "ip-vrf" || name == "vrf" || name == "Cisco-IOS-XE-interfaces_ip" || name == "Cisco-IOS-XE-interfaces_ipv6" || name == "Cisco-IOS-XE-interfaces_logging" || name == "Cisco-IOS-XE-interfaces_mdix" || name == "Cisco-IOS-XE-interfaces_mop" || name == "Cisco-IOS-XE-interfaces_interface_qos" || name == "Cisco-IOS-XE-interfaces_standby" || name == "Cisco-IOS-XE-interfaces_access-session" || name == "Cisco-IOS-XE-interfaces_storm-control" || name == "Cisco-IOS-XE-interfaces_trust" || name == "Cisco-IOS-XE-interfaces_utd" || name == "Cisco-IOS-XE-interfaces_priority-queue" || name == "Cisco-IOS-XE-interfaces_rcv-queue" || name == "Cisco-IOS-XE-interfaces_peer" || name == "Cisco-IOS-XE-interfaces_pm-path" || name == "zone-member" || name == "name" || name == "Cisco-IOS-XE-interfaces_description" || name == "Cisco-IOS-XE-interfaces_mac-address" || name == "Cisco-IOS-XE-interfaces_shutdown" || name == "keepalive" || name == "Cisco-IOS-XE-interfaces_if-state" || name == "Cisco-IOS-XE-interfaces_delay" || name == "Cisco-IOS-XE-interfaces_load-interval" || name == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth" || name == "Cisco-IOS-XE-interfaces_mtu" || name == "Cisco-IOS-XE-interfaces_service-insertion" || name == "Cisco-IOS-XE-interfaces_description" || name == "Cisco-IOS-XE-interfaces_mac-address" || name == "Cisco-IOS-XE-interfaces_shutdown" || name == "keepalive" || name == "Cisco-IOS-XE-interfaces_if-state" || name == "Cisco-IOS-XE-interfaces_delay" || name == "Cisco-IOS-XE-interfaces_load-interval" || name == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth" || name == "Cisco-IOS-XE-interfaces_mtu" || name == "Cisco-IOS-XE-interfaces_service-insertion")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::CiscoIOSXEInterfacesSwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "Cisco-IOS-XE-interfaces_switchport-conf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::~CiscoIOSXEInterfacesSwitchportConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::CiscoIOSXEInterfacesSwitchport()
{

    yang_name = "Cisco-IOS-XE-interfaces_switchport"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::~CiscoIOSXEInterfacesSwitchport()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesArp::CiscoIOSXEInterfacesArp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "Cisco-IOS-XE-interfaces_arp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesArp::~CiscoIOSXEInterfacesArp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesArp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesArp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::CiscoIOSXEInterfacesBackup()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay>())
	,interface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_>())
	,load(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_backup"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::~CiscoIOSXEInterfacesBackup()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
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
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::~Interface_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
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
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
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
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
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
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::~Load()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::CiscoIOSXEInterfacesCemoudp()
    :
    reserve(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cemoudp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::~CiscoIOSXEInterfacesCemoudp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "Cisco-IOS-XE-interfaces_cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::CiscoIOSXEInterfacesCwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::~CiscoIOSXEInterfacesCwsTunnel()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::CiscoIOSXEInterfacesL2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::~CiscoIOSXEInterfacesL2ProtocolTunnel()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::CiscoIOSXEInterfacesEncapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q>())
	,isl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
	,frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_encapsulation"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::~CiscoIOSXEInterfacesEncapsulation()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::has_data() const
{
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::~Isl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::~Slip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::CiscoIOSXEInterfacesFairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "Cisco-IOS-XE-interfaces_fair-queue-conf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::~CiscoIOSXEInterfacesFairQueueConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::CiscoIOSXEInterfacesFairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "Cisco-IOS-XE-interfaces_fair-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::~CiscoIOSXEInterfacesFairQueue()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::CiscoIOSXEInterfacesFlowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "Cisco-IOS-XE-interfaces_flowcontrol"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::~CiscoIOSXEInterfacesFlowcontrol()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CiscoIOSXEInterfacesIsis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
    	,
    adjacency_filter(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter>())
	,advertise(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication>())
	,circuit_type(nullptr) // presence node
	,csnp_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval>())
	,hello(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval>())
	,hello_multiplier(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier>())
	,ipv6(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6>())
	,metric(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric>())
	,password(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password>())
	,priority(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority>())
	,three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;
    advertise->parent = this;
    authentication->parent = this;
    csnp_interval->parent = this;
    hello->parent = this;
    hello_interval->parent = this;
    hello_multiplier->parent = this;
    ipv6->parent = this;
    metric->parent = this;
    password->parent = this;
    priority->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_isis"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::~CiscoIOSXEInterfacesIsis()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::has_data() const
{
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_interval.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(retransmit_throttle_interval.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.yfilter)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.yfilter)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password>();
        }
        return password;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_filter != nullptr)
    {
        children["adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        children["circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        children["csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        children["hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(three_way_handshake != nullptr)
    {
        children["three-way-handshake"] = three_way_handshake;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval = value;
        lsp_interval.value_namespace = name_space;
        lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
        retransmit_throttle_interval.value_namespace = name_space;
        retransmit_throttle_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-filter" || name == "advertise" || name == "authentication" || name == "circuit-type" || name == "csnp-interval" || name == "hello" || name == "hello-interval" || name == "hello-multiplier" || name == "ipv6" || name == "metric" || name == "password" || name == "priority" || name == "three-way-handshake" || name == "lsp-interval" || name == "mesh-group" || name == "network" || name == "protocol" || name == "retransmit-interval" || name == "retransmit-throttle-interval" || name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::AdjacencyFilter()
    :
    name{YType::str, "name"},
    match_all{YType::empty, "match-all"}
{

    yang_name = "adjacency-filter"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::has_data() const
{
    return name.is_set
	|| match_all.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_all.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_all.is_set || is_set(match_all.yfilter)) leaf_name_data.push_back(match_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-all")
    {
        match_all = value;
        match_all.value_namespace = name_space;
        match_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-all")
    {
        match_all.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-all")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{

    yang_name = "advertise"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::~Advertise()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::has_data() const
{
    return prefix.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Authentication()
    :
    mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode>())
	,key_chain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain>())
	,send_only(nullptr) // presence node
{
    mode->parent = this;
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::has_data() const
{
    return (mode !=  nullptr && mode->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain" || name == "send-only")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "circuit-type"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::~CircuitType()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::has_data() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        for(auto const & c : csnp_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList>();
        c->parent = this;
        csnp_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csnp_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::~Hello()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::~Padding()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
{

    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::has_data() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        for(auto const & c : hello_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList>();
        c->parent = this;
        hello_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        for(auto const & c : hello_multiplier_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList>();
        c->parent = this;
        hello_multiplier_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_multiplier_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
    	,
    metric(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric>())
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::~Ipv6()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::has_data() const
{
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::Metric()
    :
    value_{YType::str, "value"}
{

    yang_name = "metric"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::~Metric()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::Password()
    :
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::~Password()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::has_data() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        for(auto const & c : password_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList>();
        c->parent = this;
        password_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-list" || name == "password")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{

    yang_name = "password-list"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::has_data() const
{
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "password")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "priority"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::~Priority()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::has_data() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        for(auto const & c : priority_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList>();
        c->parent = this;
        priority_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{

    yang_name = "priority-list"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{

    yang_name = "three-way-handshake"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::has_data() const
{
    return implementor.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implementor.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.yfilter)) leaf_name_data.push_back(implementor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implementor")
    {
        implementor = value;
        implementor.value_namespace = name_space;
        implementor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implementor")
    {
        implementor.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "implementor")
        return true;
    return false;
}

Native::Interface::Vlan::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Vlan::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Vlan::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Vlan::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Vlan::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Vlan::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::Vlan::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Vlan::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Vlan::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::CiscoIOSXEInterfacesBfd()
{

    yang_name = "Cisco-IOS-XE-interfaces_bfd"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::~CiscoIOSXEInterfacesBfd()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::CiscoIOSXEInterfacesBandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
    	,
    receive(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive>())
	,inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_bandwidth"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::~CiscoIOSXEInterfacesBandwidth()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::has_data() const
{
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::~Receive()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::CiscoIOSXEInterfacesDampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart>())
{
    restart->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_dampening"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::~CiscoIOSXEInterfacesDampening()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::has_data() const
{
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "Cisco-IOS-XE-interfaces_dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::~Restart()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::CiscoIOSXEInterfacesDomain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "Cisco-IOS-XE-interfaces_domain"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::~CiscoIOSXEInterfacesDomain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::has_data() const
{
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::CiscoIOSXEInterfacesHoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "Cisco-IOS-XE-interfaces_hold-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::~CiscoIOSXEInterfacesHoldQueue()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::CiscoIOSXEInterfacesMpls()
{

    yang_name = "Cisco-IOS-XE-interfaces_mpls"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::~CiscoIOSXEInterfacesMpls()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Vlan::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf::~IpVrf()
{
}

bool Native::Interface::Vlan::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vlan::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vlan::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Vlan::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::Vlan::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vlan::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vlan::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vlan::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vlan::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vlan::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vlan::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vlan::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::CiscoIOSXEInterfacesIp()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"}
    	,
    access_group(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup>())
	,arp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp>())
	,vrf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf>())
	,no_address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress>())
	,address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime>())
	,pim(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim>())
	,policy(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy>())
	,rip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip>())
	,route_cache_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf>())
	,route_cache(nullptr) // presence node
	,router(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router>())
	,tcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp>())
	,virtual_reassembly(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly>())
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp>())
	,summary_address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress>())
	,verify(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify>())
	,nbar(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    no_address->parent = this;
    address->parent = this;
    hello_interval->parent = this;
    authentication->parent = this;
    hold_time->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    tcp->parent = this;
    virtual_reassembly->parent = this;
    dhcp->parent = this;
    summary_address->parent = this;
    verify->parent = this;
    nbar->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ip"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::~CiscoIOSXEInterfacesIp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (nbar !=  nullptr && nbar->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address>();
        }
        return address;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar>();
        }
        return nbar;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "no-address" || name == "address" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "nbar" || name == "admission" || name == "unnumbered" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl>())
	,acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::~In()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl>())
	,acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::~Arp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::~NoAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    primary(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary>())
	,dhcp(nullptr) // presence node
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary" || name == "dhcp" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::~Primary()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "GigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "FortyGigabitEthernet" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::Pim()
    :
    sparse_mode{YType::enumeration, "Cisco-IOS-XE-multicast:sparse-mode"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
    	,
    accept_register(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister>())
	,query_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval>())
{
    accept_register->parent = this;
    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::~Pim()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::has_data() const
{
    return sparse_mode.is_set
	|| nbma_mode.is_set
	|| dr_priority.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sparse_mode.yfilter)
	|| ydk::is_set(nbma_mode.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(spt_threshold.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sparse_mode.is_set || is_set(sparse_mode.yfilter)) leaf_name_data.push_back(sparse_mode.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.yfilter)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.yfilter)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(query_interval != nullptr)
    {
        children["query-interval"] = query_interval;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sparse-mode")
    {
        sparse_mode = value;
        sparse_mode.value_namespace = name_space;
        sparse_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode = value;
        nbma_mode.value_namespace = name_space;
        nbma_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold = value;
        spt_threshold.value_namespace = name_space;
        spt_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sparse-mode")
    {
        sparse_mode.yfilter = yfilter;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "query-interval" || name == "sparse-mode" || name == "nbma-mode" || name == "dr-priority" || name == "spt-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::QueryInterval()
    :
    seconds_interval{YType::uint16, "seconds-interval"},
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"}
{

    yang_name = "query-interval"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::has_data() const
{
    return seconds_interval.is_set
	|| milliseconds_interval.is_set
	|| msec.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds_interval.yfilter)
	|| ydk::is_set(milliseconds_interval.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_interval.is_set || is_set(seconds_interval.yfilter)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());
    if (milliseconds_interval.is_set || is_set(milliseconds_interval.yfilter)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
        seconds_interval.value_namespace = name_space;
        seconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
        milliseconds_interval.value_namespace = name_space;
        milliseconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds-interval")
    {
        seconds_interval.yfilter = yfilter;
    }
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds-interval" || name == "milliseconds-interval" || name == "msec")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::~Policy()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::~Rip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::~RouteCache()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
        same_interface.value_namespace = name_space;
        same_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "same-interface")
    {
        same_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::~Router()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::~Isis()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::~Tcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::VirtualReassembly()
    :
    max_reassemblies{YType::uint32, "max-reassemblies"},
    max_fragments{YType::uint32, "max-fragments"},
    timeout{YType::uint32, "timeout"},
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::has_data() const
{
    return max_reassemblies.is_set
	|| max_fragments.is_set
	|| timeout.is_set
	|| drop_fragments.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
        max_reassemblies.value_namespace = name_space;
        max_reassemblies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
        max_fragments.value_namespace = name_space;
        max_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
        drop_fragments.value_namespace = name_space;
        drop_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-reassemblies")
    {
        max_reassemblies.yfilter = yfilter;
    }
    if(value_path == "max-fragments")
    {
        max_fragments.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "drop-fragments")
    {
        drop_fragments.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reassemblies" || name == "max-fragments" || name == "timeout" || name == "drop-fragments" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping>())
{
    client->parent = this;
    relay->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "relay" || name == "snooping")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::~Client()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "source-interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_action.yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.yfilter)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check_reply != nullptr)
    {
        children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        children["option-insert"] = option_insert;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
        policy_action.value_namespace = name_space;
        policy_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-action")
    {
        policy_action.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check-reply" || name == "option" || name == "option-insert" || name == "policy-action" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{

    yang_name = "check-reply"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{

    yang_name = "option-insert"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Cellular::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Cellular::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Cellular::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Cellular::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vlan::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vlan::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vlan::IfState_::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vlan::ServiceInsertion_::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Network::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Protocol::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::Implementor::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::Implementor::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SparseMode::sparse_dense_mode {0, "sparse-dense-mode"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SparseMode::sparse_mode {1, "sparse-mode"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SptThreshold::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::replace {3, "replace"};


}
}

