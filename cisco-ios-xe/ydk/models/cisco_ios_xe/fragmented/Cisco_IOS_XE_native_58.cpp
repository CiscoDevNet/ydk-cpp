
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_58.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::TenGigabitEthernet::Ethernet::Ethernet()
    :
    oam(nullptr) // presence node
    , dot1ad(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad>())
{
    dot1ad->parent = this;

    yang_name = "ethernet"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::~Ethernet()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (oam !=  nullptr && oam->has_data())
	|| (dot1ad !=  nullptr && dot1ad->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (oam !=  nullptr && oam->has_operation())
	|| (dot1ad !=  nullptr && dot1ad->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam>();
        }
        return oam;
    }

    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad>();
        }
        return dot1ad;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oam != nullptr)
    {
        _children["oam"] = oam;
    }

    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oam" || name == "dot1ad")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::Oam()
    :
    max_rate{YType::uint8, "max-rate"},
    min_rate{YType::uint8, "min-rate"},
    mode{YType::enumeration, "mode"},
    timeout{YType::uint8, "timeout"}
        ,
    link_monitor(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor>())
    , remote_failure(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure>())
    , remote_loopback(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback>())
{
    link_monitor->parent = this;
    remote_failure->parent = this;
    remote_loopback->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::~Oam()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::has_data() const
{
    if (is_presence_container) return true;
    return max_rate.is_set
	|| min_rate.is_set
	|| mode.is_set
	|| timeout.is_set
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data())
	|| (remote_loopback !=  nullptr && remote_loopback->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_rate.yfilter)
	|| ydk::is_set(min_rate.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation())
	|| (remote_loopback !=  nullptr && remote_loopback->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_rate.is_set || is_set(max_rate.yfilter)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.yfilter)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    if(child_yang_name == "remote-loopback")
    {
        if(remote_loopback == nullptr)
        {
            remote_loopback = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback>();
        }
        return remote_loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_monitor != nullptr)
    {
        _children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        _children["remote-failure"] = remote_failure;
    }

    if(remote_loopback != nullptr)
    {
        _children["remote-loopback"] = remote_loopback;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-rate")
    {
        max_rate = value;
        max_rate.value_namespace = name_space;
        max_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
        min_rate.value_namespace = name_space;
        min_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-rate")
    {
        max_rate.yfilter = yfilter;
    }
    if(value_path == "min-rate")
    {
        min_rate.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-monitor" || name == "remote-failure" || name == "remote-loopback" || name == "max-rate" || name == "min-rate" || name == "mode" || name == "timeout")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    on{YType::empty, "on"},
    supported{YType::empty, "supported"}
        ,
    frame(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame>())
    , frame_period(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod>())
    , frame_seconds(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds>())
    , high_threshold(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold>())
    , receive_crc(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
    , symbol_period(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;
    frame_period->parent = this;
    frame_seconds->parent = this;
    high_threshold->parent = this;
    receive_crc->parent = this;
    symbol_period->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::has_data() const
{
    if (is_presence_container) return true;
    return on.is_set
	|| supported.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(supported.yfilter)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frame != nullptr)
    {
        _children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        _children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        _children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        _children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        _children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        _children["symbol-period"] = symbol_period;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frame" || name == "frame-period" || name == "frame-seconds" || name == "high-threshold" || name == "receive-crc" || name == "symbol-period" || name == "on" || name == "supported")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    thresh{YType::uint16, "thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return thresh.is_set
	|| none.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    f_thresh{YType::uint16, "f-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return f_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(f_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (f_thresh.is_set || is_set(f_thresh.yfilter)) leaf_name_data.push_back(f_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "f-thresh")
    {
        f_thresh = value;
        f_thresh.value_namespace = name_space;
        f_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "f-thresh")
    {
        f_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "f-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_thresh.is_set || is_set(e_thresh.yfilter)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-thresh")
    {
        e_thresh = value;
        e_thresh.value_namespace = name_space;
        e_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-thresh")
    {
        e_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "high-threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_thresh.is_set || is_set(crc_thresh.yfilter)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh = value;
        crc_thresh.value_namespace = name_space;
        crc_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
        ,
    threshold(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
        ,
    high(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high != nullptr)
    {
        _children["high"] = high;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(err_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.yfilter)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "err-thresh")
    {
        err_thresh = value;
        err_thresh.value_namespace = name_space;
        err_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "err-thresh")
    {
        err_thresh.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "err-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent>())
    , dying_gasp(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp>())
    , link_fault(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::has_data() const
{
    if (is_presence_container) return true;
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical_event != nullptr)
    {
        _children["critical-event"] = critical_event;
    }

    if(dying_gasp != nullptr)
    {
        _children["dying-gasp"] = dying_gasp;
    }

    if(link_fault != nullptr)
    {
        _children["link-fault"] = link_fault;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "remote-loopback"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::has_data() const
{
    if (is_presence_container) return true;
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Oam::RemoteLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported" || name == "timeout")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Dot1ad()
    :
    nni{YType::empty, "nni"}
        ,
    uni(std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni>())
{
    uni->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return nni.is_set
	|| (uni !=  nullptr && uni->has_data());
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nni.yfilter)
	|| (uni !=  nullptr && uni->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nni.is_set || is_set(nni.yfilter)) leaf_name_data.push_back(nni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(uni != nullptr)
    {
        _children["uni"] = uni;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nni")
    {
        nni = value;
        nni.value_namespace = name_space;
        nni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nni")
    {
        nni.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni" || name == "nni")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::Uni()
    :
    c_port{YType::empty, "c-port"},
    s_port{YType::empty, "s-port"}
{

    yang_name = "uni"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::~Uni()
{
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::has_data() const
{
    if (is_presence_container) return true;
    return c_port.is_set
	|| s_port.is_set;
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(c_port.yfilter)
	|| ydk::is_set(s_port.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (c_port.is_set || is_set(c_port.yfilter)) leaf_name_data.push_back(c_port.get_name_leafdata());
    if (s_port.is_set || is_set(s_port.yfilter)) leaf_name_data.push_back(s_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "c-port")
    {
        c_port = value;
        c_port.value_namespace = name_space;
        c_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s-port")
    {
        s_port = value;
        s_port.value_namespace = name_space;
        s_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "c-port")
    {
        c_port.yfilter = yfilter;
    }
    if(value_path == "s-port")
    {
        s_port.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Ethernet::Dot1ad::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "c-port" || name == "s-port")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Eapol::Eapol()
    :
    destination_address(std::make_shared<Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "eapol"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Eapol::~Eapol()
{
}

bool Native::Interface::TenGigabitEthernet::Eapol::has_data() const
{
    if (is_presence_container) return true;
    return (destination_address !=  nullptr && destination_address->has_data());
}

bool Native::Interface::TenGigabitEthernet::Eapol::has_operation() const
{
    return is_set(yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Eapol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:eapol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Eapol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Eapol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Eapol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Eapol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Eapol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Eapol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::DestinationAddress()
    :
    broadcast_address{YType::empty, "broadcast-address"}
{

    yang_name = "destination-address"; yang_parent_name = "eapol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::~DestinationAddress()
{
}

bool Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return broadcast_address.is_set;
}

bool Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_address.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_address.is_set || is_set(broadcast_address.yfilter)) leaf_name_data.push_back(broadcast_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-address")
    {
        broadcast_address = value;
        broadcast_address.value_namespace = name_space;
        broadcast_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-address")
    {
        broadcast_address.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Eapol::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-address")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "synchronous"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Synchronous::~Synchronous()
{
}

bool Native::Interface::TenGigabitEthernet::Synchronous::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Synchronous::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"},
    nonegotiate{YType::empty, "nonegotiate"}
{

    yang_name = "speed"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Speed::~Speed()
{
}

bool Native::Interface::TenGigabitEthernet::Speed::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set
	|| nonegotiate.is_set;
}

bool Native::Interface::TenGigabitEthernet::Speed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(value_10.yfilter)
	|| ydk::is_set(value_100.yfilter)
	|| ydk::is_set(value_1000.yfilter)
	|| ydk::is_set(value_10000.yfilter)
	|| ydk::is_set(nonegotiate.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:speed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Speed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (value_10.is_set || is_set(value_10.yfilter)) leaf_name_data.push_back(value_10.get_name_leafdata());
    if (value_100.is_set || is_set(value_100.yfilter)) leaf_name_data.push_back(value_100.get_name_leafdata());
    if (value_1000.is_set || is_set(value_1000.yfilter)) leaf_name_data.push_back(value_1000.get_name_leafdata());
    if (value_10000.is_set || is_set(value_10000.yfilter)) leaf_name_data.push_back(value_10000.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Speed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10")
    {
        value_10 = value;
        value_10.value_namespace = name_space;
        value_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-100")
    {
        value_100 = value;
        value_100.value_namespace = name_space;
        value_100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-1000")
    {
        value_1000 = value;
        value_1000.value_namespace = name_space;
        value_1000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-10000")
    {
        value_10000 = value;
        value_10000.value_namespace = name_space;
        value_10000.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Speed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "value-10")
    {
        value_10.yfilter = yfilter;
    }
    if(value_path == "value-100")
    {
        value_100.yfilter = yfilter;
    }
    if(value_path == "value-1000")
    {
        value_1000.yfilter = yfilter;
    }
    if(value_path == "value-10000")
    {
        value_10000.yfilter = yfilter;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Speed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "value-10" || name == "value-100" || name == "value-1000" || name == "value-10000" || name == "nonegotiate")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Negotiation::~Negotiation()
{
}

bool Native::Interface::TenGigabitEthernet::Negotiation::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Interface::TenGigabitEthernet::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Ethernet>())
    , qos(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::~Plim()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Plim::Ethernet::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::~Qos()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::has_data() const
{
    if (is_presence_container) return true;
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Queue()
    :
    zero(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero>())
    , strict_priority(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority>())
{
    zero->parent = this;
    strict_priority->parent = this;

    yang_name = "queue"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::has_data() const
{
    if (is_presence_container) return true;
    return (zero !=  nullptr && zero->has_data())
	|| (strict_priority !=  nullptr && strict_priority->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(yfilter)
	|| (zero !=  nullptr && zero->has_operation())
	|| (strict_priority !=  nullptr && strict_priority->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(zero != nullptr)
    {
        _children["zero"] = zero;
    }

    if(strict_priority != nullptr)
    {
        _children["strict-priority"] = strict_priority;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero" || name == "strict-priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::has_data() const
{
    if (is_presence_container) return true;
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::Zero::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    if (is_presence_container) return true;
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "strict-priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
        ,
    enable(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Pppoe::~Pppoe()
{
}

bool Native::Interface::TenGigabitEthernet::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::TenGigabitEthernet::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::TenGigabitEthernet::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-sessions")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{

    yang_name = "enable"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::TenGigabitEthernet::Pppoe::Enable::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::TenGigabitEthernet::Pppoe::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Pppoe::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Pppoe::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Pppoe::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Pppoe::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Service()
    :
    instance(this, {"id"})
{

    yang_name = "service"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::~Service()
{
}

bool Native::Interface::TenGigabitEthernet::Service::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    trunk{YType::empty, "trunk"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    description{YType::str, "description"},
    evc_name{YType::str, "evc-name"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"}
        ,
    encapsulation(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation>())
    , ip(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip>())
    , ipv6(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6>())
    , rewrite(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite>())
    , errdisable(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable>())
    , ethernet_container(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer>())
    , snmp(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp>())
    , bridge_domain(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain>())
    , mac(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac>())
    , service_policy(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy>())
    , cfm(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm>())
    , l2protocol(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol>())
    , xconnect(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass>())
{
    encapsulation->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    rewrite->parent = this;
    errdisable->parent = this;
    ethernet_container->parent = this;
    snmp->parent = this;
    bridge_domain->parent = this;
    mac->parent = this;
    service_policy->parent = this;
    cfm->parent = this;
    l2protocol->parent = this;
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "instance"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::~Instance()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| trunk.is_set
	|| gigabitethernet.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| description.is_set
	|| evc_name.is_set
	|| group.is_set
	|| shutdown.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ethernet_evc_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(evc_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.yfilter)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.yfilter)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol>();
        }
        return l2protocol;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(rewrite != nullptr)
    {
        _children["rewrite"] = rewrite;
    }

    if(errdisable != nullptr)
    {
        _children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        _children["ethernet-container"] = ethernet_container;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(bridge_domain != nullptr)
    {
        _children["bridge-domain"] = bridge_domain;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(cfm != nullptr)
    {
        _children["cfm"] = cfm;
    }

    if(l2protocol != nullptr)
    {
        _children["l2protocol"] = l2protocol;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name = value;
        ethernet_evc_name.value_namespace = name_space;
        ethernet_evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
        evc_name.value_namespace = name_space;
        evc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "evc-name")
    {
        evc_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "ipv6" || name == "rewrite" || name == "errdisable" || name == "ethernet-container" || name == "snmp" || name == "bridge-domain" || name == "mac" || name == "service-policy" || name == "cfm" || name == "l2protocol" || name == "xconnect" || name == "xconnect-pw-class" || name == "id" || name == "trunk" || name == "GigabitEthernet" || name == "ethernet" || name == "ethernet-evc-name" || name == "description" || name == "evc-name" || name == "group" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
        ,
    dot1ad(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q>())
    , priority_tagged(nullptr) // presence node
    , untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        _children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        _children["untagged"] = untagged;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1ad()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"}
        ,
    cos2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
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
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
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
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::~Cos2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Dot1q()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::str, "second-dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    vlan_type{YType::enumeration, "vlan-type"}
        ,
    cos2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_operation() const
{
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(etype.yfilter)
	|| ydk::is_set(exact.yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.yfilter)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
        exact.value_namespace = name_space;
        exact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
    if(value_path == "exact")
    {
        exact.yfilter = yfilter;
    }
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "second-dot1q" || name == "etype" || name == "exact" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::~Cos2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
        ,
    cos_container(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(etype.yfilter)
	|| (cos_container !=  nullptr && cos_container->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos_container != nullptr)
    {
        _children["cos-container"] = cos_container;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl>())
    , dhcp(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp>())
    , verify(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::has_data() const
{
    if (is_presence_container) return true;
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::Verify()
    :
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"},
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| vlan.is_set
	|| dhcp_snooping.is_set
	|| port_security.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping = value;
        dhcp_snooping.value_namespace = name_space;
        dhcp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping.yfilter = yfilter;
    }
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "vlan" || name == "dhcp-snooping" || name == "port-security")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::Ipv6()
    :
    traffic_filter{YType::str, "traffic-filter"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return traffic_filter.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_filter.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
        traffic_filter.value_namespace = name_space;
        traffic_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-filter")
    {
        traffic_filter.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-filter" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop>())
    , push(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push>())
    , translate(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pop != nullptr)
    {
        _children["pop"] = pop;
    }

    if(push != nullptr)
    {
        _children["push"] = push;
    }

    if(translate != nullptr)
    {
        _children["translate"] = translate;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    way{YType::enumeration, "way"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    if (is_presence_container) return true;
    return way.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(way.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "way" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
    , t1_to_2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
    , t2_to_1(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
    , t2_to_2(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    if (is_presence_container) return true;
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(t1_to_1 != nullptr)
    {
        _children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        _children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        _children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        _children["t2-to-2"] = t2_to_2;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    if (is_presence_container) return true;
    return mac_security.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi>())
    , loopback(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lmi != nullptr)
    {
        _children["lmi"] = lmi;
    }

    if(loopback != nullptr)
    {
        _children["loopback"] = loopback;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    if (is_presence_container) return true;
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ce_vlan != nullptr)
    {
        _children["ce-vlan"] = ce_vlan;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"},
    vlan_range{YType::str, "vlan-range"}
{

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| vlan_range.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| ydk::is_set(vlan_range.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());
    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "untagged")
    {
        untagged = value;
        untagged.value_namespace = name_space;
        untagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range")
    {
        vlan_range = value;
        vlan_range.value_namespace = name_space;
        vlan_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "untagged")
    {
        untagged.yfilter = yfilter;
    }
    if(value_path == "vlan-range")
    {
        vlan_range.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "default" || name == "untagged" || name == "vlan-range")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap>())
    , ifindex(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex>())
{
    trap->parent = this;
    ifindex->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (trap !=  nullptr && trap->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "ifindex")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
        ,
    split_horizon(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation = value;
        from_encapsulation.value_namespace = name_space;
        from_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
    , access_group(this, {"acl_name"})
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security>();
        }
        return security;
    }

    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "access-group")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
        ,
    maximum(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return addresses.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::ServicePolicy()
    :
    input(this, {"name"})
    , output(this, {"name"})
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input>();
        ent_->parent = this;
        input.append(ent_);
        return ent_;
    }

    if(child_yang_name == "output")
    {
        auto ent_ = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output>();
        ent_->parent = this;
        output.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : input.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : output.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation>())
    , mep(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep>())
    , mip(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        _children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        _children["mip"] = mip;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::Dot1ad()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| dot1q.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::Dot1q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::L2protocol()
    :
    discard(nullptr) // presence node
    , peer(nullptr) // presence node
    , forward(nullptr) // presence node
    , tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::~L2protocol()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(forward != nullptr)
    {
        _children["forward"] = forward;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "peer" || name == "forward" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Discard()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "discard"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::~Discard()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::~Peer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::~Forward()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::~Xconnect()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Service::Instance::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Lacp::Lacp()
    :
    port_priority{YType::uint32, "port-priority"},
    rate{YType::enumeration, "rate"}
{

    yang_name = "lacp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Lacp::~Lacp()
{
}

bool Native::Interface::TenGigabitEthernet::Lacp::has_data() const
{
    if (is_presence_container) return true;
    return port_priority.is_set
	|| rate.is_set;
}

bool Native::Interface::TenGigabitEthernet::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-priority" || name == "rate")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::CiscoIOSXEEthernetMacsecOption()
    :
    macsec(std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec>())
{
    macsec->parent = this;

    yang_name = "macsec-option"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::~CiscoIOSXEEthernetMacsecOption()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_data() const
{
    if (is_presence_container) return true;
    return (macsec !=  nullptr && macsec->has_data());
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:macsec-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec>();
        }
        return macsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec != nullptr)
    {
        _children["macsec"] = macsec;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::Macsec()
    :
    dot1q_in_clear{YType::enumeration, "dot1q-in-clear"}
        ,
    replay_protection(std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection>())
{
    replay_protection->parent = this;

    yang_name = "macsec"; yang_parent_name = "macsec-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::~Macsec()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return dot1q_in_clear.is_set
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q_in_clear.yfilter)
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q_in_clear.is_set || is_set(dot1q_in_clear.yfilter)) leaf_name_data.push_back(dot1q_in_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1q-in-clear")
    {
        dot1q_in_clear = value;
        dot1q_in_clear.value_namespace = name_space;
        dot1q_in_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1q-in-clear")
    {
        dot1q_in_clear.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-protection" || name == "dot1q-in-clear")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::ReplayProtection()
    :
    window_size{YType::uint32, "window-size"}
{

    yang_name = "replay-protection"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::~ReplayProtection()
{
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Ifindex>())
    , trap(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::~Snmp()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"},
    clear{YType::boolean, "clear"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set
	|| clear.is_set;
}

bool Native::Interface::TenGigabitEthernet::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter)
	|| ydk::is_set(clear.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist" || name == "clear")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
        ,
    link_status_capas(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::~Trap()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status_capas != nullptr)
    {
        _children["link-status-capas"] = link_status_capas;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::has_data() const
{
    if (is_presence_container) return true;
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status != nullptr)
    {
        _children["link-status"] = link_status;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{

    yang_name = "permit"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    if (is_presence_container) return true;
    return duplicates.is_set;
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    port_control{YType::enumeration, "port-control"},
    periodic{YType::empty, "periodic"},
    violation{YType::enumeration, "violation"}
        ,
    event(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event>())
    , order(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Order>())
    , priority(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Priority>())
    , timer(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer>())
{
    event->parent = this;
    order->parent = this;
    priority->parent = this;
    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::~Authentication()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return control_direction.is_set
	|| fallback.is_set
	|| host_mode.is_set
	|| open.is_set
	|| port_control.is_set
	|| periodic.is_set
	|| violation.is_set
	|| (event !=  nullptr && event->has_data())
	|| (order !=  nullptr && order->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_direction.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(open.yfilter)
	|| ydk::is_set(port_control.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.yfilter)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.yfilter)) leaf_name_data.push_back(open.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.yfilter)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(order != nullptr)
    {
        _children["order"] = order;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-direction")
    {
        control_direction = value;
        control_direction.value_namespace = name_space;
        control_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open")
    {
        open = value;
        open.value_namespace = name_space;
        open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-control")
    {
        port_control = value;
        port_control.value_namespace = name_space;
        port_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-direction")
    {
        control_direction.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
    if(value_path == "open")
    {
        open.yfilter = yfilter;
    }
    if(value_path == "port-control")
    {
        port_control.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "order" || name == "priority" || name == "timer" || name == "control-direction" || name == "fallback" || name == "host-mode" || name == "open" || name == "port-control" || name == "periodic" || name == "violation")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Event()
    :
    server(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server>())
    , fail(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Fail>())
    , no_response(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse>())
{
    server->parent = this;
    fail->parent = this;
    no_response->parent = this;

    yang_name = "event"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::~Event()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data())
	|| (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server>();
        }
        return server;
    }

    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    if(no_response != nullptr)
    {
        _children["no-response"] = no_response;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "fail" || name == "no-response")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive>())
    , dead(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead>())
{
    alive->parent = this;
    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::has_data() const
{
    if (is_presence_container) return true;
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::has_operation() const
{
    return is_set(yfilter)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alive != nullptr)
    {
        _children["alive"] = alive;
    }

    if(dead != nullptr)
    {
        _children["dead"] = dead;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alive" || name == "dead")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{

    yang_name = "action"; yang_parent_name = "alive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::has_data() const
{
    if (is_presence_container) return true;
    return reinitialize.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinitialize.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.yfilter)) leaf_name_data.push_back(reinitialize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
        reinitialize.value_namespace = name_space;
        reinitialize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinitialize")
    {
        reinitialize.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Alive::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinitialize")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
    , reinitialize(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    if(reinitialize != nullptr)
    {
        _children["reinitialize"] = reinitialize;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize" || name == "reinitialize")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(voice.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "voice")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "reinitialize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::Fail::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "order"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Order::~Order()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Order::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Order::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Order::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Order::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Order::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Order::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "priority"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Priority::~Priority()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Priority::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
        ,
    reauthenticate(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate>())
    , inactivity(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity>())
{
    reauthenticate->parent = this;
    inactivity->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::~Timer()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| (reauthenticate !=  nullptr && reauthenticate->has_data())
	|| (inactivity !=  nullptr && inactivity->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation())
	|| (inactivity !=  nullptr && inactivity->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reauthenticate != nullptr)
    {
        _children["reauthenticate"] = reauthenticate;
    }

    if(inactivity != nullptr)
    {
        _children["inactivity"] = inactivity;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthenticate" || name == "inactivity" || name == "restart")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::Reauthenticate()
    :
    value_{YType::uint16, "value"},
    server{YType::empty, "server"}
{

    yang_name = "reauthenticate"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::~Reauthenticate()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| server.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauthenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Reauthenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "server")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Inactivity()
    :
    value_(std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value>())
    , server(nullptr) // presence node
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::has_data() const
{
    if (is_presence_container) return true;
    return (value_ !=  nullptr && value_->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(yfilter)
	|| (value_ !=  nullptr && value_->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value>();
        }
        return value_;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(value_ != nullptr)
    {
        _children["value"] = value_;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "server")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::Value()
    :
    value_{YType::uint16, "value"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "value"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::~Value()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| dynamic.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "server"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set;
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Authentication::Timer::Inactivity::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Interface::TenGigabitEthernet::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{

    yang_name = "mab"; yang_parent_name = "TenGigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::TenGigabitEthernet::Mab::~Mab()
{
}

bool Native::Interface::TenGigabitEthernet::Mab::has_data() const
{
    if (is_presence_container) return true;
    return eap.is_set;
}

bool Native::Interface::TenGigabitEthernet::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Interface::TenGigabitEthernet::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TenGigabitEthernet::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TenGigabitEthernet::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TenGigabitEthernet::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::TenGigabitEthernet::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TenGigabitEthernet::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Interface::TenGigabitEthernet::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ethernet::Oam::Mode::active {0, "active"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Ethernet::Oam::Mode::passive {1, "passive"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Pppoe::Enable::Group::global {0, "global"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::SecondDot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Discard::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::L2protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Service::Instance::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Lacp::Rate::fast {0, "fast"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Lacp::Rate::normal {1, "normal"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption::Macsec::Dot1qInClear::Y_1 {0, "1"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::ControlDirection::both {0, "both"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::ControlDirection::in {1, "in"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::PortControl::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::PortControl::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::PortControl::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::Violation::replace {1, "replace"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::Violation::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::TenGigabitEthernet::Authentication::Violation::shutdown {3, "shutdown"};


}
}

