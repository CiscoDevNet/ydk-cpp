
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_54.hpp"
#include "Cisco_IOS_XE_native_55.hpp"
#include "Cisco_IOS_XE_native_56.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Cellular::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;

    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list";
}

Native::Interface::Cellular::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(operation)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Cellular::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Standby::StandbyList::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::Cellular::Standby::StandbyList::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "timers";
}

Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "timers";
}

Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Cellular::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "track"; yang_parent_name = "standby-list";
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
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(decrement.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Interface::Cellular::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Standby::StandbyList::Track::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.operation)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Standby::StandbyList::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "decrement")
    {
        decrement = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::Cellular::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Cellular::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "Cellular";
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
    return is_set(operation)
	|| is_set(closed.operation)
	|| is_set(host_mode.operation)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Cellular::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::AccessSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessSession' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.operation)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::AccessSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "closed")
    {
        closed = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
}

Native::Interface::Cellular::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{
    yang_name = "port-control"; yang_parent_name = "access-session";
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
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::Cellular::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::AccessSession::PortControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::AccessSession::PortControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
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

    yang_name = "storm-control"; yang_parent_name = "Cellular";
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
    return is_set(operation)
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

const EntityPath Native::Interface::Cellular::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Interface::Cellular::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Action::get_entity_path(Entity* ancestor) const
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

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Interface::Cellular::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Cellular::StormControl::Broadcast::Level>())
{
    include->parent = this;

    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{
    yang_name = "include"; yang_parent_name = "broadcast";
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
    return is_set(operation)
	|| is_set(multicast.operation);
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Broadcast::Include::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Include' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Broadcast::Include::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast")
    {
        multicast = value;
    }
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

    yang_name = "level"; yang_parent_name = "broadcast";
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
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
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

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Cellular::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Multicast::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "level"; yang_parent_name = "multicast";
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
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Multicast::Level::get_entity_path(Entity* ancestor) const
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

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Multicast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Multicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Multicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;

    pps->parent = this;

    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast";
}

Native::Interface::Cellular::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::has_operation() const
{
    return is_set(operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Unicast::Level::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Cellular::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Cellular::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Cellular::StormControl::Unicast::Level::get_children() const
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

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Cellular::StormControl::Unicast::Level::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "threshold"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::get_entity_path(Entity* ancestor) const
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

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Unicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Cellular::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Cellular::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Cellular::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::StormControl::Unicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Cellular::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{
    yang_name = "trust"; yang_parent_name = "Cellular";
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
    return is_set(operation)
	|| is_set(device.operation);
}

std::string Native::Interface::Cellular::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
}

Native::Interface::Cellular::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "utd"; yang_parent_name = "Cellular";
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
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Interface::Cellular::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Utd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Utd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Utd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::Cellular::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Cellular::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "Cellular";
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
    return is_set(operation)
	|| is_set(out.operation)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Cellular::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::PriorityQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::PriorityQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Cellular::PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{
    yang_name = "cos-map"; yang_parent_name = "priority-queue";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos_values.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Cellular::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::PriorityQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::PriorityQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Cellular::RcvQueue::RcvQueue()
{
    yang_name = "rcv-queue"; yang_parent_name = "Cellular";
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
    return is_set(operation);
}

std::string Native::Interface::Cellular::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::RcvQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RcvQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::RcvQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{
    yang_name = "cos-map"; yang_parent_name = "rcv-queue";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(threshold_id.operation)
	|| is_set(cos_values.operation);
}

std::string Native::Interface::Cellular::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::RcvQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.operation)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::RcvQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

Native::Interface::Cellular::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::Cellular::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "Cellular";
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
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Cellular::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer";
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
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Cellular::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Peer::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Peer::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Cellular::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default";
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
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Peer::Default_::Ip::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Peer::Default_::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ip";
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
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Peer::Default_::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Peer::Default_::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "dhcp-pool"; yang_parent_name = "address";
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
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpPool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "pool"; yang_parent_name = "address";
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
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::Cellular::PmPath::PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{
    yang_name = "pm-path"; yang_parent_name = "Cellular";
}

Native::Interface::Cellular::PmPath::~PmPath()
{
}

bool Native::Interface::Cellular::PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::Cellular::PmPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Cellular::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::Cellular::PmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Cellular::PmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::Vlan()
    :
    name{YType::uint16, "name"},
    cisco_ios_xe_interfaces_delay{YType::uint32, "Cisco-IOS-XE-interfaces_delay"},
    cisco_ios_xe_interfaces_delay_{YType::uint32, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_delay"},
    cisco_ios_xe_interfaces_description{YType::str, "Cisco-IOS-XE-interfaces_description"},
    cisco_ios_xe_interfaces_description_{YType::str, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_description"},
    cisco_ios_xe_interfaces_if_state{YType::enumeration, "Cisco-IOS-XE-interfaces_if-state"},
    cisco_ios_xe_interfaces_if_state_{YType::enumeration, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_if-state"},
    cisco_ios_xe_interfaces_load_interval{YType::uint16, "Cisco-IOS-XE-interfaces_load-interval"},
    cisco_ios_xe_interfaces_load_interval_{YType::uint16, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_load-interval"},
    cisco_ios_xe_interfaces_max_reserved_bandwidth{YType::uint8, "Cisco-IOS-XE-interfaces_max-reserved-bandwidth"},
    cisco_ios_xe_interfaces_max_reserved_bandwidth_{YType::uint8, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_max-reserved-bandwidth"},
    cisco_ios_xe_interfaces_mtu{YType::uint16, "Cisco-IOS-XE-interfaces_mtu"},
    cisco_ios_xe_interfaces_mtu_{YType::uint16, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mtu"},
    cisco_ios_xe_interfaces_service_insertion{YType::enumeration, "Cisco-IOS-XE-interfaces_service-insertion"},
    cisco_ios_xe_interfaces_service_insertion_{YType::enumeration, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_service-insertion"},
    cisco_ios_xe_interfaces_shutdown{YType::empty, "Cisco-IOS-XE-interfaces_shutdown"},
    cisco_ios_xe_interfaces_shutdown_{YType::empty, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_shutdown"},
    keepalive{YType::boolean, "keepalive"},
    keepalive_{YType::boolean, "Cisco-IOS-XE-vlan:keepalive"}
    	,
    cisco_ios_xe_interfaces_access_session(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession>())
	,cisco_ios_xe_interfaces_access_session(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession>())
	,cisco_ios_xe_interfaces_arp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Arp>())
	,cisco_ios_xe_interfaces_arp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Arp>())
	,cisco_ios_xe_interfaces_backup(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup>())
	,cisco_ios_xe_interfaces_backup(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup>())
	,cisco_ios_xe_interfaces_bandwidth(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth>())
	,cisco_ios_xe_interfaces_bandwidth(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth>())
	,cisco_ios_xe_interfaces_bfd(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd>())
	,cisco_ios_xe_interfaces_bfd(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd>())
	,cisco_ios_xe_interfaces_cemoudp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp>())
	,cisco_ios_xe_interfaces_cemoudp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp>())
	,cisco_ios_xe_interfaces_cws_tunnel(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel>())
	,cisco_ios_xe_interfaces_cws_tunnel(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel>())
	,cisco_ios_xe_interfaces_dampening(nullptr) // presence node
	,cisco_ios_xe_interfaces_dampening(nullptr) // presence node
	,cisco_ios_xe_interfaces_domain(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Domain>())
	,cisco_ios_xe_interfaces_domain(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Domain>())
	,cisco_ios_xe_interfaces_encapsulation(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation>())
	,cisco_ios_xe_interfaces_encapsulation(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation>())
	,cisco_ios_xe_interfaces_fair_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue>())
	,cisco_ios_xe_interfaces_fair_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue>())
	,cisco_ios_xe_interfaces_fair_queue_conf(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf>())
	,cisco_ios_xe_interfaces_fair_queue_conf(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf>())
	,cisco_ios_xe_interfaces_flowcontrol(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol>())
	,cisco_ios_xe_interfaces_flowcontrol(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol>())
	,cisco_ios_xe_interfaces_hold_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue>())
	,cisco_ios_xe_interfaces_hold_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue>())
	,cisco_ios_xe_interfaces_interface_qos(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos>())
	,cisco_ios_xe_interfaces_interface_qos(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos>())
	,cisco_ios_xe_interfaces_ip(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip>())
	,cisco_ios_xe_interfaces_ip(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip>())
	,cisco_ios_xe_interfaces_ipv6(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6>())
	,cisco_ios_xe_interfaces_ipv6(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6>())
	,cisco_ios_xe_interfaces_isis(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis>())
	,cisco_ios_xe_interfaces_isis(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis>())
	,cisco_ios_xe_interfaces_l2protocol_tunnel(nullptr) // presence node
	,cisco_ios_xe_interfaces_l2protocol_tunnel(nullptr) // presence node
	,cisco_ios_xe_interfaces_logging(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging>())
	,cisco_ios_xe_interfaces_logging(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging>())
	,cisco_ios_xe_interfaces_mdix(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix>())
	,cisco_ios_xe_interfaces_mdix(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix>())
	,cisco_ios_xe_interfaces_mop(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mop>())
	,cisco_ios_xe_interfaces_mop(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mop>())
	,cisco_ios_xe_interfaces_mpls(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls>())
	,cisco_ios_xe_interfaces_mpls(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls>())
	,cisco_ios_xe_interfaces_peer(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer>())
	,cisco_ios_xe_interfaces_peer(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer>())
	,cisco_ios_xe_interfaces_pm_path(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath>())
	,cisco_ios_xe_interfaces_pm_path(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath>())
	,cisco_ios_xe_interfaces_priority_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue>())
	,cisco_ios_xe_interfaces_priority_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue>())
	,cisco_ios_xe_interfaces_rcv_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue>())
	,cisco_ios_xe_interfaces_rcv_queue(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue>())
	,cisco_ios_xe_interfaces_standby(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby>())
	,cisco_ios_xe_interfaces_standby(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby>())
	,cisco_ios_xe_interfaces_storm_control(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl>())
	,cisco_ios_xe_interfaces_storm_control(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl>())
	,cisco_ios_xe_interfaces_switchport(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport>())
	,cisco_ios_xe_interfaces_switchport(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport>())
	,cisco_ios_xe_interfaces_switchport_conf(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf>())
	,cisco_ios_xe_interfaces_switchport_conf(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf>())
	,cisco_ios_xe_interfaces_trust(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Trust>())
	,cisco_ios_xe_interfaces_trust(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Trust>())
	,cisco_ios_xe_interfaces_utd(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Utd>())
	,cisco_ios_xe_interfaces_utd(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Utd>())
	,crypto(std::make_shared<Native::Interface::Vlan::Crypto>())
	,cts(std::make_shared<Native::Interface::Vlan::Cts>())
	,glbp(std::make_shared<Native::Interface::Vlan::Glbp>())
	,ip_vrf(std::make_shared<Native::Interface::Vlan::IpVrf>())
	,ip_vrf(std::make_shared<Native::Interface::Vlan::IpVrf>())
	,keepalive_settings(std::make_shared<Native::Interface::Vlan::KeepaliveSettings>())
	,keepalive_settings(std::make_shared<Native::Interface::Vlan::KeepaliveSettings>())
	,lisp(std::make_shared<Native::Interface::Vlan::Lisp>())
	,private_vlan(std::make_shared<Native::Interface::Vlan::PrivateVlan>())
	,service_policy(std::make_shared<Native::Interface::Vlan::ServicePolicy>())
	,vrf(std::make_shared<Native::Interface::Vlan::Vrf>())
	,vrf(std::make_shared<Native::Interface::Vlan::Vrf>())
	,zone_member(std::make_shared<Native::Interface::Vlan::ZoneMember>())
{
    cisco_ios_xe_interfaces_access_session->parent = this;

    cisco_ios_xe_interfaces_access_session->parent = this;

    cisco_ios_xe_interfaces_arp->parent = this;

    cisco_ios_xe_interfaces_arp->parent = this;

    cisco_ios_xe_interfaces_backup->parent = this;

    cisco_ios_xe_interfaces_backup->parent = this;

    cisco_ios_xe_interfaces_bandwidth->parent = this;

    cisco_ios_xe_interfaces_bandwidth->parent = this;

    cisco_ios_xe_interfaces_bfd->parent = this;

    cisco_ios_xe_interfaces_bfd->parent = this;

    cisco_ios_xe_interfaces_cemoudp->parent = this;

    cisco_ios_xe_interfaces_cemoudp->parent = this;

    cisco_ios_xe_interfaces_cws_tunnel->parent = this;

    cisco_ios_xe_interfaces_cws_tunnel->parent = this;

    cisco_ios_xe_interfaces_domain->parent = this;

    cisco_ios_xe_interfaces_domain->parent = this;

    cisco_ios_xe_interfaces_encapsulation->parent = this;

    cisco_ios_xe_interfaces_encapsulation->parent = this;

    cisco_ios_xe_interfaces_fair_queue->parent = this;

    cisco_ios_xe_interfaces_fair_queue->parent = this;

    cisco_ios_xe_interfaces_fair_queue_conf->parent = this;

    cisco_ios_xe_interfaces_fair_queue_conf->parent = this;

    cisco_ios_xe_interfaces_flowcontrol->parent = this;

    cisco_ios_xe_interfaces_flowcontrol->parent = this;

    cisco_ios_xe_interfaces_hold_queue->parent = this;

    cisco_ios_xe_interfaces_hold_queue->parent = this;

    cisco_ios_xe_interfaces_interface_qos->parent = this;

    cisco_ios_xe_interfaces_interface_qos->parent = this;

    cisco_ios_xe_interfaces_ip->parent = this;

    cisco_ios_xe_interfaces_ip->parent = this;

    cisco_ios_xe_interfaces_ipv6->parent = this;

    cisco_ios_xe_interfaces_ipv6->parent = this;

    cisco_ios_xe_interfaces_isis->parent = this;

    cisco_ios_xe_interfaces_isis->parent = this;

    cisco_ios_xe_interfaces_logging->parent = this;

    cisco_ios_xe_interfaces_logging->parent = this;

    cisco_ios_xe_interfaces_mdix->parent = this;

    cisco_ios_xe_interfaces_mdix->parent = this;

    cisco_ios_xe_interfaces_mop->parent = this;

    cisco_ios_xe_interfaces_mop->parent = this;

    cisco_ios_xe_interfaces_mpls->parent = this;

    cisco_ios_xe_interfaces_mpls->parent = this;

    cisco_ios_xe_interfaces_peer->parent = this;

    cisco_ios_xe_interfaces_peer->parent = this;

    cisco_ios_xe_interfaces_pm_path->parent = this;

    cisco_ios_xe_interfaces_pm_path->parent = this;

    cisco_ios_xe_interfaces_priority_queue->parent = this;

    cisco_ios_xe_interfaces_priority_queue->parent = this;

    cisco_ios_xe_interfaces_rcv_queue->parent = this;

    cisco_ios_xe_interfaces_rcv_queue->parent = this;

    cisco_ios_xe_interfaces_standby->parent = this;

    cisco_ios_xe_interfaces_standby->parent = this;

    cisco_ios_xe_interfaces_storm_control->parent = this;

    cisco_ios_xe_interfaces_storm_control->parent = this;

    cisco_ios_xe_interfaces_switchport->parent = this;

    cisco_ios_xe_interfaces_switchport->parent = this;

    cisco_ios_xe_interfaces_switchport_conf->parent = this;

    cisco_ios_xe_interfaces_switchport_conf->parent = this;

    cisco_ios_xe_interfaces_trust->parent = this;

    cisco_ios_xe_interfaces_trust->parent = this;

    cisco_ios_xe_interfaces_utd->parent = this;

    cisco_ios_xe_interfaces_utd->parent = this;

    crypto->parent = this;

    cts->parent = this;

    glbp->parent = this;

    ip_vrf->parent = this;

    ip_vrf->parent = this;

    keepalive_settings->parent = this;

    keepalive_settings->parent = this;

    lisp->parent = this;

    private_vlan->parent = this;

    service_policy->parent = this;

    vrf->parent = this;

    vrf->parent = this;

    zone_member->parent = this;

    yang_name = "Vlan"; yang_parent_name = "interface";
}

Native::Interface::Vlan::~Vlan()
{
}

bool Native::Interface::Vlan::has_data() const
{
    for (std::size_t index=0; index<vrrp.size(); index++)
    {
        if(vrrp[index]->has_data())
            return true;
    }
    return name.is_set
	|| cisco_ios_xe_interfaces_delay.is_set
	|| cisco_ios_xe_interfaces_delay_.is_set
	|| cisco_ios_xe_interfaces_description.is_set
	|| cisco_ios_xe_interfaces_description_.is_set
	|| cisco_ios_xe_interfaces_if_state.is_set
	|| cisco_ios_xe_interfaces_if_state_.is_set
	|| cisco_ios_xe_interfaces_load_interval.is_set
	|| cisco_ios_xe_interfaces_load_interval_.is_set
	|| cisco_ios_xe_interfaces_max_reserved_bandwidth.is_set
	|| cisco_ios_xe_interfaces_max_reserved_bandwidth_.is_set
	|| cisco_ios_xe_interfaces_mtu.is_set
	|| cisco_ios_xe_interfaces_mtu_.is_set
	|| cisco_ios_xe_interfaces_service_insertion.is_set
	|| cisco_ios_xe_interfaces_service_insertion_.is_set
	|| cisco_ios_xe_interfaces_shutdown.is_set
	|| cisco_ios_xe_interfaces_shutdown_.is_set
	|| keepalive.is_set
	|| keepalive_.is_set
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_data())
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_data())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_data())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_data())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_data())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_data())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_data())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_data())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_data())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_data())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_data())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_data())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_data())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_data())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_data())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_data())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_data())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_data())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_data())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_data())
	|| (cisco_ios_xe_interfaces_hold_queue !=  nullptr && cisco_ios_xe_interfaces_hold_queue->has_data())
	|| (cisco_ios_xe_interfaces_hold_queue !=  nullptr && cisco_ios_xe_interfaces_hold_queue->has_data())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_data())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_data())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_data())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_data())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_data())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_data())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_data())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_data())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_data())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_data())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_data())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_data())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_data())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_data())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_data())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_data())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_data())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_data())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_data())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_data())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_data())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_data())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_data())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_data())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_data())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_data())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_data())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_data())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_data())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_data())
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_data())
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_data())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_data())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_data())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_data())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (glbp !=  nullptr && glbp->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vrrp.size(); index++)
    {
        if(vrrp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(cisco_ios_xe_interfaces_delay.operation)
	|| is_set(cisco_ios_xe_interfaces_delay_.operation)
	|| is_set(cisco_ios_xe_interfaces_description.operation)
	|| is_set(cisco_ios_xe_interfaces_description_.operation)
	|| is_set(cisco_ios_xe_interfaces_if_state.operation)
	|| is_set(cisco_ios_xe_interfaces_if_state_.operation)
	|| is_set(cisco_ios_xe_interfaces_load_interval.operation)
	|| is_set(cisco_ios_xe_interfaces_load_interval_.operation)
	|| is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth.operation)
	|| is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth_.operation)
	|| is_set(cisco_ios_xe_interfaces_mtu.operation)
	|| is_set(cisco_ios_xe_interfaces_mtu_.operation)
	|| is_set(cisco_ios_xe_interfaces_service_insertion.operation)
	|| is_set(cisco_ios_xe_interfaces_service_insertion_.operation)
	|| is_set(cisco_ios_xe_interfaces_shutdown.operation)
	|| is_set(cisco_ios_xe_interfaces_shutdown_.operation)
	|| is_set(keepalive.operation)
	|| is_set(keepalive_.operation)
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_operation())
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_operation())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_operation())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_operation())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_operation())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_operation())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_operation())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_operation())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_operation())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_operation())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_operation())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_operation())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_operation())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_operation())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_operation())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_operation())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_operation())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_operation())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_operation())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_operation())
	|| (cisco_ios_xe_interfaces_hold_queue !=  nullptr && cisco_ios_xe_interfaces_hold_queue->has_operation())
	|| (cisco_ios_xe_interfaces_hold_queue !=  nullptr && cisco_ios_xe_interfaces_hold_queue->has_operation())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_operation())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_operation())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_operation())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_operation())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_operation())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_operation())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_operation())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_operation())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_operation())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_operation())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_operation())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_operation())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_operation())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_operation())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_operation())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_operation())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_operation())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_operation())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_operation())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_operation())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_operation())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_operation())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_operation())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_operation())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_operation())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_operation())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_operation())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_operation())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_operation())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_operation())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_operation())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_operation())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_operation())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (glbp !=  nullptr && glbp->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cisco_ios_xe_interfaces_delay.is_set || is_set(cisco_ios_xe_interfaces_delay.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_delay.get_name_leafdata());
    if (cisco_ios_xe_interfaces_delay_.is_set || is_set(cisco_ios_xe_interfaces_delay_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_delay_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_description.is_set || is_set(cisco_ios_xe_interfaces_description.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_description.get_name_leafdata());
    if (cisco_ios_xe_interfaces_description_.is_set || is_set(cisco_ios_xe_interfaces_description_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_description_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_if_state.is_set || is_set(cisco_ios_xe_interfaces_if_state.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_if_state.get_name_leafdata());
    if (cisco_ios_xe_interfaces_if_state_.is_set || is_set(cisco_ios_xe_interfaces_if_state_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_if_state_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_load_interval.is_set || is_set(cisco_ios_xe_interfaces_load_interval.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_load_interval.get_name_leafdata());
    if (cisco_ios_xe_interfaces_load_interval_.is_set || is_set(cisco_ios_xe_interfaces_load_interval_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_load_interval_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_max_reserved_bandwidth.is_set || is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_max_reserved_bandwidth.get_name_leafdata());
    if (cisco_ios_xe_interfaces_max_reserved_bandwidth_.is_set || is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_max_reserved_bandwidth_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mtu.is_set || is_set(cisco_ios_xe_interfaces_mtu.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mtu.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mtu_.is_set || is_set(cisco_ios_xe_interfaces_mtu_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mtu_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_service_insertion.is_set || is_set(cisco_ios_xe_interfaces_service_insertion.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_service_insertion.get_name_leafdata());
    if (cisco_ios_xe_interfaces_service_insertion_.is_set || is_set(cisco_ios_xe_interfaces_service_insertion_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_service_insertion_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_shutdown.is_set || is_set(cisco_ios_xe_interfaces_shutdown.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_shutdown.get_name_leafdata());
    if (cisco_ios_xe_interfaces_shutdown_.is_set || is_set(cisco_ios_xe_interfaces_shutdown_.operation)) leaf_name_data.push_back(cisco_ios_xe_interfaces_shutdown_.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (keepalive_.is_set || is_set(keepalive_.operation)) leaf_name_data.push_back(keepalive_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-interfaces_access-session")
    {
        if(cisco_ios_xe_interfaces_access_session == nullptr)
        {
            cisco_ios_xe_interfaces_access_session = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession>();
        }
        return cisco_ios_xe_interfaces_access_session;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_access-session")
    {
        if(cisco_ios_xe_interfaces_access_session == nullptr)
        {
            cisco_ios_xe_interfaces_access_session = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession>();
        }
        return cisco_ios_xe_interfaces_access_session;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_arp")
    {
        if(cisco_ios_xe_interfaces_arp == nullptr)
        {
            cisco_ios_xe_interfaces_arp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Arp>();
        }
        return cisco_ios_xe_interfaces_arp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_arp")
    {
        if(cisco_ios_xe_interfaces_arp == nullptr)
        {
            cisco_ios_xe_interfaces_arp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Arp>();
        }
        return cisco_ios_xe_interfaces_arp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_backup")
    {
        if(cisco_ios_xe_interfaces_backup == nullptr)
        {
            cisco_ios_xe_interfaces_backup = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup>();
        }
        return cisco_ios_xe_interfaces_backup;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_backup")
    {
        if(cisco_ios_xe_interfaces_backup == nullptr)
        {
            cisco_ios_xe_interfaces_backup = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup>();
        }
        return cisco_ios_xe_interfaces_backup;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bandwidth")
    {
        if(cisco_ios_xe_interfaces_bandwidth == nullptr)
        {
            cisco_ios_xe_interfaces_bandwidth = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth>();
        }
        return cisco_ios_xe_interfaces_bandwidth;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bandwidth")
    {
        if(cisco_ios_xe_interfaces_bandwidth == nullptr)
        {
            cisco_ios_xe_interfaces_bandwidth = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth>();
        }
        return cisco_ios_xe_interfaces_bandwidth;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bfd")
    {
        if(cisco_ios_xe_interfaces_bfd == nullptr)
        {
            cisco_ios_xe_interfaces_bfd = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd>();
        }
        return cisco_ios_xe_interfaces_bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bfd")
    {
        if(cisco_ios_xe_interfaces_bfd == nullptr)
        {
            cisco_ios_xe_interfaces_bfd = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd>();
        }
        return cisco_ios_xe_interfaces_bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cemoudp")
    {
        if(cisco_ios_xe_interfaces_cemoudp == nullptr)
        {
            cisco_ios_xe_interfaces_cemoudp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp>();
        }
        return cisco_ios_xe_interfaces_cemoudp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cemoudp")
    {
        if(cisco_ios_xe_interfaces_cemoudp == nullptr)
        {
            cisco_ios_xe_interfaces_cemoudp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp>();
        }
        return cisco_ios_xe_interfaces_cemoudp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cws-tunnel")
    {
        if(cisco_ios_xe_interfaces_cws_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_cws_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel>();
        }
        return cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cws-tunnel")
    {
        if(cisco_ios_xe_interfaces_cws_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_cws_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel>();
        }
        return cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_dampening")
    {
        if(cisco_ios_xe_interfaces_dampening == nullptr)
        {
            cisco_ios_xe_interfaces_dampening = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening>();
        }
        return cisco_ios_xe_interfaces_dampening;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_dampening")
    {
        if(cisco_ios_xe_interfaces_dampening == nullptr)
        {
            cisco_ios_xe_interfaces_dampening = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening>();
        }
        return cisco_ios_xe_interfaces_dampening;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_domain")
    {
        if(cisco_ios_xe_interfaces_domain == nullptr)
        {
            cisco_ios_xe_interfaces_domain = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Domain>();
        }
        return cisco_ios_xe_interfaces_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_domain")
    {
        if(cisco_ios_xe_interfaces_domain == nullptr)
        {
            cisco_ios_xe_interfaces_domain = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Domain>();
        }
        return cisco_ios_xe_interfaces_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_encapsulation")
    {
        if(cisco_ios_xe_interfaces_encapsulation == nullptr)
        {
            cisco_ios_xe_interfaces_encapsulation = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation>();
        }
        return cisco_ios_xe_interfaces_encapsulation;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_encapsulation")
    {
        if(cisco_ios_xe_interfaces_encapsulation == nullptr)
        {
            cisco_ios_xe_interfaces_encapsulation = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation>();
        }
        return cisco_ios_xe_interfaces_encapsulation;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue")
    {
        if(cisco_ios_xe_interfaces_fair_queue == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue>();
        }
        return cisco_ios_xe_interfaces_fair_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue")
    {
        if(cisco_ios_xe_interfaces_fair_queue == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue>();
        }
        return cisco_ios_xe_interfaces_fair_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue-conf")
    {
        if(cisco_ios_xe_interfaces_fair_queue_conf == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_conf = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf>();
        }
        return cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue-conf")
    {
        if(cisco_ios_xe_interfaces_fair_queue_conf == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_conf = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf>();
        }
        return cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_flowcontrol")
    {
        if(cisco_ios_xe_interfaces_flowcontrol == nullptr)
        {
            cisco_ios_xe_interfaces_flowcontrol = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol>();
        }
        return cisco_ios_xe_interfaces_flowcontrol;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_flowcontrol")
    {
        if(cisco_ios_xe_interfaces_flowcontrol == nullptr)
        {
            cisco_ios_xe_interfaces_flowcontrol = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol>();
        }
        return cisco_ios_xe_interfaces_flowcontrol;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_hold-queue")
    {
        if(cisco_ios_xe_interfaces_hold_queue == nullptr)
        {
            cisco_ios_xe_interfaces_hold_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue>();
        }
        return cisco_ios_xe_interfaces_hold_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_hold-queue")
    {
        if(cisco_ios_xe_interfaces_hold_queue == nullptr)
        {
            cisco_ios_xe_interfaces_hold_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue>();
        }
        return cisco_ios_xe_interfaces_hold_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_interface_qos")
    {
        if(cisco_ios_xe_interfaces_interface_qos == nullptr)
        {
            cisco_ios_xe_interfaces_interface_qos = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos>();
        }
        return cisco_ios_xe_interfaces_interface_qos;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_interface_qos")
    {
        if(cisco_ios_xe_interfaces_interface_qos == nullptr)
        {
            cisco_ios_xe_interfaces_interface_qos = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos>();
        }
        return cisco_ios_xe_interfaces_interface_qos;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ip")
    {
        if(cisco_ios_xe_interfaces_ip == nullptr)
        {
            cisco_ios_xe_interfaces_ip = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip>();
        }
        return cisco_ios_xe_interfaces_ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ip")
    {
        if(cisco_ios_xe_interfaces_ip == nullptr)
        {
            cisco_ios_xe_interfaces_ip = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip>();
        }
        return cisco_ios_xe_interfaces_ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ipv6")
    {
        if(cisco_ios_xe_interfaces_ipv6 == nullptr)
        {
            cisco_ios_xe_interfaces_ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6>();
        }
        return cisco_ios_xe_interfaces_ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ipv6")
    {
        if(cisco_ios_xe_interfaces_ipv6 == nullptr)
        {
            cisco_ios_xe_interfaces_ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6>();
        }
        return cisco_ios_xe_interfaces_ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_isis")
    {
        if(cisco_ios_xe_interfaces_isis == nullptr)
        {
            cisco_ios_xe_interfaces_isis = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis>();
        }
        return cisco_ios_xe_interfaces_isis;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_isis")
    {
        if(cisco_ios_xe_interfaces_isis == nullptr)
        {
            cisco_ios_xe_interfaces_isis = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis>();
        }
        return cisco_ios_xe_interfaces_isis;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel")
    {
        if(cisco_ios_xe_interfaces_l2protocol_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_l2protocol_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel>();
        }
        return cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel")
    {
        if(cisco_ios_xe_interfaces_l2protocol_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_l2protocol_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel>();
        }
        return cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_logging")
    {
        if(cisco_ios_xe_interfaces_logging == nullptr)
        {
            cisco_ios_xe_interfaces_logging = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging>();
        }
        return cisco_ios_xe_interfaces_logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_logging")
    {
        if(cisco_ios_xe_interfaces_logging == nullptr)
        {
            cisco_ios_xe_interfaces_logging = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging>();
        }
        return cisco_ios_xe_interfaces_logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mdix")
    {
        if(cisco_ios_xe_interfaces_mdix == nullptr)
        {
            cisco_ios_xe_interfaces_mdix = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix>();
        }
        return cisco_ios_xe_interfaces_mdix;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mdix")
    {
        if(cisco_ios_xe_interfaces_mdix == nullptr)
        {
            cisco_ios_xe_interfaces_mdix = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix>();
        }
        return cisco_ios_xe_interfaces_mdix;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mop")
    {
        if(cisco_ios_xe_interfaces_mop == nullptr)
        {
            cisco_ios_xe_interfaces_mop = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mop>();
        }
        return cisco_ios_xe_interfaces_mop;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mop")
    {
        if(cisco_ios_xe_interfaces_mop == nullptr)
        {
            cisco_ios_xe_interfaces_mop = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mop>();
        }
        return cisco_ios_xe_interfaces_mop;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mpls")
    {
        if(cisco_ios_xe_interfaces_mpls == nullptr)
        {
            cisco_ios_xe_interfaces_mpls = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls>();
        }
        return cisco_ios_xe_interfaces_mpls;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mpls")
    {
        if(cisco_ios_xe_interfaces_mpls == nullptr)
        {
            cisco_ios_xe_interfaces_mpls = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls>();
        }
        return cisco_ios_xe_interfaces_mpls;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_peer")
    {
        if(cisco_ios_xe_interfaces_peer == nullptr)
        {
            cisco_ios_xe_interfaces_peer = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer>();
        }
        return cisco_ios_xe_interfaces_peer;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_peer")
    {
        if(cisco_ios_xe_interfaces_peer == nullptr)
        {
            cisco_ios_xe_interfaces_peer = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer>();
        }
        return cisco_ios_xe_interfaces_peer;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_pm-path")
    {
        if(cisco_ios_xe_interfaces_pm_path == nullptr)
        {
            cisco_ios_xe_interfaces_pm_path = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath>();
        }
        return cisco_ios_xe_interfaces_pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_pm-path")
    {
        if(cisco_ios_xe_interfaces_pm_path == nullptr)
        {
            cisco_ios_xe_interfaces_pm_path = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath>();
        }
        return cisco_ios_xe_interfaces_pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_priority-queue")
    {
        if(cisco_ios_xe_interfaces_priority_queue == nullptr)
        {
            cisco_ios_xe_interfaces_priority_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue>();
        }
        return cisco_ios_xe_interfaces_priority_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_priority-queue")
    {
        if(cisco_ios_xe_interfaces_priority_queue == nullptr)
        {
            cisco_ios_xe_interfaces_priority_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue>();
        }
        return cisco_ios_xe_interfaces_priority_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_rcv-queue")
    {
        if(cisco_ios_xe_interfaces_rcv_queue == nullptr)
        {
            cisco_ios_xe_interfaces_rcv_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue>();
        }
        return cisco_ios_xe_interfaces_rcv_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_rcv-queue")
    {
        if(cisco_ios_xe_interfaces_rcv_queue == nullptr)
        {
            cisco_ios_xe_interfaces_rcv_queue = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue>();
        }
        return cisco_ios_xe_interfaces_rcv_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_standby")
    {
        if(cisco_ios_xe_interfaces_standby == nullptr)
        {
            cisco_ios_xe_interfaces_standby = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby>();
        }
        return cisco_ios_xe_interfaces_standby;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_standby")
    {
        if(cisco_ios_xe_interfaces_standby == nullptr)
        {
            cisco_ios_xe_interfaces_standby = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby>();
        }
        return cisco_ios_xe_interfaces_standby;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_storm-control")
    {
        if(cisco_ios_xe_interfaces_storm_control == nullptr)
        {
            cisco_ios_xe_interfaces_storm_control = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl>();
        }
        return cisco_ios_xe_interfaces_storm_control;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_storm-control")
    {
        if(cisco_ios_xe_interfaces_storm_control == nullptr)
        {
            cisco_ios_xe_interfaces_storm_control = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl>();
        }
        return cisco_ios_xe_interfaces_storm_control;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport")
    {
        if(cisco_ios_xe_interfaces_switchport == nullptr)
        {
            cisco_ios_xe_interfaces_switchport = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport>();
        }
        return cisco_ios_xe_interfaces_switchport;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport")
    {
        if(cisco_ios_xe_interfaces_switchport == nullptr)
        {
            cisco_ios_xe_interfaces_switchport = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport>();
        }
        return cisco_ios_xe_interfaces_switchport;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport-conf")
    {
        if(cisco_ios_xe_interfaces_switchport_conf == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_conf = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf>();
        }
        return cisco_ios_xe_interfaces_switchport_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport-conf")
    {
        if(cisco_ios_xe_interfaces_switchport_conf == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_conf = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf>();
        }
        return cisco_ios_xe_interfaces_switchport_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_trust")
    {
        if(cisco_ios_xe_interfaces_trust == nullptr)
        {
            cisco_ios_xe_interfaces_trust = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Trust>();
        }
        return cisco_ios_xe_interfaces_trust;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_trust")
    {
        if(cisco_ios_xe_interfaces_trust == nullptr)
        {
            cisco_ios_xe_interfaces_trust = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Trust>();
        }
        return cisco_ios_xe_interfaces_trust;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_utd")
    {
        if(cisco_ios_xe_interfaces_utd == nullptr)
        {
            cisco_ios_xe_interfaces_utd = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Utd>();
        }
        return cisco_ios_xe_interfaces_utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_utd")
    {
        if(cisco_ios_xe_interfaces_utd == nullptr)
        {
            cisco_ios_xe_interfaces_utd = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Utd>();
        }
        return cisco_ios_xe_interfaces_utd;
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

    if(child_yang_name == "glbp")
    {
        if(glbp == nullptr)
        {
            glbp = std::make_shared<Native::Interface::Vlan::Glbp>();
        }
        return glbp;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Vlan::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Vlan::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Vlan::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Vlan::KeepaliveSettings>();
        }
        return keepalive_settings;
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

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Vlan::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::Vrf>();
        }
        return vrf;
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
    if(cisco_ios_xe_interfaces_access_session != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_access-session"] = cisco_ios_xe_interfaces_access_session;
    }

    if(cisco_ios_xe_interfaces_access_session != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_access-session"] = cisco_ios_xe_interfaces_access_session;
    }

    if(cisco_ios_xe_interfaces_arp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_arp"] = cisco_ios_xe_interfaces_arp;
    }

    if(cisco_ios_xe_interfaces_arp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_arp"] = cisco_ios_xe_interfaces_arp;
    }

    if(cisco_ios_xe_interfaces_backup != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_backup"] = cisco_ios_xe_interfaces_backup;
    }

    if(cisco_ios_xe_interfaces_backup != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_backup"] = cisco_ios_xe_interfaces_backup;
    }

    if(cisco_ios_xe_interfaces_bandwidth != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bandwidth"] = cisco_ios_xe_interfaces_bandwidth;
    }

    if(cisco_ios_xe_interfaces_bandwidth != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bandwidth"] = cisco_ios_xe_interfaces_bandwidth;
    }

    if(cisco_ios_xe_interfaces_bfd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bfd"] = cisco_ios_xe_interfaces_bfd;
    }

    if(cisco_ios_xe_interfaces_bfd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bfd"] = cisco_ios_xe_interfaces_bfd;
    }

    if(cisco_ios_xe_interfaces_cemoudp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cemoudp"] = cisco_ios_xe_interfaces_cemoudp;
    }

    if(cisco_ios_xe_interfaces_cemoudp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cemoudp"] = cisco_ios_xe_interfaces_cemoudp;
    }

    if(cisco_ios_xe_interfaces_cws_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cws-tunnel"] = cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(cisco_ios_xe_interfaces_cws_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cws-tunnel"] = cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(cisco_ios_xe_interfaces_dampening != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_dampening"] = cisco_ios_xe_interfaces_dampening;
    }

    if(cisco_ios_xe_interfaces_dampening != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_dampening"] = cisco_ios_xe_interfaces_dampening;
    }

    if(cisco_ios_xe_interfaces_domain != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_domain"] = cisco_ios_xe_interfaces_domain;
    }

    if(cisco_ios_xe_interfaces_domain != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_domain"] = cisco_ios_xe_interfaces_domain;
    }

    if(cisco_ios_xe_interfaces_encapsulation != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_encapsulation"] = cisco_ios_xe_interfaces_encapsulation;
    }

    if(cisco_ios_xe_interfaces_encapsulation != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_encapsulation"] = cisco_ios_xe_interfaces_encapsulation;
    }

    if(cisco_ios_xe_interfaces_fair_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue"] = cisco_ios_xe_interfaces_fair_queue;
    }

    if(cisco_ios_xe_interfaces_fair_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue"] = cisco_ios_xe_interfaces_fair_queue;
    }

    if(cisco_ios_xe_interfaces_fair_queue_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue-conf"] = cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(cisco_ios_xe_interfaces_fair_queue_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue-conf"] = cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(cisco_ios_xe_interfaces_flowcontrol != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_flowcontrol"] = cisco_ios_xe_interfaces_flowcontrol;
    }

    if(cisco_ios_xe_interfaces_flowcontrol != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_flowcontrol"] = cisco_ios_xe_interfaces_flowcontrol;
    }

    if(cisco_ios_xe_interfaces_hold_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_hold-queue"] = cisco_ios_xe_interfaces_hold_queue;
    }

    if(cisco_ios_xe_interfaces_hold_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_hold-queue"] = cisco_ios_xe_interfaces_hold_queue;
    }

    if(cisco_ios_xe_interfaces_interface_qos != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_interface_qos"] = cisco_ios_xe_interfaces_interface_qos;
    }

    if(cisco_ios_xe_interfaces_interface_qos != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_interface_qos"] = cisco_ios_xe_interfaces_interface_qos;
    }

    if(cisco_ios_xe_interfaces_ip != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ip"] = cisco_ios_xe_interfaces_ip;
    }

    if(cisco_ios_xe_interfaces_ip != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ip"] = cisco_ios_xe_interfaces_ip;
    }

    if(cisco_ios_xe_interfaces_ipv6 != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ipv6"] = cisco_ios_xe_interfaces_ipv6;
    }

    if(cisco_ios_xe_interfaces_ipv6 != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ipv6"] = cisco_ios_xe_interfaces_ipv6;
    }

    if(cisco_ios_xe_interfaces_isis != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_isis"] = cisco_ios_xe_interfaces_isis;
    }

    if(cisco_ios_xe_interfaces_isis != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_isis"] = cisco_ios_xe_interfaces_isis;
    }

    if(cisco_ios_xe_interfaces_l2protocol_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_l2protocol-tunnel"] = cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(cisco_ios_xe_interfaces_l2protocol_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_l2protocol-tunnel"] = cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(cisco_ios_xe_interfaces_logging != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_logging"] = cisco_ios_xe_interfaces_logging;
    }

    if(cisco_ios_xe_interfaces_logging != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_logging"] = cisco_ios_xe_interfaces_logging;
    }

    if(cisco_ios_xe_interfaces_mdix != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mdix"] = cisco_ios_xe_interfaces_mdix;
    }

    if(cisco_ios_xe_interfaces_mdix != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mdix"] = cisco_ios_xe_interfaces_mdix;
    }

    if(cisco_ios_xe_interfaces_mop != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mop"] = cisco_ios_xe_interfaces_mop;
    }

    if(cisco_ios_xe_interfaces_mop != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mop"] = cisco_ios_xe_interfaces_mop;
    }

    if(cisco_ios_xe_interfaces_mpls != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mpls"] = cisco_ios_xe_interfaces_mpls;
    }

    if(cisco_ios_xe_interfaces_mpls != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mpls"] = cisco_ios_xe_interfaces_mpls;
    }

    if(cisco_ios_xe_interfaces_peer != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_peer"] = cisco_ios_xe_interfaces_peer;
    }

    if(cisco_ios_xe_interfaces_peer != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_peer"] = cisco_ios_xe_interfaces_peer;
    }

    if(cisco_ios_xe_interfaces_pm_path != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_pm-path"] = cisco_ios_xe_interfaces_pm_path;
    }

    if(cisco_ios_xe_interfaces_pm_path != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_pm-path"] = cisco_ios_xe_interfaces_pm_path;
    }

    if(cisco_ios_xe_interfaces_priority_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_priority-queue"] = cisco_ios_xe_interfaces_priority_queue;
    }

    if(cisco_ios_xe_interfaces_priority_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_priority-queue"] = cisco_ios_xe_interfaces_priority_queue;
    }

    if(cisco_ios_xe_interfaces_rcv_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_rcv-queue"] = cisco_ios_xe_interfaces_rcv_queue;
    }

    if(cisco_ios_xe_interfaces_rcv_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_rcv-queue"] = cisco_ios_xe_interfaces_rcv_queue;
    }

    if(cisco_ios_xe_interfaces_standby != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_standby"] = cisco_ios_xe_interfaces_standby;
    }

    if(cisco_ios_xe_interfaces_standby != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_standby"] = cisco_ios_xe_interfaces_standby;
    }

    if(cisco_ios_xe_interfaces_storm_control != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_storm-control"] = cisco_ios_xe_interfaces_storm_control;
    }

    if(cisco_ios_xe_interfaces_storm_control != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_storm-control"] = cisco_ios_xe_interfaces_storm_control;
    }

    if(cisco_ios_xe_interfaces_switchport != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport"] = cisco_ios_xe_interfaces_switchport;
    }

    if(cisco_ios_xe_interfaces_switchport != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport"] = cisco_ios_xe_interfaces_switchport;
    }

    if(cisco_ios_xe_interfaces_switchport_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport-conf"] = cisco_ios_xe_interfaces_switchport_conf;
    }

    if(cisco_ios_xe_interfaces_switchport_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport-conf"] = cisco_ios_xe_interfaces_switchport_conf;
    }

    if(cisco_ios_xe_interfaces_trust != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_trust"] = cisco_ios_xe_interfaces_trust;
    }

    if(cisco_ios_xe_interfaces_trust != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_trust"] = cisco_ios_xe_interfaces_trust;
    }

    if(cisco_ios_xe_interfaces_utd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_utd"] = cisco_ios_xe_interfaces_utd;
    }

    if(cisco_ios_xe_interfaces_utd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_utd"] = cisco_ios_xe_interfaces_utd;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(glbp != nullptr)
    {
        children["glbp"] = glbp;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    for (auto const & c : vrrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(zone_member != nullptr)
    {
        children["zone-member"] = zone_member;
    }

    return children;
}

void Native::Interface::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion_ = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown = value;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown_ = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "keepalive")
    {
        keepalive_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::CiscoIosXeInterfaces_SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "Cisco-IOS-XE-interfaces_switchport-conf"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::~CiscoIosXeInterfaces_SwitchportConf()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_SwitchportConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.operation)) leaf_name_data.push_back(switchport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::CiscoIosXeInterfaces_Switchport()
{
    yang_name = "Cisco-IOS-XE-interfaces_switchport"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::~CiscoIosXeInterfaces_Switchport()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Switchport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::CiscoIosXeInterfaces_Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "Cisco-IOS-XE-interfaces_arp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::~CiscoIosXeInterfaces_Arp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::CiscoIosXeInterfaces_Backup()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_backup"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::~CiscoIosXeInterfaces_Backup()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_entity_path(Entity* ancestor) const
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

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.operation)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::Interface_()
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
    atm_acrsubinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::has_data() const
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

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::set_value(const std::string & value_path, std::string value)
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

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::~Load()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Load' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.operation)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.operation)) leaf_name_data.push_back(kickout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kickin")
    {
        kickin = value;
    }
    if(value_path == "kickout")
    {
        kickout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::CiscoIosXeInterfaces_Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cemoudp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::~CiscoIosXeInterfaces_Cemoudp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::has_operation() const
{
    return is_set(operation)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_cemoudp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Cemoudp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{
    yang_name = "reserve"; yang_parent_name = "Cisco-IOS-XE-interfaces_cemoudp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::has_operation() const
{
    return is_set(operation)
	|| is_set(acr.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reserve' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.operation)) leaf_name_data.push_back(acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr")
    {
        acr = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::CiscoIosXeInterfaces_CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::~CiscoIosXeInterfaces_CwsTunnel()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_cws-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_CwsTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{
    yang_name = "out"; yang_parent_name = "Cisco-IOS-XE-interfaces_cws-tunnel";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_number.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.operation)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::CiscoIosXeInterfaces_L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;

    shutdown_threshold->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::~CiscoIosXeInterfaces_L2ProtocolTunnel()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_L2ProtocolTunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "drop-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DropThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{
    yang_name = "shutdown-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(cdp.operation)
	|| is_set(packet_rate.operation)
	|| is_set(stp.operation)
	|| is_set(vtp.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShutdownThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.operation)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.operation)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.operation)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.operation)) leaf_name_data.push_back(vtp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdp")
    {
        cdp = value;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
    }
    if(value_path == "stp")
    {
        stp = value;
    }
    if(value_path == "vtp")
    {
        vtp = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::CiscoIosXeInterfaces_Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;

    isl->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_encapsulation"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::~CiscoIosXeInterfaces_Encapsulation()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::has_operation() const
{
    return is_set(operation)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
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

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1Q"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(native.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.operation)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "native")
    {
        native = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "isl"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::Ppp()
{
    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ppp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::Slip()
{
    yang_name = "slip"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{
    yang_name = "frame-relay"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameRelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf")
    {
        ietf = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::CiscoIosXeInterfaces_FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{
    yang_name = "Cisco-IOS-XE-interfaces_fair-queue-conf"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::~CiscoIosXeInterfaces_FairQueueConf()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::has_operation() const
{
    return is_set(operation)
	|| is_set(fair_queue.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_fair-queue-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_FairQueueConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.operation)) leaf_name_data.push_back(fair_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::CiscoIosXeInterfaces_FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{
    yang_name = "Cisco-IOS-XE-interfaces_fair-queue"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::~CiscoIosXeInterfaces_FairQueue()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(incomplete.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_fair-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_FairQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.operation)) leaf_name_data.push_back(incomplete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::CiscoIosXeInterfaces_Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{
    yang_name = "Cisco-IOS-XE-interfaces_flowcontrol"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::~CiscoIosXeInterfaces_Flowcontrol()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(send.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_flowcontrol";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Flowcontrol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.operation)) leaf_name_data.push_back(send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "send")
    {
        send = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CiscoIosXeInterfaces_Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
    	,
    adjacency_filter(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter>())
	,advertise(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication>())
	,circuit_type(nullptr) // presence node
	,csnp_interval(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval>())
	,hello(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval>())
	,hello_multiplier(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier>())
	,ipv6(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6>())
	,metric(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric>())
	,password(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password>())
	,priority(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority>())
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

    yang_name = "Cisco-IOS-XE-interfaces_isis"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::~CiscoIosXeInterfaces_Isis()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::has_data() const
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

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_interval.operation)
	|| is_set(mesh_group.operation)
	|| is_set(network.operation)
	|| is_set(protocol.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(retransmit_throttle_interval.operation)
	|| is_set(tag.operation)
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

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.operation)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.operation)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::AdjacencyFilter()
    :
    match_all{YType::empty, "match-all"},
    name{YType::str, "name"}
{
    yang_name = "adjacency-filter"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::has_data() const
{
    return match_all.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(match_all.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_all.is_set || is_set(match_all.operation)) leaf_name_data.push_back(match_all.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-all")
    {
        match_all = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{
    yang_name = "advertise"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::~Advertise()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::has_data() const
{
    return prefix.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::get_children() const
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

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "md5"; yang_parent_name = "mode";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "text"; yang_parent_name = "mode";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Text' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{
    yang_name = "key-chain-list"; yang_parent_name = "key-chain";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChainList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "send-only"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{
    yang_name = "circuit-type"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
{
    yang_name = "csnp-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::has_data() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList>();
        c->parent = this;
        csnp_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csnp_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{
    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpIntervalList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{
    yang_name = "hello"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::~Hello()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::has_operation() const
{
    return is_set(operation)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hello' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
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

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
{
    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::has_data() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList>();
        c->parent = this;
        hello_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloIntervalList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
{
    yang_name = "hello-multiplier"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList>();
        c->parent = this;
        hello_multiplier_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_multiplier_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{
    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplierList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
    	,
    metric(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric>())
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::has_data() const
{
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
{
    yang_name = "metric"; yang_parent_name = "ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "metric-list"; yang_parent_name = "metric";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
{
    yang_name = "metric"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::~Metric()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "metric-list"; yang_parent_name = "metric";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::Password()
    :
    password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::~Password()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::has_data() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(password.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::get_entity_path(Entity* ancestor) const
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

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList>();
        c->parent = this;
        password_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{
    yang_name = "password-list"; yang_parent_name = "password";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::has_data() const
{
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(password.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PasswordList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "priority"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::~Priority()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::has_data() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList>();
        c->parent = this;
        priority_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{
    yang_name = "priority-list"; yang_parent_name = "priority";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{
    yang_name = "three-way-handshake"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::has_data() const
{
    return implementor.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(operation)
	|| is_set(implementor.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreeWayHandshake' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.operation)) leaf_name_data.push_back(implementor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "implementor")
    {
        implementor = value;
    }
}

Native::Interface::Vlan::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{
    yang_name = "keepalive-settings"; yang_parent_name = "Vlan";
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
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Vlan::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::KeepaliveSettings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepaliveSettings' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Vlan::KeepaliveSettings::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{
    yang_name = "keepalive"; yang_parent_name = "keepalive-settings";
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
    return is_set(operation)
	|| is_set(period.operation)
	|| is_set(retries.operation);
}

std::string Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Vlan::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "period")
    {
        period = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::CiscoIosXeInterfaces_Bfd()
{
    yang_name = "Cisco-IOS-XE-interfaces_bfd"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::~CiscoIosXeInterfaces_Bfd()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::CiscoIosXeInterfaces_Bandwidth()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive>())
{
    receive->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_bandwidth"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::~CiscoIosXeInterfaces_Bandwidth()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(kilobits.operation)
	|| is_set(qos_reference.operation)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.operation)) leaf_name_data.push_back(qos_reference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "receive"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(inherit.operation)
	|| is_set(kilobits.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.operation)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inherit")
    {
        inherit = value;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "inherit"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::has_operation() const
{
    return is_set(operation)
	|| is_set(kilobits.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inherit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::CiscoIosXeInterfaces_Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_dampening"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::~CiscoIosXeInterfaces_Dampening()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(dampening_time.operation)
	|| is_set(maximum_supressing_time.operation)
	|| is_set(start_reusing_time.operation)
	|| is_set(start_supressing_time.operation)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_dampening";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.operation)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.operation)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.operation)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.operation)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{
    yang_name = "restart"; yang_parent_name = "Cisco-IOS-XE-interfaces_dampening";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::~Restart()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::has_operation() const
{
    return is_set(operation)
	|| is_set(restart.operation)
	|| is_set(restart_penalty.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Restart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restart")
    {
        restart = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::CiscoIosXeInterfaces_Domain()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{
    yang_name = "Cisco-IOS-XE-interfaces_domain"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::~CiscoIosXeInterfaces_Domain()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(internet_bound.operation)
	|| is_set(name.operation)
	|| is_set(path.operation)
	|| is_set(path_id.operation)
	|| is_set(path_last_resort.operation)
	|| is_set(zero_sla.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_domain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Domain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.operation)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.operation)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.operation)) leaf_name_data.push_back(zero_sla.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::CiscoIosXeInterfaces_HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{
    yang_name = "Cisco-IOS-XE-interfaces_hold-queue"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::~CiscoIosXeInterfaces_HoldQueue()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(queue_length.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_hold-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_HoldQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.operation)) leaf_name_data.push_back(queue_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::CiscoIosXeInterfaces_Mpls()
{
    yang_name = "Cisco-IOS-XE-interfaces_mpls"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::~CiscoIosXeInterfaces_Mpls()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mpls";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Vlan::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Vlan";
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
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::IpVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Vlan::IpVrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Vlan::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf";
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
    return is_set(operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::IpVrf::Ip::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Vlan::IpVrf::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "ip";
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
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Vlan::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::IpVrf::Ip::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Vlan::IpVrf::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Vlan::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "Vlan";
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
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Vlan::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Interface::Vlan::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::CiscoIosXeInterfaces_Ip()
    :
    admission{YType::str, "admission"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    mroute_cache{YType::boolean, "mroute-cache"},
    mtu{YType::uint16, "mtu"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"}
    	,
    access_group(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup>())
	,address(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address>())
	,arp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication>())
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime>())
	,nbar(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar>())
	,no_address(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress>())
	,pim(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim>())
	,policy(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy>())
	,route_cache(nullptr) // presence node
	,route_cache_conf(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf>())
	,router(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router>())
	,summary_address(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress>())
	,tcp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp>())
	,verify(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify>())
	,virtual_reassembly(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly>())
	,vrf(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf>())
{
    access_group->parent = this;

    address->parent = this;

    arp->parent = this;

    authentication->parent = this;

    dhcp->parent = this;

    hello_interval->parent = this;

    hold_time->parent = this;

    nbar->parent = this;

    no_address->parent = this;

    pim->parent = this;

    policy->parent = this;

    route_cache_conf->parent = this;

    router->parent = this;

    summary_address->parent = this;

    tcp->parent = this;

    verify->parent = this;

    virtual_reassembly->parent = this;

    vrf->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ip"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::~CiscoIosXeInterfaces_Ip()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| mroute_cache.is_set
	|| mtu.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admission.operation)
	|| is_set(directed_broadcast.operation)
	|| is_set(local_proxy_arp.operation)
	|| is_set(mroute_cache.operation)
	|| is_set(mtu.operation)
	|| is_set(proxy_arp.operation)
	|| is_set(redirects.operation)
	|| is_set(unnumbered.operation)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.operation)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.operation)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.operation)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.operation)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.operation)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval>();
        }
        return hello_interval;
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admission")
    {
        admission = value;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out>())
{
    in->parent = this;

    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::In()
    :
    acl(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl>())
	,common_acl(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl>())
{
    acl->parent = this;

    common_acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{
    yang_name = "common-acl"; yang_parent_name = "in";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(common.operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.operation)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{
    yang_name = "acl"; yang_parent_name = "in";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Out()
    :
    acl(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl>())
	,common_acl(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl>())
{
    acl->parent = this;

    common_acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{
    yang_name = "common-acl"; yang_parent_name = "out";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(common.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.operation)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{
    yang_name = "acl"; yang_parent_name = "out";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::~Arp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::has_operation() const
{
    return is_set(operation)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::has_operation() const
{
    return is_set(operation)
	|| is_set(trust.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inspection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{
    yang_name = "limit"; yang_parent_name = "inspection";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(rate.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(sitemap.operation)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.operation)) leaf_name_data.push_back(sitemap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{
    yang_name = "forwarding"; yang_parent_name = "vrf";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(operation)
	|| is_set(liin_vrf.operation)
	|| is_set(mgmtvrf.operation)
	|| is_set(word.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.operation)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.operation)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
    }
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{
    yang_name = "no-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    dhcp(nullptr) // presence node
	,primary(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary>())
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(negotiated.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.operation)) leaf_name_data.push_back(negotiated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary>();
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{
    yang_name = "primary"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "secondary"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "client-id"; yang_parent_name = "dhcp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| fortygigabitethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(operation)
	|| is_set(fastethernet.operation)
	|| is_set(fortygigabitethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(port_channel.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.operation)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode>())
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(md5.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::get_entity_path(Entity* ancestor) const
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

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{
    yang_name = "helper-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(global.operation)
	|| is_set(vrf.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::Pim()
    :
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    sparse_mode{YType::enumeration, "Cisco-IOS-XE-multicast:sparse-mode"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
    	,
    accept_register(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister>())
	,query_interval(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval>())
{
    accept_register->parent = this;

    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::~Pim()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::has_data() const
{
    return dr_priority.is_set
	|| nbma_mode.is_set
	|| sparse_mode.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_priority.operation)
	|| is_set(nbma_mode.operation)
	|| is_set(sparse_mode.operation)
	|| is_set(spt_threshold.operation)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.operation)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (sparse_mode.is_set || is_set(sparse_mode.operation)) leaf_name_data.push_back(sparse_mode.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.operation)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode = value;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode = value;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{
    yang_name = "accept-register"; yang_parent_name = "pim";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptRegister' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::QueryInterval()
    :
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"},
    seconds_interval{YType::uint16, "seconds-interval"}
{
    yang_name = "query-interval"; yang_parent_name = "pim";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::has_data() const
{
    return milliseconds_interval.is_set
	|| msec.is_set
	|| seconds_interval.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds_interval.operation)
	|| is_set(msec.operation)
	|| is_set(seconds_interval.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueryInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds_interval.is_set || is_set(milliseconds_interval.operation)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds_interval.is_set || is_set(seconds_interval.operation)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
    }
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "policy"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::~Policy()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{
    yang_name = "route-cache-conf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_cache.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCacheConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.operation)) leaf_name_data.push_back(route_cache.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{
    yang_name = "route-cache"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::has_operation() const
{
    return is_set(operation)
	|| is_set(cef.operation)
	|| is_set(flow.operation)
	|| is_set(policy.operation)
	|| is_set(same_interface.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.operation)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.operation)) leaf_name_data.push_back(same_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cef")
    {
        cef = value;
    }
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Router()
    :
    isis(nullptr) // presence node
{
    yang_name = "router"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::~Router()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::has_operation() const
{
    return is_set(operation)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{
    yang_name = "isis"; yang_parent_name = "router";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{
    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::~Tcp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_mss.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.operation)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "virtual-reassembly"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_fragments.operation)
	|| is_set(in.operation)
	|| is_set(max_fragments.operation)
	|| is_set(max_reassemblies.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualReassembly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.operation)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.operation)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.operation)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping>())
{
    client->parent = this;

    relay->parent = this;

    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{
    yang_name = "client"; yang_parent_name = "dhcp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_action.operation)
	|| is_set(trusted.operation)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.operation)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::get_children() const
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

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
    }
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{
    yang_name = "check-reply"; yang_parent_name = "information";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckReply' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_id.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{
    yang_name = "option-insert"; yang_parent_name = "information";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionInsert' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(trust.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust")
    {
        trust = value;
    }
}

const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostModeEnum::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostModeEnum::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostModeEnum::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Cellular::AccessSession::HostModeEnum::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Cellular::Trust::DeviceEnum::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Cellular::Trust::DeviceEnum::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Cellular::Trust::DeviceEnum::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Cellular::Trust::DeviceEnum::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vlan::IfStateEnum::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vlan::ServiceInsertionEnum::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::FailureEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::SecondaryDisableEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::KickinEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::KickoutEnum::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::ReceiveEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::ReceiveEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::ReceiveEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::SendEnum::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::SendEnum::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::SendEnum::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::MeshGroupEnum::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::NetworkEnum::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ProtocolEnum::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::LevelsEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::LevelsEnum::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::ValueEnum::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::ValueEnum::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::ImplementorEnum::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::ImplementorEnum::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SparseModeEnum::sparse_dense_mode {0, "sparse-dense-mode"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SparseModeEnum::sparse_mode {1, "sparse-mode"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SptThresholdEnum::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::PolicyActionEnum::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::PolicyActionEnum::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::PolicyActionEnum::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::PolicyActionEnum::replace {3, "replace"};


}
}

