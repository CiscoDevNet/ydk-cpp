
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_27.hpp"
#include "Cisco_IOS_XE_native_28.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    f_thresh{YType::uint16, "f-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    return f_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(f_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (f_thresh.is_set || is_set(f_thresh.yfilter)) leaf_name_data.push_back(f_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "f-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_thresh.is_set || is_set(e_thresh.yfilter)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "high-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_thresh.is_set || is_set(crc_thresh.yfilter)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(err_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.yfilter)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "err-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent>())
	,dying_gasp(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp>())
	,link_fault(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::has_data() const
{
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::get_children() const
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

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "remote-loopback"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::has_data() const
{
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported" || name == "timeout")
        return true;
    return false;
}

Native::Interface::FastEthernet::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::FairQueue::~FairQueue()
{
}

bool Native::Interface::FastEthernet::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::FastEthernet::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::FastEthernet::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::FastEthernet::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::FastEthernet::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::FastEthernet::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::FastEthernet::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::FastEthernet::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::FastEthernet::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::FastEthernet::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::FastEthernet::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::FastEthernet::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::FastEthernet::HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::FastEthernet::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::FastEthernet::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::FastEthernet::InterfaceQos::InterfaceQos()
    :
    trust(std::make_shared<Native::Interface::FastEthernet::InterfaceQos::Trust>())
{
    trust->parent = this;

    yang_name = "interface_qos"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::InterfaceQos::~InterfaceQos()
{
}

bool Native::Interface::FastEthernet::InterfaceQos::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::FastEthernet::InterfaceQos::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::FastEthernet::InterfaceQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::InterfaceQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::InterfaceQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::FastEthernet::InterfaceQos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::InterfaceQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::FastEthernet::InterfaceQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::InterfaceQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::InterfaceQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::FastEthernet::InterfaceQos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "interface_qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::InterfaceQos::Trust::~Trust()
{
}

bool Native::Interface::FastEthernet::InterfaceQos::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::FastEthernet::InterfaceQos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::FastEthernet::InterfaceQos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::InterfaceQos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::InterfaceQos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::InterfaceQos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::InterfaceQos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::InterfaceQos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::InterfaceQos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ip()
    :
    admission{YType::str, "admission"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    mroute_cache{YType::boolean, "mroute-cache"},
    mtu{YType::uint16, "mtu"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
    	,
    access_group(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup>())
	,address(std::make_shared<Native::Interface::FastEthernet::Ip::Address>())
	,arp(std::make_shared<Native::Interface::FastEthernet::Ip::Arp>())
	,authentication(std::make_shared<Native::Interface::FastEthernet::Ip::Authentication>())
	,dhcp(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp>())
	,flow(std::make_shared<Native::Interface::FastEthernet::Ip::Flow>())
	,hello_interval(std::make_shared<Native::Interface::FastEthernet::Ip::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::FastEthernet::Ip::HoldTime>())
	,igmp(std::make_shared<Native::Interface::FastEthernet::Ip::Igmp>())
	,lisp(std::make_shared<Native::Interface::FastEthernet::Ip::Lisp>())
	,nat(std::make_shared<Native::Interface::FastEthernet::Ip::Nat>())
	,nbar(std::make_shared<Native::Interface::FastEthernet::Ip::Nbar>())
	,no_address(std::make_shared<Native::Interface::FastEthernet::Ip::NoAddress>())
	,ospf(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf>())
	,pim(std::make_shared<Native::Interface::FastEthernet::Ip::Pim>())
	,policy(std::make_shared<Native::Interface::FastEthernet::Ip::Policy>())
	,rip(std::make_shared<Native::Interface::FastEthernet::Ip::Rip>())
	,route_cache(nullptr) // presence node
	,route_cache_conf(std::make_shared<Native::Interface::FastEthernet::Ip::RouteCacheConf>())
	,router(std::make_shared<Native::Interface::FastEthernet::Ip::Router>())
	,rsvp(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp>())
	,summary_address(std::make_shared<Native::Interface::FastEthernet::Ip::SummaryAddress>())
	,tcp(std::make_shared<Native::Interface::FastEthernet::Ip::Tcp>())
	,verify(std::make_shared<Native::Interface::FastEthernet::Ip::Verify>())
	,virtual_reassembly(std::make_shared<Native::Interface::FastEthernet::Ip::VirtualReassembly>())
	,vrf(std::make_shared<Native::Interface::FastEthernet::Ip::Vrf>())
	,wccp(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp>())
{
    access_group->parent = this;
    address->parent = this;
    arp->parent = this;
    authentication->parent = this;
    dhcp->parent = this;
    flow->parent = this;
    hello_interval->parent = this;
    hold_time->parent = this;
    igmp->parent = this;
    lisp->parent = this;
    nat->parent = this;
    nbar->parent = this;
    no_address->parent = this;
    ospf->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    rsvp->parent = this;
    summary_address->parent = this;
    tcp->parent = this;
    verify->parent = this;
    virtual_reassembly->parent = this;
    vrf->parent = this;
    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::~Ip()
{
}

bool Native::Interface::FastEthernet::Ip::has_data() const
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
	|| unreachables.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Interface::FastEthernet::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::FastEthernet::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::FastEthernet::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FastEthernet::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::FastEthernet::Ip::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::FastEthernet::Ip::HelloInterval>();
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
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::FastEthernet::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Interface::FastEthernet::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::FastEthernet::Ip::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Interface::FastEthernet::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::FastEthernet::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::FastEthernet::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::FastEthernet::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::FastEthernet::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::FastEthernet::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::FastEthernet::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::FastEthernet::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::FastEthernet::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::FastEthernet::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::FastEthernet::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::FastEthernet::Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::FastEthernet::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::FastEthernet::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::get_children() const
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

    if(flow != nullptr)
    {
        children["flow"] = flow;
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

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
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

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
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

    if(wccp != nullptr)
    {
        children["wccp"] = wccp;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "address" || name == "arp" || name == "authentication" || name == "dhcp" || name == "flow" || name == "hello-interval" || name == "helper-address" || name == "hold-time" || name == "igmp" || name == "lisp" || name == "nat" || name == "nbar" || name == "no-address" || name == "ospf" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache" || name == "route-cache-conf" || name == "router" || name == "rsvp" || name == "summary-address" || name == "tcp" || name == "verify" || name == "virtual-reassembly" || name == "vrf" || name == "wccp" || name == "admission" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "mroute-cache" || name == "mtu" || name == "proxy-arp" || name == "redirects" || name == "unnumbered" || name == "unreachables")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::get_children() const
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

void Native::Interface::FastEthernet::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::In::In()
    :
    acl(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl>())
	,common_acl(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl>())
{
    acl->parent = this;
    common_acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::In::get_children() const
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

void Native::Interface::FastEthernet::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "common-acl")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::Out::Out()
    :
    acl(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl>())
	,common_acl(std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl>())
{
    acl->parent = this;
    common_acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::Out::get_children() const
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

void Native::Interface::FastEthernet::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "common-acl")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    dhcp(nullptr) // presence node
	,primary(std::make_shared<Native::Interface::FastEthernet::Ip::Address::Primary>())
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Address::~Address()
{
}

bool Native::Interface::FastEthernet::Ip::Address::has_data() const
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

bool Native::Interface::FastEthernet::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::FastEthernet::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::FastEthernet::Ip::Address::Primary>();
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
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Address::get_children() const
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

void Native::Interface::FastEthernet::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "primary" || name == "secondary" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::FastEthernet::Ip::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::FastEthernet::Ip::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| fortygigabitethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
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
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "FortyGigabitEthernet" || name == "GigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "vlan")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::FastEthernet::Ip::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::FastEthernet::Ip::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::FastEthernet::Ip::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::FastEthernet::Ip::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::FastEthernet::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Arp::~Arp()
{
}

bool Native::Interface::FastEthernet::Ip::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::FastEthernet::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::FastEthernet::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::FastEthernet::Ip::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::FastEthernet::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::FastEthernet::Ip::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::FastEthernet::Ip::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::FastEthernet::Ip::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::FastEthernet::Ip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::FastEthernet::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::FastEthernet::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Authentication::get_children() const
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

void Native::Interface::FastEthernet::Ip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::FastEthernet::Ip::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::FastEthernet::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::FastEthernet::Ip::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::FastEthernet::Ip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping>())
{
    client->parent = this;
    relay->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::get_children() const
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

void Native::Interface::FastEthernet::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "relay" || name == "snooping")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "source-interface")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_action.yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.yfilter)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::get_children() const
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

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check-reply" || name == "option" || name == "option-insert" || name == "policy-action" || name == "trusted")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{

    yang_name = "check-reply"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::CheckReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{

    yang_name = "option-insert"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::OptionInsert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit>();
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
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::get_children() const
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

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "vlan" || name == "trust")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Vlan()
    :
    id{YType::uint16, "id"}
    	,
    information(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::~Vlan()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::has_data() const
{
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Information()
    :
    option(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::~Information()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::~Option()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_data() const
{
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format_type != nullptr)
    {
        children["format-type"] = format_type;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-type")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_data() const
{
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_operation() const
{
    return is_set(yfilter)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{

    yang_name = "circuit-id"; yang_parent_name = "format-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_data() const
{
    return string.is_set;
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Flow::Flow()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Flow::~Flow()
{
}

bool Native::Interface::FastEthernet::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return egress.is_set
	|| ingress.is_set;
}

bool Native::Interface::FastEthernet::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "egress" || name == "ingress")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    multicast{YType::empty, "multicast"},
    output{YType::empty, "output"},
    unicast{YType::empty, "unicast"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::FastEthernet::Ip::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| multicast.is_set
	|| output.is_set
	|| unicast.is_set;
}

bool Native::Interface::FastEthernet::Ip::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        for(auto const & c : sampler)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler>();
        c->parent = this;
        sampler.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sampler)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampler" || name == "name" || name == "input" || name == "multicast" || name == "output" || name == "unicast")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "sampler"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::FastEthernet::Ip::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::FastEthernet::Ip::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::FastEthernet::Ip::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::FastEthernet::Ip::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::FastEthernet::Ip::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::FastEthernet::Ip::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Igmp::Igmp()
    :
    version{YType::uint8, "version"}
    	,
    static_group(std::make_shared<Native::Interface::FastEthernet::Ip::Igmp::StaticGroup>())
{
    static_group->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Igmp::~Igmp()
{
}

bool Native::Interface::FastEthernet::Ip::Igmp::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    return version.is_set
	|| (static_group !=  nullptr && static_group->has_data());
}

bool Native::Interface::FastEthernet::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (static_group !=  nullptr && static_group->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Igmp::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group")
    {
        if(static_group == nullptr)
        {
            static_group = std::make_shared<Native::Interface::FastEthernet::Ip::Igmp::StaticGroup>();
        }
        return static_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_group != nullptr)
    {
        children["static-group"] = static_group;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join-group" || name == "static-group" || name == "version")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::JoinGroup()
    :
    ip_group_address{YType::str, "ip-group-address"},
    source{YType::str, "source"}
{

    yang_name = "join-group"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::~JoinGroup()
{
}

bool Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::has_data() const
{
    return ip_group_address.is_set
	|| source.is_set;
}

bool Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_group_address.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[ip-group-address='" <<ip_group_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_group_address.is_set || is_set(ip_group_address.yfilter)) leaf_name_data.push_back(ip_group_address.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address = value;
        ip_group_address.value_namespace = name_space;
        ip_group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Igmp::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-group-address" || name == "source")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::StaticGroup()
{

    yang_name = "static-group"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::~StaticGroup()
{
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<groups.size(); index++)
    {
        if(groups[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<groups.size(); index++)
    {
        if(groups[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "groups")
    {
        for(auto const & c : groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups>();
        c->parent = this;
        groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map" || name == "groups")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::ClassMap()
    :
    id{YType::str, "id"}
{

    yang_name = "class-map"; yang_parent_name = "static-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::~ClassMap()
{
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::has_data() const
{
    return id.is_set;
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::Groups()
    :
    name{YType::str, "name"}
{

    yang_name = "groups"; yang_parent_name = "static-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::~Groups()
{
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::has_data() const
{
    return name.is_set;
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Lisp::Lisp()
    :
    source_locator{YType::str, "source-locator"}
{

    yang_name = "lisp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Lisp::~Lisp()
{
}

bool Native::Interface::FastEthernet::Ip::Lisp::has_data() const
{
    return source_locator.is_set;
}

bool Native::Interface::FastEthernet::Ip::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_locator.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_locator.is_set || is_set(source_locator.yfilter)) leaf_name_data.push_back(source_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-locator")
    {
        source_locator = value;
        source_locator.value_namespace = name_space;
        source_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-locator")
    {
        source_locator.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-locator")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Nat::Nat()
    :
    allow_static_host{YType::empty, "allow-static-host"},
    enable{YType::empty, "enable"},
    inside{YType::empty, "inside"},
    outside{YType::empty, "outside"}
{

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Nat::~Nat()
{
}

bool Native::Interface::FastEthernet::Ip::Nat::has_data() const
{
    return allow_static_host.is_set
	|| enable.is_set
	|| inside.is_set
	|| outside.is_set;
}

bool Native::Interface::FastEthernet::Ip::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_static_host.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(inside.yfilter)
	|| ydk::is_set(outside.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_static_host.is_set || is_set(allow_static_host.yfilter)) leaf_name_data.push_back(allow_static_host.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (inside.is_set || is_set(inside.yfilter)) leaf_name_data.push_back(inside.get_name_leafdata());
    if (outside.is_set || is_set(outside.yfilter)) leaf_name_data.push_back(outside.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-static-host")
    {
        allow_static_host = value;
        allow_static_host.value_namespace = name_space;
        allow_static_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside")
    {
        inside = value;
        inside.value_namespace = name_space;
        inside.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outside")
    {
        outside = value;
        outside.value_namespace = name_space;
        outside.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-static-host")
    {
        allow_static_host.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "inside")
    {
        inside.yfilter = yfilter;
    }
    if(value_path == "outside")
    {
        outside.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-static-host" || name == "enable" || name == "inside" || name == "outside")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Nbar::~Nbar()
{
}

bool Native::Interface::FastEthernet::Ip::Nbar::has_data() const
{
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::FastEthernet::Ip::Nbar::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_discovery != nullptr)
    {
        children["protocol-discovery"] = protocol_discovery;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-discovery")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{

    yang_name = "protocol-discovery"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::has_data() const
{
    return ipv4_ipv6.is_set;
}

bool Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_ipv6.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.yfilter)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
        ipv4_ipv6.value_namespace = name_space;
        ipv4_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-ipv6")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::FastEthernet::Ip::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::FastEthernet::Ip::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::Ospf()
    :
    cost{YType::uint16, "cost"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    network{YType::enumeration, "network"},
    priority{YType::uint8, "priority"},
    resync_timeout{YType::uint32, "resync-timeout"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(nullptr) // presence node
	,authentication_key(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey>())
	,bfd(nullptr) // presence node
	,database_filter(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter>())
	,dead_interval(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DeadInterval>())
	,demand_circuit(nullptr) // presence node
	,fast_reroute(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::FastReroute>())
	,lls(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::MultiArea>())
	,prefix_suppression(nullptr) // presence node
	,ttl_security(nullptr) // presence node
{
    authentication_key->parent = this;
    database_filter->parent = this;
    dead_interval->parent = this;
    fast_reroute->parent = this;
    multi_area->parent = this;

    yang_name = "ospf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::~Ospf()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return cost.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| priority.is_set
	|| resync_timeout.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (lls !=  nullptr && lls->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Interface::FastEthernet::Ip::Ospf::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(resync_timeout.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (lls !=  nullptr && lls->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (resync_timeout.is_set || is_set(resync_timeout.yfilter)) leaf_name_data.push_back(resync_timeout.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "lls")
    {
        if(lls == nullptr)
        {
            lls = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::Lls>();
        }
        return lls;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(dead_interval != nullptr)
    {
        children["dead-interval"] = dead_interval;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(lls != nullptr)
    {
        children["lls"] = lls;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout = value;
        resync_timeout.value_namespace = name_space;
        resync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "authentication-key" || name == "bfd" || name == "database-filter" || name == "dead-interval" || name == "demand-circuit" || name == "fast-reroute" || name == "lls" || name == "message-digest-key" || name == "multi-area" || name == "prefix-suppression" || name == "process-id" || name == "ttl-security" || name == "cost" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "network" || name == "priority" || name == "resync-timeout" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"},
    null{YType::empty, "null"}
    	,
    key_chain(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::Authentication::has_data() const
{
    return message_digest.is_set
	|| null.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::FastEthernet::Ip::Ospf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "message-digest" || name == "null")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::has_data() const
{
    return name.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::empty, "all"},
    out{YType::empty, "out"}
{

    yang_name = "database-filter"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::has_data() const
{
    return all.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::DeadInterval()
    :
    value_{YType::uint32, "value"}
    	,
    minimal(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal>())
{
    minimal->parent = this;

    yang_name = "dead-interval"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::~DeadInterval()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::has_data() const
{
    return value_.is_set
	|| (minimal !=  nullptr && minimal->has_data());
}

bool Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (minimal !=  nullptr && minimal->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal>();
        }
        return minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::Minimal()
    :
    hello_multiplier{YType::uint8, "hello-multiplier"}
{

    yang_name = "minimal"; yang_parent_name = "dead-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::~Minimal()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::has_data() const
{
    return hello_multiplier.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_multiplier.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::DeadInterval::Minimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::FastReroute()
    :
    per_prefix(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::has_data() const
{
    return (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    candidate(nullptr) // presence node
	,protection(nullptr) // presence node
{

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::has_data() const
{
    return (candidate !=  nullptr && candidate->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (candidate !=  nullptr && candidate->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate")
    {
        if(candidate == nullptr)
        {
            candidate = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate>();
        }
        return candidate;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate != nullptr)
    {
        children["candidate"] = candidate;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate" || name == "protection")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::Candidate()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "candidate"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::~Candidate()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::Protection()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "protection"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::~Protection()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::Lls::Lls()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "lls"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::Lls::~Lls()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::Lls::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::Lls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::Lls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::Lls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::Lls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::Lls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::Lls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::Lls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::Lls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    id{YType::str, "id"}
{

    yang_name = "multi-area"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::MultiArea::~MultiArea()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::MultiArea::has_data() const
{
    return cost.is_set
	|| id.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "id")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    area{YType::str, "area"},
    none{YType::empty, "none"},
    secondaries{YType::empty, "secondaries"}
{

    yang_name = "process-id"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::ProcessId::~ProcessId()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::ProcessId::has_data() const
{
    return id.is_set
	|| area.is_set
	|| none.is_set
	|| secondaries.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::ProcessId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(secondaries.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (secondaries.is_set || is_set(secondaries.yfilter)) leaf_name_data.push_back(secondaries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondaries")
    {
        secondaries = value;
        secondaries.value_namespace = name_space;
        secondaries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "secondaries")
    {
        secondaries.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "area" || name == "none" || name == "secondaries")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::TtlSecurity()
    :
    diable{YType::empty, "diable"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::has_data() const
{
    return diable.is_set
	|| hops.is_set;
}

bool Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diable.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diable.is_set || is_set(diable.yfilter)) leaf_name_data.push_back(diable.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diable")
    {
        diable = value;
        diable.value_namespace = name_space;
        diable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diable")
    {
        diable.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Ospf::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diable" || name == "hops")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Pim::Pim()
    :
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    sparse_mode{YType::enumeration, "Cisco-IOS-XE-multicast:sparse-mode"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
    	,
    accept_register(std::make_shared<Native::Interface::FastEthernet::Ip::Pim::AcceptRegister>())
	,query_interval(std::make_shared<Native::Interface::FastEthernet::Ip::Pim::QueryInterval>())
{
    accept_register->parent = this;
    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Pim::~Pim()
{
}

bool Native::Interface::FastEthernet::Ip::Pim::has_data() const
{
    return dr_priority.is_set
	|| nbma_mode.is_set
	|| sparse_mode.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::FastEthernet::Ip::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(nbma_mode.yfilter)
	|| ydk::is_set(sparse_mode.yfilter)
	|| ydk::is_set(spt_threshold.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.yfilter)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (sparse_mode.is_set || is_set(sparse_mode.yfilter)) leaf_name_data.push_back(sparse_mode.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.yfilter)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::FastEthernet::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::FastEthernet::Ip::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Pim::get_children() const
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

void Native::Interface::FastEthernet::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode = value;
        nbma_mode.value_namespace = name_space;
        nbma_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode = value;
        sparse_mode.value_namespace = name_space;
        sparse_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold = value;
        spt_threshold.value_namespace = name_space;
        spt_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode.yfilter = yfilter;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode.yfilter = yfilter;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "query-interval" || name == "dr-priority" || name == "nbma-mode" || name == "sparse-mode" || name == "spt-threshold")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Pim::QueryInterval::QueryInterval()
    :
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"},
    seconds_interval{YType::uint16, "seconds-interval"}
{

    yang_name = "query-interval"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::FastEthernet::Ip::Pim::QueryInterval::has_data() const
{
    return milliseconds_interval.is_set
	|| msec.is_set
	|| seconds_interval.is_set;
}

bool Native::Interface::FastEthernet::Ip::Pim::QueryInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds_interval.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds_interval.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Pim::QueryInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds_interval.is_set || is_set(milliseconds_interval.yfilter)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds_interval.is_set || is_set(seconds_interval.yfilter)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Pim::QueryInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
        seconds_interval.value_namespace = name_space;
        seconds_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Pim::QueryInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds-interval")
    {
        seconds_interval.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Pim::QueryInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds-interval" || name == "msec" || name == "seconds-interval")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Policy::~Policy()
{
}

bool Native::Interface::FastEthernet::Ip::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::FastEthernet::Ip::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::FastEthernet::Ip::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rip::~Rip()
{
}

bool Native::Interface::FastEthernet::Ip::Rip::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FastEthernet::Ip::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::FastEthernet::Ip::Rip::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::FastEthernet::Ip::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::FastEthernet::Ip::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::FastEthernet::Ip::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::FastEthernet::Ip::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Router::~Router()
{
}

bool Native::Interface::FastEthernet::Ip::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::FastEthernet::Ip::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::FastEthernet::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::FastEthernet::Ip::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::FastEthernet::Ip::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
	,bandwidth(nullptr) // presence node
	,neighbor(nullptr) // presence node
	,precedence(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Precedence>())
	,signalling(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling>())
	,tos(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Tos>())
{
    precedence->parent = this;
    signalling->parent = this;
    tos->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::~Rsvp()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (signalling !=  nullptr && signalling->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bandwidth" || name == "neighbor" || name == "precedence" || name == "signalling" || name == "tos")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Authentication()
    :
    challenge{YType::empty, "challenge"},
    key{YType::str, "key"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Authentication::has_data() const
{
    return challenge.is_set
	|| key.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "challenge" || name == "key" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Bandwidth()
    :
    percent{YType::uint16, "percent"}
    	,
    mam(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam>())
	,value_(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_>())
{
    mam->parent = this;
    value_->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::has_data() const
{
    return percent.is_set
	|| (mam !=  nullptr && mam->has_data())
	|| (value_ !=  nullptr && value_->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| (mam !=  nullptr && mam->has_operation())
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mam")
    {
        if(mam == nullptr)
        {
            mam = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam>();
        }
        return mam;
    }

    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mam != nullptr)
    {
        children["mam"] = mam;
    }

    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mam" || name == "value" || name == "percent")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::Mam()
    :
    max_reservable_bw(nullptr) // presence node
{

    yang_name = "mam"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::~Mam()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::has_data() const
{
    return (max_reservable_bw !=  nullptr && max_reservable_bw->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::has_operation() const
{
    return is_set(yfilter)
	|| (max_reservable_bw !=  nullptr && max_reservable_bw->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-reservable-bw")
    {
        if(max_reservable_bw == nullptr)
        {
            max_reservable_bw = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw>();
        }
        return max_reservable_bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_reservable_bw != nullptr)
    {
        children["max-reservable-bw"] = max_reservable_bw;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reservable-bw")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::MaxReservableBw()
    :
    bc0{YType::uint32, "bc0"},
    bc1{YType::uint32, "bc1"},
    value_{YType::uint32, "value"}
{

    yang_name = "max-reservable-bw"; yang_parent_name = "mam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::~MaxReservableBw()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_data() const
{
    return bc0.is_set
	|| bc1.is_set
	|| value_.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc0.yfilter)
	|| ydk::is_set(bc1.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-reservable-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc0.is_set || is_set(bc0.yfilter)) leaf_name_data.push_back(bc0.get_name_leafdata());
    if (bc1.is_set || is_set(bc1.yfilter)) leaf_name_data.push_back(bc1.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc0")
    {
        bc0 = value;
        bc0.value_namespace = name_space;
        bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1")
    {
        bc1 = value;
        bc1.value_namespace = name_space;
        bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc0")
    {
        bc0.yfilter = yfilter;
    }
    if(value_path == "bc1")
    {
        bc1.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Mam::MaxReservableBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bc0" || name == "bc1" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::Value_()
    :
    sub_pool{YType::uint32, "sub-pool"},
    value_{YType::uint32, "value"}
{

    yang_name = "value"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::~Value_()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::has_data() const
{
    return sub_pool.is_set
	|| value_.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_pool.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Bandwidth::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool" || name == "value")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::Neighbor()
    :
    acl_number{YType::uint8, "acl-number"}
{

    yang_name = "neighbor"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::~Neighbor()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::has_data() const
{
    return acl_number.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Precedence::Precedence()
    :
    conform{YType::uint8, "conform"},
    exceed{YType::uint8, "exceed"}
{

    yang_name = "precedence"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Precedence::~Precedence()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Precedence::has_data() const
{
    return conform.is_set
	|| exceed.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Precedence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Precedence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Precedence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Precedence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Precedence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform" || name == "exceed")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Signalling()
    :
    dscp{YType::uint8, "dscp"}
    	,
    fast_local_repair(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair>())
	,hello(nullptr) // presence node
{
    fast_local_repair->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::has_data() const
{
    return dscp.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_local_repair != nullptr)
    {
        children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "dscp")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    wait_time{YType::uint16, "wait-time"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    return wait_time.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    dscp{YType::uint8, "dscp"},
    graceful_restart{YType::empty, "graceful-restart"}
    	,
    refresh(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh>())
	,reroute(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute>())
{
    refresh->parent = this;
    reroute->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::has_data() const
{
    return bfd.is_set
	|| dscp.is_set
	|| graceful_restart.is_set
	|| (refresh !=  nullptr && refresh->has_data())
	|| (reroute !=  nullptr && reroute->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(graceful_restart.yfilter)
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (reroute !=  nullptr && reroute->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (graceful_restart.is_set || is_set(graceful_restart.yfilter)) leaf_name_data.push_back(graceful_restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "reroute")
    {
        if(reroute == nullptr)
        {
            reroute = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute>();
        }
        return reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    if(reroute != nullptr)
    {
        children["reroute"] = reroute;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart = value;
        graceful_restart.value_namespace = name_space;
        graceful_restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "graceful-restart")
    {
        graceful_restart.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh" || name == "reroute" || name == "bfd" || name == "dscp" || name == "graceful-restart")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::~Refresh()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Reroute()
    :
    dscp{YType::uint8, "dscp"}
    	,
    refresh(std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh>())
{
    refresh->parent = this;

    yang_name = "reroute"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::~Reroute()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::has_data() const
{
    return dscp.is_set
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh" || name == "dscp")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::~Refresh()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Signalling::Hello::Reroute::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Rsvp::Tos::Tos()
    :
    conform{YType::uint8, "conform"},
    exceed{YType::uint8, "exceed"}
{

    yang_name = "tos"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Rsvp::Tos::~Tos()
{
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Tos::has_data() const
{
    return conform.is_set
	|| exceed.is_set;
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conform.yfilter)
	|| ydk::is_set(exceed.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Rsvp::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Rsvp::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conform.is_set || is_set(conform.yfilter)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.yfilter)) leaf_name_data.push_back(exceed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Rsvp::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Rsvp::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Rsvp::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conform")
    {
        conform = value;
        conform.value_namespace = name_space;
        conform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed")
    {
        exceed = value;
        exceed.value_namespace = name_space;
        exceed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Rsvp::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conform")
    {
        conform.yfilter = yfilter;
    }
    if(value_path == "exceed")
    {
        exceed.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Rsvp::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conform" || name == "exceed")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::SummaryAddress::SummaryAddress()
{

    yang_name = "summary-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::FastEthernet::Ip::SummaryAddress::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::FastEthernet::Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::FastEthernet::Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{

    yang_name = "eigrp"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::has_data() const
{
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::SummaryAddress::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ip" || name == "mask" || name == "metric")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::FastEthernet::Ip::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::FastEthernet::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Verify()
    :
    source(nullptr) // presence node
	,unicast(std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::~Verify()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::FastEthernet::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "unicast")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Source::Vlan>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::Source::~Source()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Verify::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::Vlan()
    :
    dhcp_snooping(nullptr) // presence node
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::~Vlan()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::has_data() const
{
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_snooping != nullptr)
    {
        children["dhcp-snooping"] = dhcp_snooping;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{

    yang_name = "dhcp-snooping"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_data() const
{
    return port_security.is_set;
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-security")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
	,source(std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::has_data() const
{
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::FastEthernet::Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_path != nullptr)
    {
        children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Verify::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-path" || name == "source")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::ReversePath()
{

    yang_name = "reverse-path"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::has_data() const
{
    return false;
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::ReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::Source()
    :
    allow_default{YType::empty, "allow-default"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    reachable_via{YType::enumeration, "reachable-via"}
{

    yang_name = "source"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::has_data() const
{
    return allow_default.is_set
	|| allow_self_ping.is_set
	|| reachable_via.is_set;
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_default.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(reachable_via.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default.is_set || is_set(allow_default.yfilter)) leaf_name_data.push_back(allow_default.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (reachable_via.is_set || is_set(reachable_via.yfilter)) leaf_name_data.push_back(reachable_via.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-default")
    {
        allow_default = value;
        allow_default.value_namespace = name_space;
        allow_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-via")
    {
        reachable_via = value;
        reachable_via.value_namespace = name_space;
        reachable_via.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-default")
    {
        allow_default.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "reachable-via")
    {
        reachable_via.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-default" || name == "allow-self-ping" || name == "reachable-via")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::FastEthernet::Ip::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::FastEthernet::Ip::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "max-fragments")
    {
        max_fragments = value;
        max_fragments.value_namespace = name_space;
        max_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
        max_reassemblies.value_namespace = name_space;
        max_reassemblies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "max-fragments")
    {
        max_fragments.yfilter = yfilter;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-fragments" || name == "in" || name == "max-fragments" || name == "max-reassemblies" || name == "timeout")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::FastEthernet::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::FastEthernet::Ip::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::FastEthernet::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::FastEthernet::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::FastEthernet::Ip::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::FastEthernet::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::FastEthernet::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::FastEthernet::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Wccp()
    :
    redirect(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Redirect>())
	,web_cache(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WebCache>())
{
    redirect->parent = this;
    web_cache->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::~Wccp()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return (redirect !=  nullptr && redirect->has_data())
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Redirect>();
        }
        return redirect;
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
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Wccp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "vrf" || name == "wccp-list" || name == "web-cache")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Redirect::Redirect()
    :
    exclude(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude>())
{
    exclude->parent = this;

    yang_name = "redirect"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Redirect::~Redirect()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Redirect::has_data() const
{
    return (exclude !=  nullptr && exclude->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::Ip::Wccp::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::Exclude()
    :
    in{YType::empty, "in"}
{

    yang_name = "exclude"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::~Exclude()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::has_data() const
{
    return in.is_set;
}

bool Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::Redirect::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    web_cache(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::has_data() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "name")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::Vrf::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Wccp::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "id" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::WccpList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::FastEthernet::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_listen.yfilter)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::FastEthernet::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.yfilter)) leaf_name_data.push_back(group_listen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
        group_listen.value_namespace = name_space;
        group_listen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::FastEthernet::Ip::Wccp::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-listen")
    {
        group_listen.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect" || name == "group-listen")
        return true;
    return false;
}

Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "redirect"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::FastEthernet::Ip::Wccp::WebCache::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::FastEthernet::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::FastEthernet::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "FastEthernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::IpVrf::~IpVrf()
{
}

bool Native::Interface::FastEthernet::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::FastEthernet::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::FastEthernet::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::FastEthernet::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::FastEthernet::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::FastEthernet::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::FastEthernet::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::FastEthernet::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::FastEthernet::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::FastEthernet::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::FastEthernet::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::FastEthernet::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::FastEthernet::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::FastEthernet::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::FastEthernet::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::FastEthernet::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::FastEthernet::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::FastEthernet::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::FastEthernet::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::FastEthernet::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::FastEthernet::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::FastEthernet::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::FastEthernet::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::FastEthernet::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::FastEthernet::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::FastEthernet::HoldQueue::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::FastEthernet::InterfaceQos::Trust::Device::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::PolicyAction::drop {0, "drop"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::PolicyAction::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::PolicyAction::keep {2, "keep"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Dhcp::Relay::Information::PolicyAction::replace {3, "replace"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Flow::Monitor::Sampler::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Igmp::StaticGroup::Groups::Name::Y__STAR__ {0, "*"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Ospf::Network::broadcast {0, "broadcast"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Ospf::Network::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Ospf::Network::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Ospf::Network::point_to_point {3, "point-to-point"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Pim::SparseMode::sparse_dense_mode {0, "sparse-dense-mode"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Pim::SparseMode::sparse_mode {1, "sparse-mode"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Pim::SptThreshold::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::ReachableVia::any {0, "any"};
const Enum::YLeaf Native::Interface::FastEthernet::Ip::Verify::Unicast::Source::ReachableVia::rx {1, "rx"};


}
}

