
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_51.hpp"
#include "Cisco_IOS_XE_native_52.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ChannelGroup()
    :
    auto_{YType::empty, "auto"},
    link{YType::uint8, "link"},
    mode{YType::enumeration, "mode"},
    non_silent{YType::empty, "non-silent"},
    number{YType::uint16, "number"}
{
    yang_name = "channel-group"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::~ChannelGroup()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::has_data() const
{
    return auto_.is_set
	|| link.is_set
	|| mode.is_set
	|| non_silent.is_set
	|| number.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation)
	|| is_set(link.operation)
	|| is_set(mode.operation)
	|| is_set(non_silent.operation)
	|| is_set(number.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:channel-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (non_silent.is_set || is_set(non_silent.operation)) leaf_name_data.push_back(non_silent.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
    if(value_path == "link")
    {
        link = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "non-silent")
    {
        non_silent = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Ethernet()
    :
    oam(nullptr) // presence node
{
    yang_name = "ethernet"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::~Ethernet()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::has_data() const
{
    return (oam !=  nullptr && oam->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::Oam()
    :
    max_rate{YType::uint8, "max-rate"},
    min_rate{YType::uint8, "min-rate"},
    mode{YType::enumeration, "mode"},
    timeout{YType::uint8, "timeout"}
    	,
    link_monitor(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor>())
	,remote_failure(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure>())
	,remote_loopback(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback>())
{
    link_monitor->parent = this;

    remote_failure->parent = this;

    remote_loopback->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::~Oam()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::has_data() const
{
    return max_rate.is_set
	|| min_rate.is_set
	|| mode.is_set
	|| timeout.is_set
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data())
	|| (remote_loopback !=  nullptr && remote_loopback->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::has_operation() const
{
    return is_set(operation)
	|| is_set(max_rate.operation)
	|| is_set(min_rate.operation)
	|| is_set(mode.operation)
	|| is_set(timeout.operation)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation())
	|| (remote_loopback !=  nullptr && remote_loopback->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::get_entity_path(Entity* ancestor) const
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

    if (max_rate.is_set || is_set(max_rate.operation)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.operation)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    if(child_yang_name == "remote-loopback")
    {
        if(remote_loopback == nullptr)
        {
            remote_loopback = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback>();
        }
        return remote_loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::get_children() const
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

    if(remote_loopback != nullptr)
    {
        children["remote-loopback"] = remote_loopback;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-rate")
    {
        max_rate = value;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    on{YType::empty, "on"},
    supported{YType::empty, "supported"}
    	,
    frame(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame>())
	,frame_period(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds>())
	,high_threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold>())
	,receive_crc(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
	,symbol_period(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;

    frame_period->parent = this;

    frame_seconds->parent = this;

    high_threshold->parent = this;

    receive_crc->parent = this;

    symbol_period->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::has_data() const
{
    return on.is_set
	|| supported.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(on.operation)
	|| is_set(supported.operation)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::get_entity_path(Entity* ancestor) const
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

    if (on.is_set || is_set(on.operation)) leaf_name_data.push_back(on.get_name_leafdata());
    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::get_children() const
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

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "on")
    {
        on = value;
    }
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_entity_path(Entity* ancestor) const
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

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    none{YType::empty, "none"},
    thresh{YType::uint16, "thresh"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    return none.is_set
	|| thresh.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(thresh.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_entity_path(Entity* ancestor) const
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

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.operation)) leaf_name_data.push_back(thresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "thresh")
    {
        thresh = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_entity_path(Entity* ancestor) const
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

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    f_thresh{YType::uint16, "f-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    return f_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(f_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_entity_path(Entity* ancestor) const
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

    if (f_thresh.is_set || is_set(f_thresh.operation)) leaf_name_data.push_back(f_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "f-thresh")
    {
        f_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_entity_path(Entity* ancestor) const
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

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(e_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_entity_path(Entity* ancestor) const
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

    if (e_thresh.is_set || is_set(e_thresh.operation)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "e-thresh")
    {
        e_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "high-threshold";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_entity_path(Entity* ancestor) const
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

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(crc_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_entity_path(Entity* ancestor) const
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

    if (crc_thresh.is_set || is_set(crc_thresh.operation)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_entity_path(Entity* ancestor) const
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

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
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

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(err_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_entity_path(Entity* ancestor) const
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

    if (err_thresh.is_set || is_set(err_thresh.operation)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "err-thresh")
    {
        err_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent>())
	,dying_gasp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp>())
	,link_fault(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;

    dying_gasp->parent = this;

    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::has_data() const
{
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(operation)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::get_children() const
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

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "critical-event";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{
    yang_name = "dying-gasp"; yang_parent_name = "remote-failure";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "dying-gasp";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{
    yang_name = "link-fault"; yang_parent_name = "remote-failure";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "link-fault";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_entity_path(Entity* ancestor) const
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

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{
    yang_name = "remote-loopback"; yang_parent_name = "oam";
}

Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::has_data() const
{
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLoopback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{
    yang_name = "negotiation"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::~Negotiation()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Negotiation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Negotiation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{
    yang_name = "synchronous"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::~Synchronous()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::has_data() const
{
    return mode.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:synchronous";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::get_entity_path(Entity* ancestor) const
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

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Synchronous::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    nonegotiate{YType::empty, "nonegotiate"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"}
{
    yang_name = "speed"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Speed::~Speed()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Speed::has_data() const
{
    return auto_.is_set
	|| nonegotiate.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Speed::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation)
	|| is_set(nonegotiate.operation)
	|| is_set(value_10.operation)
	|| is_set(value_100.operation)
	|| is_set(value_1000.operation)
	|| is_set(value_10000.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:speed";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Speed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Speed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (value_10.is_set || is_set(value_10.operation)) leaf_name_data.push_back(value_10.get_name_leafdata());
    if (value_100.is_set || is_set(value_100.operation)) leaf_name_data.push_back(value_100.get_name_leafdata());
    if (value_1000.is_set || is_set(value_1000.operation)) leaf_name_data.push_back(value_1000.get_name_leafdata());
    if (value_10000.is_set || is_set(value_10000.operation)) leaf_name_data.push_back(value_10000.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Speed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
    if(value_path == "value-10")
    {
        value_10 = value;
    }
    if(value_path == "value-100")
    {
        value_100 = value;
    }
    if(value_path == "value-1000")
    {
        value_1000 = value;
    }
    if(value_path == "value-10000")
    {
        value_10000 = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet>())
	,qos(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos>())
{
    ethernet->parent = this;

    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::~Plim()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::has_operation() const
{
    return is_set(operation)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Plim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(operation)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "filter"; yang_parent_name = "vlan";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Filter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::~Qos()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::has_data() const
{
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::has_operation() const
{
    return is_set(operation)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Queue()
    :
    strict_priority(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority>())
	,zero(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero>())
{
    strict_priority->parent = this;

    zero->parent = this;

    yang_name = "queue"; yang_parent_name = "input";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::has_data() const
{
    return (strict_priority !=  nullptr && strict_priority->has_data())
	|| (zero !=  nullptr && zero->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(operation)
	|| (strict_priority !=  nullptr && strict_priority->has_operation())
	|| (zero !=  nullptr && zero->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_priority != nullptr)
    {
        children["strict-priority"] = strict_priority;
    }

    if(zero != nullptr)
    {
        children["zero"] = zero;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(operation)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Zero' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{
    yang_name = "pause"; yang_parent_name = "zero";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(operation)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StrictPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{
    yang_name = "pause"; yang_parent_name = "strict-priority";
}

Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
    	,
    enable(nullptr) // presence node
{
    yang_name = "pppoe"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::~Pppoe()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::has_data() const
{
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(max_sessions.operation)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:pppoe";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.operation)) leaf_name_data.push_back(max_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{
    yang_name = "enable"; yang_parent_name = "pppoe";
}

Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::has_data() const
{
    return group.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Service()
{
    yang_name = "service"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::~Service()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    description{YType::str, "description"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    evc_name{YType::str, "evc-name"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"},
    trunk{YType::empty, "trunk"}
    	,
    bridge_domain(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain>())
	,cfm(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm>())
	,encapsulation(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation>())
	,errdisable(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable>())
	,ethernet_container(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer>())
	,ip(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip>())
	,ipv6(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6>())
	,l2protocol(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol>())
	,mac(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac>())
	,rewrite(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite>())
	,service_policy(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp>())
{
    bridge_domain->parent = this;

    cfm->parent = this;

    encapsulation->parent = this;

    errdisable->parent = this;

    ethernet_container->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    l2protocol->parent = this;

    mac->parent = this;

    rewrite->parent = this;

    service_policy->parent = this;

    snmp->parent = this;

    yang_name = "instance"; yang_parent_name = "service";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::~Instance()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::has_data() const
{
    return id.is_set
	|| description.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| evc_name.is_set
	|| gigabitethernet.is_set
	|| group.is_set
	|| shutdown.is_set
	|| trunk.is_set
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(description.operation)
	|| is_set(ethernet.operation)
	|| is_set(ethernet_evc_name.operation)
	|| is_set(evc_name.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(group.operation)
	|| is_set(shutdown.operation)
	|| is_set(trunk.operation)
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.operation)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.operation)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.operation)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol>();
        }
        return l2protocol;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        children["ethernet-container"] = ethernet_container;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(l2protocol != nullptr)
    {
        children["l2protocol"] = l2protocol;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name = value;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
    	,
    dot1ad(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q>())
	,priority_tagged(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged>())
	,untagged(nullptr) // presence node
{
    dot1ad->parent = this;

    dot1q->parent = this;

    priority_tagged->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::has_data() const
{
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        children["untagged"] = untagged;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    id{YType::str, "id"}
    	,
    cos2(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dot1q.operation)
	|| is_set(etype.operation)
	|| is_set(exact.operation)
	|| is_set(id.operation)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Ad' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dot1q")
    {
        dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "id")
    {
        id.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{
    yang_name = "cos2"; yang_parent_name = "dot1ad";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::~Cos2()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    id{YType::str, "id"},
    second_dot1q{YType::str, "second-dot1q"},
    vlan_type{YType::enumeration, "vlan-type"}
    	,
    cos2(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(etype.operation)
	|| is_set(exact.operation)
	|| is_set(id.operation)
	|| is_set(second_dot1q.operation)
	|| is_set(vlan_type.operation)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
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

    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.operation)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{
    yang_name = "cos2"; yang_parent_name = "dot1q";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::~Cos2()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
    	,
    cos_container(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(etype.operation)
	|| (cos_container !=  nullptr && cos_container->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityTagged' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_container != nullptr)
    {
        children["cos-container"] = cos_container;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{
    yang_name = "cos-container"; yang_parent_name = "priority-tagged";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::Untagged()
{
    yang_name = "untagged"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::has_data() const
{
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Untagged' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl>())
	,dhcp(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp>())
	,verify(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify>())
{
    acl->parent = this;

    dhcp->parent = this;

    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "acl"; yang_parent_name = "ip";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::has_data() const
{
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::get_entity_path(Entity* ancestor) const
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

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::has_data() const
{
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_id.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::Verify()
    :
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"},
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "verify"; yang_parent_name = "ip";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::has_data() const
{
    return dhcp_snooping.is_set
	|| port_security.is_set
	|| source.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping.operation)
	|| is_set(port_security.operation)
	|| is_set(source.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping.is_set || is_set(dhcp_snooping.operation)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.operation)) leaf_name_data.push_back(port_security.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping = value;
    }
    if(value_path == "port-security")
    {
        port_security = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::Ipv6()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"},
    traffic_filter{YType::str, "traffic-filter"}
{
    yang_name = "ipv6"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::has_data() const
{
    return in.is_set
	|| out.is_set
	|| traffic_filter.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation)
	|| is_set(traffic_filter.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());
    if (traffic_filter.is_set || is_set(traffic_filter.operation)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::has_operation() const
{
    return is_set(operation)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rewrite' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(operation)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop>())
	,push(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push>())
	,translate(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;

    push->parent = this;

    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(operation)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pop != nullptr)
    {
        children["pop"] = pop;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    mode{YType::enumeration, "mode"},
    way{YType::enumeration, "way"}
{
    yang_name = "pop"; yang_parent_name = "tag";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    return mode.is_set
	|| way.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(way.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (way.is_set || is_set(way.operation)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "way")
    {
        way = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "push"; yang_parent_name = "tag";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
	,t1_to_2(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
	,t2_to_1(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
	,t2_to_2(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;

    t1_to_2->parent = this;

    t2_to_1->parent = this;

    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(operation)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Translate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(t1_to_1 != nullptr)
    {
        children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        children["t2-to-2"] = t2_to_2;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "t1-to-1"; yang_parent_name = "translate";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T1To1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{
    yang_name = "t1-to-2"; yang_parent_name = "translate";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation)
	|| is_set(second_dot1q.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T1To2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.operation)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "t2-to-1"; yang_parent_name = "translate";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T2To1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{
    yang_name = "t2-to-2"; yang_parent_name = "translate";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation)
	|| is_set(second_dot1q.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T2To2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.operation)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::has_operation() const
{
    return is_set(operation)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Errdisable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(operation)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{
    yang_name = "cause"; yang_parent_name = "recovery";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    return mac_security.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_security.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.operation)) leaf_name_data.push_back(mac_security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(operation)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi>())
	,loopback(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;

    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lmi != nullptr)
    {
        children["lmi"] = lmi;
    }

    if(loopback != nullptr)
    {
        children["loopback"] = loopback;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(operation)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lmi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ce_vlan != nullptr)
    {
        children["ce-vlan"] = ce_vlan;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(operation)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CeVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"}
    	,
    vlan_range(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>())
{
    vlan_range->parent = this;

    yang_name = "map"; yang_parent_name = "ce-vlan";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| (vlan_range !=  nullptr && vlan_range->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(default_.operation)
	|| is_set(untagged.operation)
	|| (vlan_range !=  nullptr && vlan_range->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.operation)) leaf_name_data.push_back(untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        if(vlan_range == nullptr)
        {
            vlan_range = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>();
        }
        return vlan_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_range != nullptr)
    {
        children["vlan-range"] = vlan_range;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "untagged")
    {
        untagged = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::VlanRange()
    :
    comma{YType::uint16, "comma"},
    hyphen{YType::uint16, "hyphen"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "vlan-range"; yang_parent_name = "map";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::~VlanRange()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_data() const
{
    return comma.is_set
	|| hyphen.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(comma.operation)
	|| is_set(hyphen.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comma.is_set || is_set(comma.operation)) leaf_name_data.push_back(comma.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.operation)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "comma")
    {
        comma = value;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(operation)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Loopback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{
    yang_name = "permit"; yang_parent_name = "loopback";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(internal.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap>())
{
    ifindex->parent = this;

    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::has_operation() const
{
    return is_set(operation)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{
    yang_name = "trap"; yang_parent_name = "snmp";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::has_data() const
{
    return link_status.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(link_status.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::get_entity_path(Entity* ancestor) const
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

    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-status")
    {
        link_status = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(operation)
	|| is_set(persist.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifindex' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.operation)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "persist")
    {
        persist = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
    	,
    split_horizon(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::has_data() const
{
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_id.operation)
	|| is_set(from_encapsulation.operation)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.operation)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.operation)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{
    yang_name = "split-horizon"; yang_parent_name = "bridge-domain";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizon' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
{
    yang_name = "mac"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::has_operation() const
{
    return is_set(operation)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
    	,
    maximum(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::has_data() const
{
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(operation)
	|| is_set(violation.operation)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Security' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.operation)) leaf_name_data.push_back(violation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "violation")
    {
        violation = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{
    yang_name = "maximum"; yang_parent_name = "security";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(addresses.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.operation)) leaf_name_data.push_back(addresses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addresses")
    {
        addresses = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::ServicePolicy()
{
    yang_name = "service-policy"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::has_data() const
{
    for (std::size_t index=0; index<input.size(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.size(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.size(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        for(auto const & c : input)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input>();
        c->parent = this;
        input.push_back(c);
        return c;
    }

    if(child_yang_name == "output")
    {
        for(auto const & c : output)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output>();
        c->parent = this;
        output.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : input)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : output)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation>())
	,mep(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep>())
	,mip(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;

    mep->parent = this;

    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::has_operation() const
{
    return is_set(operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        children["mip"] = mip;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q>())
{
    dot1ad->parent = this;

    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::has_data() const
{
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1ad"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_data() const
{
    return cos.is_set
	|| dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dot1q.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Ad' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "dot1q"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::has_data() const
{
    return cos.is_set
	|| second_dot1q.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(second_dot1q.operation)
	|| is_set(vlan_id.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
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

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.operation)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{
    yang_name = "mep"; yang_parent_name = "cfm";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::has_data() const
{
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(mpid.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mep' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.operation)) leaf_name_data.push_back(mpid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "mpid")
    {
        mpid = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{
    yang_name = "mip"; yang_parent_name = "cfm";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::has_data() const
{
    return level.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::L2Protocol()
    :
    forward(nullptr) // presence node
	,peer(nullptr) // presence node
	,tunnel(nullptr) // presence node
{
    yang_name = "l2protocol"; yang_parent_name = "instance";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::~L2Protocol()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::has_data() const
{
    return (forward !=  nullptr && forward->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::has_operation() const
{
    return is_set(operation)
	|| (forward !=  nullptr && forward->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "peer"; yang_parent_name = "l2protocol";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::~Peer()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::get_entity_path(Entity* ancestor) const
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


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "forward"; yang_parent_name = "l2protocol";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::~Forward()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forward' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "tunnel"; yang_parent_name = "l2protocol";
}

Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Auto_()
    :
    qos(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos>())
{
    qos->parent = this;

    yang_name = "auto"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::~Auto_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::has_operation() const
{
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Auto_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Qos()
    :
    classify(nullptr) // presence node
	,trust(nullptr) // presence node
	,video(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video>())
	,voip(nullptr) // presence node
{
    video->parent = this;

    yang_name = "qos"; yang_parent_name = "auto";
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::~Qos()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::has_data() const
{
    return (classify !=  nullptr && classify->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (video !=  nullptr && video->has_data())
	|| (voip !=  nullptr && voip->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::has_operation() const
{
    return is_set(operation)
	|| (classify !=  nullptr && classify->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (video !=  nullptr && video->has_operation())
	|| (voip !=  nullptr && voip->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classify")
    {
        if(classify == nullptr)
        {
            classify = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify>();
        }
        return classify;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "video")
    {
        if(video == nullptr)
        {
            video = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video>();
        }
        return video;
    }

    if(child_yang_name == "voip")
    {
        if(voip == nullptr)
        {
            voip = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip>();
        }
        return voip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(classify != nullptr)
    {
        children["classify"] = classify;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(video != nullptr)
    {
        children["video"] = video;
    }

    if(voip != nullptr)
    {
        children["voip"] = voip;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::Classify()
    :
    police{YType::empty, "police"}
{
    yang_name = "classify"; yang_parent_name = "qos";
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::~Classify()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::has_data() const
{
    return police.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::has_operation() const
{
    return is_set(operation)
	|| is_set(police.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classify";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Classify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (police.is_set || is_set(police.operation)) leaf_name_data.push_back(police.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "police")
    {
        police = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::Trust()
    :
    cos{YType::empty, "cos"},
    dscp{YType::empty, "dscp"}
{
    yang_name = "trust"; yang_parent_name = "qos";
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::~Trust()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::has_data() const
{
    return cos.is_set
	|| dscp.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dscp.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::get_entity_path(Entity* ancestor) const
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

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::Video()
    :
    cts{YType::empty, "cts"},
    ip_camera{YType::empty, "ip-camera"},
    media_player{YType::empty, "media-player"}
{
    yang_name = "video"; yang_parent_name = "qos";
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::~Video()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::has_data() const
{
    return cts.is_set
	|| ip_camera.is_set
	|| media_player.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::has_operation() const
{
    return is_set(operation)
	|| is_set(cts.operation)
	|| is_set(ip_camera.operation)
	|| is_set(media_player.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "video";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Video' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts.is_set || is_set(cts.operation)) leaf_name_data.push_back(cts.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.operation)) leaf_name_data.push_back(ip_camera.get_name_leafdata());
    if (media_player.is_set || is_set(media_player.operation)) leaf_name_data.push_back(media_player.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cts")
    {
        cts = value;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
    }
    if(value_path == "media-player")
    {
        media_player = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::Voip()
    :
    cisco_phone{YType::empty, "cisco-phone"},
    cisco_softphone{YType::empty, "cisco-softphone"},
    trust{YType::empty, "trust"}
{
    yang_name = "voip"; yang_parent_name = "qos";
}

Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::~Voip()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::has_data() const
{
    return cisco_phone.is_set
	|| cisco_softphone.is_set
	|| trust.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco_phone.operation)
	|| is_set(cisco_softphone.operation)
	|| is_set(trust.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_phone.is_set || is_set(cisco_phone.operation)) leaf_name_data.push_back(cisco_phone.get_name_leafdata());
    if (cisco_softphone.is_set || is_set(cisco_softphone.operation)) leaf_name_data.push_back(cisco_softphone.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone = value;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Datalink()
    :
    flow(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow>())
{
    flow->parent = this;

    yang_name = "datalink"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Datalink::~Datalink()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Datalink::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Datalink::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:datalink";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Datalink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Datalink' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Datalink::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Flow()
    :
    monitor(nullptr) // presence node
{
    yang_name = "flow"; yang_parent_name = "datalink";
}

Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::~Flow()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::Monitor()
    :
    input_output{YType::enumeration, "input-output"},
    user_defined_flow{YType::str, "User-defined-flow"}
{
    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::has_data() const
{
    return input_output.is_set
	|| user_defined_flow.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::has_operation() const
{
    return is_set(operation)
	|| is_set(input_output.operation)
	|| is_set(user_defined_flow.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input_output.is_set || is_set(input_output.operation)) leaf_name_data.push_back(input_output.get_name_leafdata());
    if (user_defined_flow.is_set || is_set(user_defined_flow.operation)) leaf_name_data.push_back(user_defined_flow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input-output")
    {
        input_output = value;
    }
    if(value_path == "User-defined-flow")
    {
        user_defined_flow = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Energywise::Energywise()
    :
    activitycheck{YType::empty, "activitycheck"}
{
    yang_name = "energywise"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Energywise::~Energywise()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Energywise::has_data() const
{
    return activitycheck.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Energywise::has_operation() const
{
    return is_set(operation)
	|| is_set(activitycheck.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Energywise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Energywise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activitycheck.is_set || is_set(activitycheck.operation)) leaf_name_data.push_back(activitycheck.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Energywise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activitycheck")
    {
        activitycheck = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::Location()
    :
    civic_location_id(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId>())
{
    civic_location_id->parent = this;

    yang_name = "location"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::~Location()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::has_data() const
{
    return (civic_location_id !=  nullptr && civic_location_id->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::has_operation() const
{
    return is_set(operation)
	|| (civic_location_id !=  nullptr && civic_location_id->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:location";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Location' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location-id")
    {
        if(civic_location_id == nullptr)
        {
            civic_location_id = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId>();
        }
        return civic_location_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(civic_location_id != nullptr)
    {
        children["civic-location-id"] = civic_location_id;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Location::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::CivicLocationId()
    :
    location_identifier{YType::str, "location-identifier"}
    	,
    host(nullptr) // presence node
	,none(nullptr) // presence node
{
    yang_name = "civic-location-id"; yang_parent_name = "location";
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::~CivicLocationId()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::has_data() const
{
    return location_identifier.is_set
	|| (host !=  nullptr && host->has_data())
	|| (none !=  nullptr && none->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::has_operation() const
{
    return is_set(operation)
	|| is_set(location_identifier.operation)
	|| (host !=  nullptr && host->has_operation())
	|| (none !=  nullptr && none->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CivicLocationId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_identifier.is_set || is_set(location_identifier.operation)) leaf_name_data.push_back(location_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host>();
        }
        return host;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None>();
        }
        return none;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(none != nullptr)
    {
        children["none"] = none;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-identifier")
    {
        location_identifier = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::Host()
    :
    port_location{YType::str, "port-location"}
{
    yang_name = "host"; yang_parent_name = "civic-location-id";
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::~Host()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(port_location.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.operation)) leaf_name_data.push_back(port_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-location")
    {
        port_location = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::None()
    :
    port_location{YType::str, "port-location"}
{
    yang_name = "none"; yang_parent_name = "civic-location-id";
}

Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::~None()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::has_data() const
{
    return port_location.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::has_operation() const
{
    return is_set(operation)
	|| is_set(port_location.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'None' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.operation)) leaf_name_data.push_back(port_location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-location")
    {
        port_location = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Mac::Mac()
    :
    access_group(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "mac"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Mac::~Mac()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mac::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mac::has_operation() const
{
    return is_set(operation)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AccessGroup()
    :
    acl_name(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName>())
{
    acl_name->parent = this;

    yang_name = "access-group"; yang_parent_name = "mac";
}

Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::has_data() const
{
    return (acl_name !=  nullptr && acl_name->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (acl_name !=  nullptr && acl_name->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-name")
    {
        if(acl_name == nullptr)
        {
            acl_name = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName>();
        }
        return acl_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_name != nullptr)
    {
        children["ACL-name"] = acl_name;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::AclName()
    :
    acl_name{YType::str, "acl-name"},
    apply_to{YType::enumeration, "apply-to"}
{
    yang_name = "ACL-name"; yang_parent_name = "access-group";
}

Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::~AclName()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::has_data() const
{
    return acl_name.is_set
	|| apply_to.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(apply_to.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-name";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AclName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (apply_to.is_set || is_set(apply_to.operation)) leaf_name_data.push_back(apply_to.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "apply-to")
    {
        apply_to = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Macro::Macro()
    :
    description{YType::str, "description"}
    	,
    auto_(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Macro::~Macro()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Macro::has_data() const
{
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Macro::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Macro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macro' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Macro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::Auto_()
    :
    processing{YType::boolean, "processing"}
{
    yang_name = "auto"; yang_parent_name = "macro";
}

Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::~Auto_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::has_data() const
{
    return processing.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(processing.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.operation)) leaf_name_data.push_back(processing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processing")
    {
        processing = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{
    yang_name = "dual-active"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::DualActive::~DualActive()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::DualActive::has_data() const
{
    return fast_hello.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::DualActive::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_hello.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::DualActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DualActive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.operation)) leaf_name_data.push_back(fast_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::DualActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{
    yang_name = "lldp"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Lldp::~Lldp()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Lldp::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(transmit.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:lldp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "transmit")
    {
        transmit = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "load-balancing"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::has_data() const
{
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(flow.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalancing' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::VlanRange()
    :
    id{YType::str, "id"}
    	,
    service_policy(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "vlan-range"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::~VlanRange()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::has_data() const
{
    return id.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan-range" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "vlan-range";
}

Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Switch::Switch()
    :
    virtual_(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_>())
{
    virtual_->parent = this;

    yang_name = "switch"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switch::~Switch()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switch::has_data() const
{
    return (virtual_ !=  nullptr && virtual_->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switch::has_operation() const
{
    return is_set(operation)
	|| (virtual_ !=  nullptr && virtual_->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switch' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual")
    {
        if(virtual_ == nullptr)
        {
            virtual_ = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_>();
        }
        return virtual_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_ != nullptr)
    {
        children["virtual"] = virtual_;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switch::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::Virtual_()
    :
    link{YType::uint8, "link"}
{
    yang_name = "virtual"; yang_parent_name = "switch";
}

Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::~Virtual_()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::has_data() const
{
    return link.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::has_operation() const
{
    return is_set(operation)
	|| is_set(link.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Virtual_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link")
    {
        link = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::SrrQueue()
    :
    bandwidth(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "srr-queue"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::~SrrQueue()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::has_data() const
{
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::has_operation() const
{
    return is_set(operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:srr-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrrQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Bandwidth()
    :
    shape(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape>())
	,share(std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share>())
{
    shape->parent = this;

    share->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "srr-queue";
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::has_data() const
{
    return (shape !=  nullptr && shape->has_data())
	|| (share !=  nullptr && share->has_data());
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| (shape !=  nullptr && shape->has_operation())
	|| (share !=  nullptr && share->has_operation());
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "share")
    {
        if(share == nullptr)
        {
            share = std::make_shared<Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share>();
        }
        return share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(share != nullptr)
    {
        children["share"] = share;
    }

    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::Shape()
    :
    weight1{YType::uint16, "weight1"},
    weight2{YType::uint16, "weight2"},
    weight3{YType::uint16, "weight3"},
    weight4{YType::uint16, "weight4"}
{
    yang_name = "shape"; yang_parent_name = "bandwidth";
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::~Shape()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::has_data() const
{
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(weight1.operation)
	|| is_set(weight2.operation)
	|| is_set(weight3.operation)
	|| is_set(weight4.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.operation)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.operation)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.operation)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.operation)) leaf_name_data.push_back(weight4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight1")
    {
        weight1 = value;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::Share()
    :
    weight1{YType::uint8, "weight1"},
    weight2{YType::uint8, "weight2"},
    weight3{YType::uint8, "weight3"},
    weight4{YType::uint8, "weight4"}
{
    yang_name = "share"; yang_parent_name = "bandwidth";
}

Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::~Share()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::has_data() const
{
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::has_operation() const
{
    return is_set(operation)
	|| is_set(weight1.operation)
	|| is_set(weight2.operation)
	|| is_set(weight3.operation)
	|| is_set(weight4.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "share";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Share' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.operation)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.operation)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.operation)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.operation)) leaf_name_data.push_back(weight4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight1")
    {
        weight1 = value;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
    }
}

Native::Interface::PortChannelSubinterface::PortChannel::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
{
    yang_name = "macsec"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannelSubinterface::PortChannel::Macsec::~Macsec()
{
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Macsec::has_data() const
{
    return network_link.is_set;
}

bool Native::Interface::PortChannelSubinterface::PortChannel::Macsec::has_operation() const
{
    return is_set(operation)
	|| is_set(network_link.operation);
}

std::string Native::Interface::PortChannelSubinterface::PortChannel::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannelSubinterface::PortChannel::Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.operation)) leaf_name_data.push_back(network_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannelSubinterface::PortChannel::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannelSubinterface::PortChannel::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannelSubinterface::PortChannel::Macsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-link")
    {
        network_link = value;
    }
}

Native::Interface::Pseudowire::Pseudowire()
    :
    name{YType::uint32, "name"},
    control_word{YType::empty, "Cisco-IOS-XE-l2vpn:control-word"},
    encapsulation{YType::enumeration, "Cisco-IOS-XE-l2vpn:encapsulation"},
    interworking{YType::enumeration, "Cisco-IOS-XE-l2vpn:interworking"},
    sequencing{YType::enumeration, "Cisco-IOS-XE-l2vpn:sequencing"}
    	,
    ip(std::make_shared<Native::Interface::Pseudowire::Ip>())
	,load_balance(std::make_shared<Native::Interface::Pseudowire::LoadBalance>())
	,monitor(std::make_shared<Native::Interface::Pseudowire::Monitor>())
	,preferred_path(std::make_shared<Native::Interface::Pseudowire::PreferredPath>())
	,protocol_l2tpv2(std::make_shared<Native::Interface::Pseudowire::ProtocolL2Tpv2>())
	,protocol_l2tpv3(std::make_shared<Native::Interface::Pseudowire::ProtocolL2Tpv3>())
	,protocol_mpls(std::make_shared<Native::Interface::Pseudowire::ProtocolMpls>())
	,status(nullptr) // presence node
	,switching(std::make_shared<Native::Interface::Pseudowire::Switching>())
{
    ip->parent = this;

    load_balance->parent = this;

    monitor->parent = this;

    preferred_path->parent = this;

    protocol_l2tpv2->parent = this;

    protocol_l2tpv3->parent = this;

    protocol_mpls->parent = this;

    switching->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "interface";
}

Native::Interface::Pseudowire::~Pseudowire()
{
}

bool Native::Interface::Pseudowire::has_data() const
{
    return name.is_set
	|| control_word.is_set
	|| encapsulation.is_set
	|| interworking.is_set
	|| sequencing.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_data())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_data())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (switching !=  nullptr && switching->has_data());
}

bool Native::Interface::Pseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(control_word.operation)
	|| is_set(encapsulation.operation)
	|| is_set(interworking.operation)
	|| is_set(sequencing.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (protocol_l2tpv2 !=  nullptr && protocol_l2tpv2->has_operation())
	|| (protocol_l2tpv3 !=  nullptr && protocol_l2tpv3->has_operation())
	|| (protocol_mpls !=  nullptr && protocol_mpls->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (switching !=  nullptr && switching->has_operation());
}

std::string Native::Interface::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::get_entity_path(Entity* ancestor) const
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
    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Pseudowire::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Interface::Pseudowire::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::Pseudowire::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<Native::Interface::Pseudowire::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "protocol-l2tpv2")
    {
        if(protocol_l2tpv2 == nullptr)
        {
            protocol_l2tpv2 = std::make_shared<Native::Interface::Pseudowire::ProtocolL2Tpv2>();
        }
        return protocol_l2tpv2;
    }

    if(child_yang_name == "protocol-l2tpv3")
    {
        if(protocol_l2tpv3 == nullptr)
        {
            protocol_l2tpv3 = std::make_shared<Native::Interface::Pseudowire::ProtocolL2Tpv3>();
        }
        return protocol_l2tpv3;
    }

    if(child_yang_name == "protocol-mpls")
    {
        if(protocol_mpls == nullptr)
        {
            protocol_mpls = std::make_shared<Native::Interface::Pseudowire::ProtocolMpls>();
        }
        return protocol_mpls;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Interface::Pseudowire::Status>();
        }
        return status;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<Native::Interface::Pseudowire::Switching>();
        }
        return switching;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(protocol_l2tpv2 != nullptr)
    {
        children["protocol-l2tpv2"] = protocol_l2tpv2;
    }

    if(protocol_l2tpv3 != nullptr)
    {
        children["protocol-l2tpv3"] = protocol_l2tpv3;
    }

    if(protocol_mpls != nullptr)
    {
        children["protocol-mpls"] = protocol_mpls;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(switching != nullptr)
    {
        children["switching"] = switching;
    }

    return children;
}

void Native::Interface::Pseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "control-word")
    {
        control_word = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
}

Native::Interface::Pseudowire::Ip::Ip()
    :
    protocol{YType::enumeration, "protocol"},
    ttl{YType::uint8, "ttl"}
    	,
    dfbit(std::make_shared<Native::Interface::Pseudowire::Ip::Dfbit>())
	,local(std::make_shared<Native::Interface::Pseudowire::Ip::Local>())
	,pmtu(nullptr) // presence node
	,tos(std::make_shared<Native::Interface::Pseudowire::Ip::Tos>())
{
    dfbit->parent = this;

    local->parent = this;

    tos->parent = this;

    yang_name = "ip"; yang_parent_name = "pseudowire";
}

Native::Interface::Pseudowire::Ip::~Ip()
{
}

bool Native::Interface::Pseudowire::Ip::has_data() const
{
    return protocol.is_set
	|| ttl.is_set
	|| (dfbit !=  nullptr && dfbit->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (pmtu !=  nullptr && pmtu->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::Interface::Pseudowire::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation)
	|| is_set(ttl.operation)
	|| (dfbit !=  nullptr && dfbit->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (pmtu !=  nullptr && pmtu->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::Interface::Pseudowire::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::get_entity_path(Entity* ancestor) const
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

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dfbit")
    {
        if(dfbit == nullptr)
        {
            dfbit = std::make_shared<Native::Interface::Pseudowire::Ip::Dfbit>();
        }
        return dfbit;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Interface::Pseudowire::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "pmtu")
    {
        if(pmtu == nullptr)
        {
            pmtu = std::make_shared<Native::Interface::Pseudowire::Ip::Pmtu>();
        }
        return pmtu;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::Interface::Pseudowire::Ip::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dfbit != nullptr)
    {
        children["dfbit"] = dfbit;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(pmtu != nullptr)
    {
        children["pmtu"] = pmtu;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Native::Interface::Pseudowire::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::Interface::Pseudowire::Ip::Dfbit::Dfbit()
    :
    set{YType::empty, "set"}
{
    yang_name = "dfbit"; yang_parent_name = "ip";
}

Native::Interface::Pseudowire::Ip::Dfbit::~Dfbit()
{
}

bool Native::Interface::Pseudowire::Ip::Dfbit::has_data() const
{
    return set.is_set;
}

bool Native::Interface::Pseudowire::Ip::Dfbit::has_operation() const
{
    return is_set(operation)
	|| is_set(set.operation);
}

std::string Native::Interface::Pseudowire::Ip::Dfbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dfbit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Dfbit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dfbit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set.is_set || is_set(set.operation)) leaf_name_data.push_back(set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Dfbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Dfbit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Dfbit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set")
    {
        set = value;
    }
}

Native::Interface::Pseudowire::Ip::Local::Local()
    :
    interface(std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "ip";
}

Native::Interface::Pseudowire::Ip::Local::~Local()
{
}

bool Native::Interface::Pseudowire::Ip::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Interface::Pseudowire::Ip::Local::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Interface::Pseudowire::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Interface::Pseudowire::Ip::Local::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Pseudowire::Ip::Local::Interface_::Interface_()
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
    atm_acrsubinterface(std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local";
}

Native::Interface::Pseudowire::Ip::Local::Interface_::~Interface_()
{
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::has_data() const
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

bool Native::Interface::Pseudowire::Ip::Local::Interface_::has_operation() const
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

std::string Native::Interface::Pseudowire::Ip::Local::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Local::Interface_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Local::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Local::Interface_::get_children() const
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

void Native::Interface::Pseudowire::Ip::Local::Interface_::set_value(const std::string & value_path, std::string value)
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

Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Pseudowire::Ip::Pmtu::Pmtu()
    :
    max{YType::uint16, "max"}
{
    yang_name = "pmtu"; yang_parent_name = "ip";
}

Native::Interface::Pseudowire::Ip::Pmtu::~Pmtu()
{
}

bool Native::Interface::Pseudowire::Ip::Pmtu::has_data() const
{
    return max.is_set;
}

bool Native::Interface::Pseudowire::Ip::Pmtu::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Interface::Pseudowire::Ip::Pmtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmtu";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Pmtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmtu' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Pmtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Pmtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Pmtu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Interface::Pseudowire::Ip::Tos::Tos()
    :
    reflect{YType::empty, "reflect"},
    value_{YType::uint8, "value"}
{
    yang_name = "tos"; yang_parent_name = "ip";
}

Native::Interface::Pseudowire::Ip::Tos::~Tos()
{
}

bool Native::Interface::Pseudowire::Ip::Tos::has_data() const
{
    return reflect.is_set
	|| value_.is_set;
}

bool Native::Interface::Pseudowire::Ip::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(reflect.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Pseudowire::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Ip::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflect.is_set || is_set(reflect.operation)) leaf_name_data.push_back(reflect.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::Ip::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reflect")
    {
        reflect = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Pseudowire::LoadBalance::LoadBalance()
    :
    flow(nullptr) // presence node
{
    yang_name = "load-balance"; yang_parent_name = "pseudowire";
}

Native::Interface::Pseudowire::LoadBalance::~LoadBalance()
{
}

bool Native::Interface::Pseudowire::LoadBalance::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::Pseudowire::LoadBalance::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::Pseudowire::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:load-balance";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Pseudowire::LoadBalance::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Interface::Pseudowire::LoadBalance::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Pseudowire::LoadBalance::Flow::Flow()
    :
    ethernet{YType::enumeration, "ethernet"}
{
    yang_name = "flow"; yang_parent_name = "load-balance";
}

Native::Interface::Pseudowire::LoadBalance::Flow::~Flow()
{
}

bool Native::Interface::Pseudowire::LoadBalance::Flow::has_data() const
{
    return ethernet.is_set;
}

bool Native::Interface::Pseudowire::LoadBalance::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet.operation);
}

std::string Native::Interface::Pseudowire::LoadBalance::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::LoadBalance::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.operation)) leaf_name_data.push_back(ethernet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::LoadBalance::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::LoadBalance::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Pseudowire::LoadBalance::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
    }
}

Native::Interface::Pseudowire::Monitor::Monitor()
    :
    peer(std::make_shared<Native::Interface::Pseudowire::Monitor::Peer>())
{
    peer->parent = this;

    yang_name = "monitor"; yang_parent_name = "pseudowire";
}

Native::Interface::Pseudowire::Monitor::~Monitor()
{
}

bool Native::Interface::Pseudowire::Monitor::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Interface::Pseudowire::Monitor::has_operation() const
{
    return is_set(operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Interface::Pseudowire::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Pseudowire::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Pseudowire::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Pseudowire::Monitor::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Pseudowire::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Interface::Pseudowire::Monitor::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ModeEnum::active {0, "active"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ModeEnum::auto_ {1, "auto"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ModeEnum::desirable {2, "desirable"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ModeEnum::on {3, "on"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ModeEnum::passive {4, "passive"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::ModeEnum::active {0, "active"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::ModeEnum::passive {1, "passive"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::GroupEnum::global {0, "global"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::IdEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Dot1QEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::IdEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::SecondDot1QEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::ViolationEnum::protect {0, "protect"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::ViolationEnum::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::RA {5, "RA"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::RB {6, "RB"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::RC {7, "RC"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::RD {8, "RD"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::RF {9, "RF"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::loam {16, "loam"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::stp {19, "stp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::udld {20, "udld"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::RA {5, "RA"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::RB {6, "RB"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::RC {7, "RC"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::RD {8, "RD"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::RF {9, "RF"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::loam {16, "loam"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::stp {19, "stp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::udld {20, "udld"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RA {5, "RA"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RB {6, "RB"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RC {7, "RC"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RD {8, "RD"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::RF {9, "RF"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::loam {16, "loam"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::stp {19, "stp"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::udld {20, "udld"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::InputOutputEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::InputOutputEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::ApplyToEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::ApplyToEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::Pseudowire::EncapsulationEnum::l2tpv2 {0, "l2tpv2"};
const Enum::YLeaf Native::Interface::Pseudowire::EncapsulationEnum::l2tpv3 {1, "l2tpv3"};
const Enum::YLeaf Native::Interface::Pseudowire::EncapsulationEnum::mpls {2, "mpls"};
const Enum::YLeaf Native::Interface::Pseudowire::EncapsulationEnum::udp {3, "udp"};

const Enum::YLeaf Native::Interface::Pseudowire::InterworkingEnum::ethernet {0, "ethernet"};
const Enum::YLeaf Native::Interface::Pseudowire::InterworkingEnum::ip {1, "ip"};
const Enum::YLeaf Native::Interface::Pseudowire::InterworkingEnum::vlan {2, "vlan"};

const Enum::YLeaf Native::Interface::Pseudowire::SequencingEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Pseudowire::SequencingEnum::receive {1, "receive"};
const Enum::YLeaf Native::Interface::Pseudowire::SequencingEnum::resync {2, "resync"};
const Enum::YLeaf Native::Interface::Pseudowire::SequencingEnum::transmit {3, "transmit"};

const Enum::YLeaf Native::Interface::Pseudowire::Ip::ProtocolEnum::l2tp {0, "l2tp"};
const Enum::YLeaf Native::Interface::Pseudowire::Ip::ProtocolEnum::uti {1, "uti"};

const Enum::YLeaf Native::Interface::Pseudowire::LoadBalance::Flow::EthernetEnum::dst_mac {0, "dst-mac"};
const Enum::YLeaf Native::Interface::Pseudowire::LoadBalance::Flow::EthernetEnum::src_dst_mac {1, "src-dst-mac"};
const Enum::YLeaf Native::Interface::Pseudowire::LoadBalance::Flow::EthernetEnum::src_mac {2, "src-mac"};


}
}

