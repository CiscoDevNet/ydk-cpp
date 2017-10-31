
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_68.hpp"
#include "Cisco_IOS_XE_native_69.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_thresh.is_set || is_set(e_thresh.yfilter)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "high-threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_thresh.is_set || is_set(crc_thresh.yfilter)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(err_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.yfilter)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "err-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent>())
	,dying_gasp(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp>())
	,link_fault(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::has_data() const
{
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::get_children() const
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

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "remote-loopback"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::has_data() const
{
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Ethernet::Oam::RemoteLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported" || name == "timeout")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Negotiation::~Negotiation()
{
}

bool Native::Interface::VirtualTemplate::Negotiation::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::VirtualTemplate::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "synchronous"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Synchronous::~Synchronous()
{
}

bool Native::Interface::VirtualTemplate::Synchronous::has_data() const
{
    return mode.is_set;
}

bool Native::Interface::VirtualTemplate::Synchronous::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"},
    nonegotiate{YType::empty, "nonegotiate"}
{

    yang_name = "speed"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Speed::~Speed()
{
}

bool Native::Interface::VirtualTemplate::Speed::has_data() const
{
    return auto_.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set
	|| nonegotiate.is_set;
}

bool Native::Interface::VirtualTemplate::Speed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(value_10.yfilter)
	|| ydk::is_set(value_100.yfilter)
	|| ydk::is_set(value_1000.yfilter)
	|| ydk::is_set(value_10000.yfilter)
	|| ydk::is_set(nonegotiate.yfilter);
}

std::string Native::Interface::VirtualTemplate::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:speed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Speed::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Speed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Speed::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Speed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "value-10" || name == "value-100" || name == "value-1000" || name == "value-10000" || name == "nonegotiate")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::VirtualTemplate::Plim::Ethernet>())
	,qos(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::~Plim()
{
}

bool Native::Interface::VirtualTemplate::Plim::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::VirtualTemplate::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::get_children() const
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

void Native::Interface::VirtualTemplate::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Plim::Ethernet::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::~Qos()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::has_data() const
{
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Queue()
    :
    zero(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero>())
	,strict_priority(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority>())
{
    zero->parent = this;
    strict_priority->parent = this;

    yang_name = "queue"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::has_data() const
{
    return (zero !=  nullptr && zero->has_data())
	|| (strict_priority !=  nullptr && strict_priority->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(yfilter)
	|| (zero !=  nullptr && zero->has_operation())
	|| (strict_priority !=  nullptr && strict_priority->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(zero != nullptr)
    {
        children["zero"] = zero;
    }

    if(strict_priority != nullptr)
    {
        children["strict-priority"] = strict_priority;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero" || name == "strict-priority")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::Zero::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "strict-priority"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Plim::Qos::Input::Queue::StrictPriority::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
    	,
    enable(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Pppoe::~Pppoe()
{
}

bool Native::Interface::VirtualTemplate::Pppoe::has_data() const
{
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::VirtualTemplate::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::VirtualTemplate::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::VirtualTemplate::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-sessions")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{

    yang_name = "enable"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::VirtualTemplate::Pppoe::Enable::has_data() const
{
    return group.is_set;
}

bool Native::Interface::VirtualTemplate::Pppoe::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::VirtualTemplate::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Pppoe::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Pppoe::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Pppoe::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Pppoe::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Service()
{

    yang_name = "service"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::~Service()
{
}

bool Native::Interface::VirtualTemplate::Service::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Instance()
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
    encapsulation(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation>())
	,ip(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip>())
	,ipv6(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ipv6>())
	,rewrite(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite>())
	,errdisable(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Errdisable>())
	,ethernet_container(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer>())
	,snmp(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Snmp>())
	,bridge_domain(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain>())
	,mac(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac>())
	,service_policy(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy>())
	,cfm(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm>())
	,l2protocol(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol>())
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

    yang_name = "instance"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::~Instance()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::has_data() const
{
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
	|| (l2protocol !=  nullptr && l2protocol->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::has_operation() const
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
	|| (l2protocol !=  nullptr && l2protocol->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol>();
        }
        return l2protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        children["ethernet-container"] = ethernet_container;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(l2protocol != nullptr)
    {
        children["l2protocol"] = l2protocol;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "ipv6" || name == "rewrite" || name == "errdisable" || name == "ethernet-container" || name == "snmp" || name == "bridge-domain" || name == "mac" || name == "service-policy" || name == "cfm" || name == "l2protocol" || name == "id" || name == "trunk" || name == "GigabitEthernet" || name == "ethernet" || name == "ethernet-evc-name" || name == "description" || name == "evc-name" || name == "group" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
    	,
    dot1ad(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q>())
	,priority_tagged(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged>())
	,untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;
    priority_tagged->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::has_data() const
{
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Dot1Ad()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"}
    	,
    cos2(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::has_data() const
{
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

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::has_operation() const
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

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::~Cos2()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Dot1Q()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::str, "second-dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    vlan_type{YType::enumeration, "vlan-type"}
    	,
    cos2(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::has_data() const
{
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

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::has_operation() const
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

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "second-dot1q" || name == "etype" || name == "exact" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::~Cos2()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
    	,
    cos_container(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
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

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_container != nullptr)
    {
        children["cos-container"] = cos_container;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl>())
	,dhcp(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp>())
	,verify(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::has_data() const
{
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::has_data() const
{
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::Verify()
    :
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"},
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::has_data() const
{
    return source.is_set
	|| vlan.is_set
	|| dhcp_snooping.is_set
	|| port_security.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "vlan" || name == "dhcp-snooping" || name == "port-security")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Ipv6::Ipv6()
    :
    traffic_filter{YType::str, "traffic-filter"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ipv6::has_data() const
{
    return traffic_filter.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_filter.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-filter" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop>())
	,push(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push>())
	,translate(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    way{YType::enumeration, "way"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    return way.is_set
	|| mode.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(way.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "way" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
	,t1_to_2(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
	,t2_to_1(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
	,t2_to_2(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::has_data() const
{
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cause != nullptr)
    {
        children["cause"] = cause;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    return mac_security.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi>())
	,loopback(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ce_vlan != nullptr)
    {
        children["ce-vlan"] = ce_vlan;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"}
    	,
    vlan_range(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>())
{
    vlan_range->parent = this;

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| (vlan_range !=  nullptr && vlan_range->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| (vlan_range !=  nullptr && vlan_range->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        if(vlan_range == nullptr)
        {
            vlan_range = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange>();
        }
        return vlan_range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_range != nullptr)
    {
        children["vlan-range"] = vlan_range;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "any" || name == "default" || name == "untagged")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::VlanRange()
    :
    vlan_id{YType::uint16, "vlan-id"},
    comma{YType::uint16, "comma"},
    hyphen{YType::uint16, "hyphen"}
{

    yang_name = "vlan-range"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::~VlanRange()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_data() const
{
    return vlan_id.is_set
	|| comma.is_set
	|| hyphen.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(comma.yfilter)
	|| ydk::is_set(hyphen.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (comma.is_set || is_set(comma.yfilter)) leaf_name_data.push_back(comma.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comma")
    {
        comma = value;
        comma.value_namespace = name_space;
        comma.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "comma")
    {
        comma.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "comma" || name == "hyphen")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap>())
	,ifindex(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex>())
{
    trap->parent = this;
    ifindex->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::has_data() const
{
    return (trap !=  nullptr && trap->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "ifindex")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::has_data() const
{
    return link_status.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
    	,
    split_horizon(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::has_data() const
{
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
    	,
    maximum(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_data() const
{
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::ServicePolicy()
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_data() const
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

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_operation() const
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
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input>();
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
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output>();
        c->parent = this;
        output.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation>())
	,mep(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep>())
	,mip(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_data() const
{
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_children() const
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

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::Dot1Ad()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_data() const
{
    return vlan_id.is_set
	|| cos.is_set
	|| dot1q.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::has_data() const
{
    return vlan_id.is_set
	|| cos.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_data() const
{
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_data() const
{
    return level.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::L2Protocol()
    :
    peer(nullptr) // presence node
	,forward(nullptr) // presence node
	,tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::~L2Protocol()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "forward" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::~Peer()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::~Forward()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::has_data() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
    	,
    tlv(std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Cdp::~Cdp()
{
}

bool Native::Interface::VirtualTemplate::Cdp::has_data() const
{
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::VirtualTemplate::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "enable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::Tlv()
    :
    server_location{YType::empty, "server-location"},
    location{YType::empty, "location"}
    	,
    app(nullptr) // presence node
{

    yang_name = "tlv"; yang_parent_name = "cdp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_data() const
{
    return server_location.is_set
	|| location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_location.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cdp::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_location.is_set || is_set(server_location.yfilter)) leaf_name_data.push_back(server_location.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(app != nullptr)
    {
        children["app"] = app;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-location")
    {
        server_location = value;
        server_location.value_namespace = name_space;
        server_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-location")
    {
        server_location.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app" || name == "server-location" || name == "location")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{

    yang_name = "app"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_data() const
{
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlvtype")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::App::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlvtype")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvtype" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Snmp::~Snmp()
{
}

bool Native::Interface::VirtualTemplate::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::get_children() const
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

void Native::Interface::VirtualTemplate::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"},
    clear{YType::boolean, "clear"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_data() const
{
    return persist.is_set
	|| clear.is_set;
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter)
	|| ydk::is_set(clear.yfilter);
}

std::string Native::Interface::VirtualTemplate::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist" || name == "clear")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
    	,
    link_status_capas(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Snmp::Trap::~Trap()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_data() const
{
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status_capas != nullptr)
    {
        children["link-status-capas"] = link_status_capas;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{

    yang_name = "permit"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    return duplicates.is_set;
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Nhrp()
    :
    group{YType::str, "group"},
    route_watch{YType::boolean, "route-watch"}
    	,
    event_publisher(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::EventPublisher>())
	,map(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map>())
{
    event_publisher->parent = this;
    map->parent = this;

    yang_name = "nhrp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Nhrp::~Nhrp()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::has_data() const
{
    return group.is_set
	|| route_watch.is_set
	|| (event_publisher !=  nullptr && event_publisher->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(route_watch.yfilter)
	|| (event_publisher !=  nullptr && event_publisher->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:nhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (route_watch.is_set || is_set(route_watch.yfilter)) leaf_name_data.push_back(route_watch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-publisher")
    {
        if(event_publisher == nullptr)
        {
            event_publisher = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::EventPublisher>();
        }
        return event_publisher;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_publisher != nullptr)
    {
        children["event-publisher"] = event_publisher;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-watch")
    {
        route_watch = value;
        route_watch.value_namespace = name_space;
        route_watch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "route-watch")
    {
        route_watch.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-publisher" || name == "map" || name == "group" || name == "route-watch")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::EventPublisher::EventPublisher()
    :
    max_event_timeout{YType::uint8, "max-event-timeout"}
{

    yang_name = "event-publisher"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Nhrp::EventPublisher::~EventPublisher()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_data() const
{
    return max_event_timeout.is_set;
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_event_timeout.yfilter);
}

std::string Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-publisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_event_timeout.is_set || is_set(max_event_timeout.yfilter)) leaf_name_data.push_back(max_event_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::EventPublisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-event-timeout")
    {
        max_event_timeout = value;
        max_event_timeout.value_namespace = name_space;
        max_event_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::EventPublisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-event-timeout")
    {
        max_event_timeout.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-event-timeout")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Map()
    :
    group(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group>())
{
    group->parent = this;

    yang_name = "map"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Nhrp::Map::~Map()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Nhrp::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::Group()
{

    yang_name = "group"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::~Group()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_data() const
{
    for (std::size_t index=0; index<nhrp_name.size(); index++)
    {
        if(nhrp_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_operation() const
{
    for (std::size_t index=0; index<nhrp_name.size(); index++)
    {
        if(nhrp_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrp-name")
    {
        for(auto const & c : nhrp_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName>();
        c->parent = this;
        nhrp_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhrp_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrp-name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::NhrpName()
    :
    nhrp_name{YType::str, "nhrp-name"}
    	,
    service_policy(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "nhrp-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::~NhrpName()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_data() const
{
    return nhrp_name.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrp_name.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrp-name" <<"[nhrp-name='" <<nhrp_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrp_name.is_set || is_set(nhrp_name.yfilter)) leaf_name_data.push_back(nhrp_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrp-name")
    {
        nhrp_name = value;
        nhrp_name.value_namespace = name_space;
        nhrp_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrp-name")
    {
        nhrp_name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "nhrp-name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "nhrp-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_data() const
{
    return output.is_set;
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tunnel()
    :
    checksum{YType::empty, "checksum"},
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    entropy{YType::empty, "entropy"},
    key{YType::uint64, "key"},
    raw_packet_interface{YType::str, "raw-packet-interface"},
    snooping{YType::enumeration, "snooping"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    vrf{YType::str, "vrf"}
    	,
    tun_6rd(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd>())
	,bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Bandwidth>())
	,dst_port(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::DstPort>())
	,endpoint(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint>())
	,fixup(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Fixup>())
	,flow(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Flow>())
	,mode(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode>())
	,network_id(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::NetworkId>())
	,path_mtu_discovery(nullptr) // presence node
	,protection(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Protection>())
	,mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls>())
	,rbscp(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Rbscp>())
	,src_port(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::SrcPort>())
	,udlr(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Udlr>())
	,vlan(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Vlan>())
{
    tun_6rd->parent = this;
    bandwidth->parent = this;
    dst_port->parent = this;
    endpoint->parent = this;
    fixup->parent = this;
    flow->parent = this;
    mode->parent = this;
    network_id->parent = this;
    protection->parent = this;
    mpls->parent = this;
    rbscp->parent = this;
    src_port->parent = this;
    udlr->parent = this;
    vlan->parent = this;

    yang_name = "tunnel"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::~Tunnel()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::has_data() const
{
    return checksum.is_set
	|| source.is_set
	|| destination.is_set
	|| entropy.is_set
	|| key.is_set
	|| raw_packet_interface.is_set
	|| snooping.is_set
	|| tos.is_set
	|| ttl.is_set
	|| vrf.is_set
	|| (tun_6rd !=  nullptr && tun_6rd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data())
	|| (fixup !=  nullptr && fixup->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (network_id !=  nullptr && network_id->has_data())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (rbscp !=  nullptr && rbscp->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (udlr !=  nullptr && udlr->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(entropy.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(raw_packet_interface.yfilter)
	|| ydk::is_set(snooping.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (tun_6rd !=  nullptr && tun_6rd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (fixup !=  nullptr && fixup->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (network_id !=  nullptr && network_id->has_operation())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (rbscp !=  nullptr && rbscp->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (udlr !=  nullptr && udlr->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (entropy.is_set || is_set(entropy.yfilter)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (raw_packet_interface.is_set || is_set(raw_packet_interface.yfilter)) leaf_name_data.push_back(raw_packet_interface.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tun-6rd")
    {
        if(tun_6rd == nullptr)
        {
            tun_6rd = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd>();
        }
        return tun_6rd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::DstPort>();
        }
        return dst_port;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "fixup")
    {
        if(fixup == nullptr)
        {
            fixup = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Fixup>();
        }
        return fixup;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "network-id")
    {
        if(network_id == nullptr)
        {
            network_id = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::NetworkId>();
        }
        return network_id;
    }

    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "rbscp")
    {
        if(rbscp == nullptr)
        {
            rbscp = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Rbscp>();
        }
        return rbscp;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "udlr")
    {
        if(udlr == nullptr)
        {
            udlr = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Udlr>();
        }
        return udlr;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tun_6rd != nullptr)
    {
        children["tun-6rd"] = tun_6rd;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(dst_port != nullptr)
    {
        children["dst-port"] = dst_port;
    }

    if(endpoint != nullptr)
    {
        children["endpoint"] = endpoint;
    }

    if(fixup != nullptr)
    {
        children["fixup"] = fixup;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(network_id != nullptr)
    {
        children["network-id"] = network_id;
    }

    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(rbscp != nullptr)
    {
        children["rbscp"] = rbscp;
    }

    if(src_port != nullptr)
    {
        children["src-port"] = src_port;
    }

    if(udlr != nullptr)
    {
        children["udlr"] = udlr;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entropy")
    {
        entropy = value;
        entropy.value_namespace = name_space;
        entropy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-interface")
    {
        raw_packet_interface = value;
        raw_packet_interface.value_namespace = name_space;
        raw_packet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "entropy")
    {
        entropy.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "raw-packet-interface")
    {
        raw_packet_interface.yfilter = yfilter;
    }
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tun-6rd" || name == "bandwidth" || name == "dst-port" || name == "endpoint" || name == "fixup" || name == "flow" || name == "mode" || name == "network-id" || name == "path-mtu-discovery" || name == "protection" || name == "mpls" || name == "rbscp" || name == "src-port" || name == "udlr" || name == "vlan" || name == "checksum" || name == "source" || name == "destination" || name == "entropy" || name == "key" || name == "raw-packet-interface" || name == "snooping" || name == "tos" || name == "ttl" || name == "vrf")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Tun6rd()
    :
    br{YType::str, "br"},
    prefix{YType::str, "prefix"},
    reverse_map_check{YType::empty, "reverse-map-check"}
    	,
    ipv4(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "tun-6rd"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::~Tun6rd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_data() const
{
    return br.is_set
	|| prefix.is_set
	|| reverse_map_check.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(br.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(reverse_map_check.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tun-6rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (br.is_set || is_set(br.yfilter)) leaf_name_data.push_back(br.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (reverse_map_check.is_set || is_set(reverse_map_check.yfilter)) leaf_name_data.push_back(reverse_map_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "br")
    {
        br = value;
        br.value_namespace = name_space;
        br.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check = value;
        reverse_map_check.value_namespace = name_space;
        reverse_map_check.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "br")
    {
        br.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "br" || name == "prefix" || name == "reverse-map-check")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::Ipv4()
    :
    prefix_len{YType::uint8, "prefix-len"},
    suffix_len{YType::uint8, "suffix-len"}
{

    yang_name = "ipv4"; yang_parent_name = "tun-6rd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_data() const
{
    return prefix_len.is_set
	|| suffix_len.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(suffix_len.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (suffix_len.is_set || is_set(suffix_len.yfilter)) leaf_name_data.push_back(suffix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suffix-len")
    {
        suffix_len = value;
        suffix_len.value_namespace = name_space;
        suffix_len.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "suffix-len")
    {
        suffix_len.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-len" || name == "suffix-len")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Bandwidth::Bandwidth()
    :
    receive{YType::uint32, "receive"},
    transmit{YType::uint32, "transmit"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::DstPort::DstPort()
    :
    port_num{YType::uint16, "port-num"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "dst-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::DstPort::~DstPort()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_data() const
{
    return port_num.is_set
	|| dynamic.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::DstPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::DstPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::DstPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-num" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::Endpoint()
    :
    service_policy(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "endpoint"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::~Endpoint()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_data() const
{
    return output.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Fixup::Fixup()
    :
    nat{YType::empty, "nat"}
{

    yang_name = "fixup"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Fixup::~Fixup()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_data() const
{
    return nat.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nat.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Fixup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Fixup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nat.is_set || is_set(nat.yfilter)) leaf_name_data.push_back(nat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Fixup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Fixup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Fixup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nat")
    {
        nat = value;
        nat.value_namespace = name_space;
        nat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Fixup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nat")
    {
        nat.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Flow::Flow()
    :
    egress_records{YType::empty, "egress-records"}
{

    yang_name = "flow"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Flow::~Flow()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_data() const
{
    return egress_records.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_records.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_records.is_set || is_set(egress_records.yfilter)) leaf_name_data.push_back(egress_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-records")
    {
        egress_records = value;
        egress_records.value_namespace = name_space;
        egress_records.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-records")
    {
        egress_records.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-records")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mode()
    :
    ipv6{YType::empty, "ipv6"},
    udp{YType::enumeration, "udp"}
    	,
    ipsec(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec>())
	,mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls>())
	,ethernet(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet>())
	,gre(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre>())
	,ipip(nullptr) // presence node
	,ipv6ip(nullptr) // presence node
{
    ipsec->parent = this;
    mpls->parent = this;
    ethernet->parent = this;
    gre->parent = this;

    yang_name = "mode"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::~Mode()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_data() const
{
    return ipv6.is_set
	|| udp.is_set
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (ipip !=  nullptr && ipip->has_data())
	|| (ipv6ip !=  nullptr && ipv6ip->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (ipip !=  nullptr && ipip->has_operation())
	|| (ipv6ip !=  nullptr && ipv6ip->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "ipip")
    {
        if(ipip == nullptr)
        {
            ipip = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip>();
        }
        return ipip;
    }

    if(child_yang_name == "ipv6ip")
    {
        if(ipv6ip == nullptr)
        {
            ipv6ip = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip>();
        }
        return ipv6ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    if(ipip != nullptr)
    {
        children["ipip"] = ipip;
    }

    if(ipv6ip != nullptr)
    {
        children["ipv6ip"] = ipv6ip;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "mpls" || name == "ethernet" || name == "gre" || name == "ipip" || name == "ipv6ip" || name == "ipv6" || name == "udp")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipsec()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{

    yang_name = "ipsec"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::~Ipsec()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_children() const
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

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::~Ipv6()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::Mpls()
    :
    traffic_eng(nullptr) // presence node
{

    yang_name = "mpls"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_data() const
{
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::TrafficEng()
    :
    multilsp{YType::empty, "multilsp"}
{

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_data() const
{
    return multilsp.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multilsp.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multilsp.is_set || is_set(multilsp.yfilter)) leaf_name_data.push_back(multilsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multilsp")
    {
        multilsp = value;
        multilsp.value_namespace = name_space;
        multilsp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multilsp")
    {
        multilsp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilsp")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Ethernet()
    :
    gre{YType::enumeration, "gre"}
{

    yang_name = "ethernet"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::~Ethernet()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_data() const
{
    return gre.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre.is_set || is_set(gre.yfilter)) leaf_name_data.push_back(gre.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre")
    {
        gre = value;
        gre.value_namespace = name_space;
        gre.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre")
    {
        gre.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Gre()
    :
    ip{YType::empty, "ip"},
    ipv6{YType::empty, "ipv6"}
    	,
    multipoint(nullptr) // presence node
{

    yang_name = "gre"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::~Gre()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_data() const
{
    return ip.is_set
	|| ipv6.is_set
	|| (multipoint !=  nullptr && multipoint->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| (multipoint !=  nullptr && multipoint->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipoint")
    {
        if(multipoint == nullptr)
        {
            multipoint = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint>();
        }
        return multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipoint != nullptr)
    {
        children["multipoint"] = multipoint;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipoint" || name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::Multipoint()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "multipoint"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::~Multipoint()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_data() const
{
    return ipv6.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::Ipip()
    :
    decapsulate_any{YType::empty, "decapsulate-any"}
{

    yang_name = "ipip"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::~Ipip()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_data() const
{
    return decapsulate_any.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decapsulate_any.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decapsulate_any.is_set || is_set(decapsulate_any.yfilter)) leaf_name_data.push_back(decapsulate_any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any = value;
        decapsulate_any.value_namespace = name_space;
        decapsulate_any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decapsulate-any")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::Ipv6Ip()
    :
    auto_6rd{YType::empty, "auto-6rd"},
    auto_6to4{YType::empty, "auto-6to4"},
    isatap{YType::empty, "isatap"}
{

    yang_name = "ipv6ip"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::~Ipv6Ip()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::has_data() const
{
    return auto_6rd.is_set
	|| auto_6to4.is_set
	|| isatap.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_6rd.yfilter)
	|| ydk::is_set(auto_6to4.yfilter)
	|| ydk::is_set(isatap.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_6rd.is_set || is_set(auto_6rd.yfilter)) leaf_name_data.push_back(auto_6rd.get_name_leafdata());
    if (auto_6to4.is_set || is_set(auto_6to4.yfilter)) leaf_name_data.push_back(auto_6to4.get_name_leafdata());
    if (isatap.is_set || is_set(isatap.yfilter)) leaf_name_data.push_back(isatap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-6rd")
    {
        auto_6rd = value;
        auto_6rd.value_namespace = name_space;
        auto_6rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-6to4")
    {
        auto_6to4 = value;
        auto_6to4.value_namespace = name_space;
        auto_6to4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isatap")
    {
        isatap = value;
        isatap.value_namespace = name_space;
        isatap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-6rd")
    {
        auto_6rd.yfilter = yfilter;
    }
    if(value_path == "auto-6to4")
    {
        auto_6to4.yfilter = yfilter;
    }
    if(value_path == "isatap")
    {
        isatap.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-6rd" || name == "auto-6to4" || name == "isatap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::NetworkId()
    :
    id{YType::uint16, "id"},
    nexthop{YType::str, "nexthop"},
    qos{YType::str, "qos"},
    weight{YType::uint16, "weight"}
{

    yang_name = "network-id"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::~NetworkId()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_data() const
{
    return id.is_set
	|| nexthop.is_set
	|| qos.is_set
	|| weight.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(qos.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos")
    {
        qos = value;
        qos.value_namespace = name_space;
        qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "qos")
    {
        qos.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "nexthop" || name == "qos" || name == "weight")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::PathMtuDiscovery()
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Protection::Protection()
{

    yang_name = "protection"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Protection::~Protection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::Mpls()
    :
    traffic_eng(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng>())
{
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_data() const
{
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::TrafficEng()
    :
    load_share{YType::uint32, "load-share"},
    name{YType::str, "name"}
    	,
    affinity_mask(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask>())
	,auto_bw(nullptr) // presence node
	,autoroute(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute>())
	,backup_bw(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw>())
	,bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd>())
	,binding_sid(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid>())
	,exp(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp>())
	,exp_bundle(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle>())
	,fast_reroute(nullptr) // presence node
	,forwarding_adjacency(nullptr) // presence node
	,interface(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_>())
	,path_option(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption>())
	,path_selection(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection>())
	,priority(nullptr) // presence node
	,record_route(nullptr) // presence node
{
    affinity_mask->parent = this;
    autoroute->parent = this;
    backup_bw->parent = this;
    bandwidth->parent = this;
    bfd->parent = this;
    binding_sid->parent = this;
    exp->parent = this;
    exp_bundle->parent = this;
    interface->parent = this;
    path_option->parent = this;
    path_selection->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_data() const
{
    return load_share.is_set
	|| name.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (backup_bw !=  nullptr && backup_bw->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (exp !=  nullptr && exp->has_data())
	|| (exp_bundle !=  nullptr && exp_bundle->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (path_option !=  nullptr && path_option->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (record_route !=  nullptr && record_route->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (backup_bw !=  nullptr && backup_bw->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (exp !=  nullptr && exp->has_operation())
	|| (exp_bundle !=  nullptr && exp_bundle->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (path_option !=  nullptr && path_option->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (record_route !=  nullptr && record_route->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "backup-bw")
    {
        if(backup_bw == nullptr)
        {
            backup_bw = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw>();
        }
        return backup_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "exp")
    {
        if(exp == nullptr)
        {
            exp = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp>();
        }
        return exp;
    }

    if(child_yang_name == "exp-bundle")
    {
        if(exp_bundle == nullptr)
        {
            exp_bundle = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle>();
        }
        return exp_bundle;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "record-route")
    {
        if(record_route == nullptr)
        {
            record_route = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute>();
        }
        return record_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(autoroute != nullptr)
    {
        children["autoroute"] = autoroute;
    }

    if(backup_bw != nullptr)
    {
        children["backup-bw"] = backup_bw;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    if(exp != nullptr)
    {
        children["exp"] = exp;
    }

    if(exp_bundle != nullptr)
    {
        children["exp-bundle"] = exp_bundle;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(forwarding_adjacency != nullptr)
    {
        children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(path_option != nullptr)
    {
        children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(record_route != nullptr)
    {
        children["record-route"] = record_route;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-bw" || name == "autoroute" || name == "backup-bw" || name == "bandwidth" || name == "bfd" || name == "binding-sid" || name == "exp" || name == "exp-bundle" || name == "fast-reroute" || name == "forwarding-adjacency" || name == "interface" || name == "path-option" || name == "path-selection" || name == "priority" || name == "record-route" || name == "load-share" || name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::~AffinityMask()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    frequency{YType::uint32, "frequency"},
    collect_bw{YType::empty, "collect-bw"},
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
    	,
    overflow_limit(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit>())
{
    overflow_limit->parent = this;

    yang_name = "auto-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_data() const
{
    return frequency.is_set
	|| collect_bw.is_set
	|| adjustment_threshold.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| (overflow_limit !=  nullptr && overflow_limit->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(collect_bw.yfilter)
	|| ydk::is_set(adjustment_threshold.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| (overflow_limit !=  nullptr && overflow_limit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.yfilter)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (adjustment_threshold.is_set || is_set(adjustment_threshold.yfilter)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overflow-limit")
    {
        if(overflow_limit == nullptr)
        {
            overflow_limit = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit>();
        }
        return overflow_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(overflow_limit != nullptr)
    {
        children["overflow-limit"] = overflow_limit;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
        collect_bw.value_namespace = name_space;
        collect_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
        adjustment_threshold.value_namespace = name_space;
        adjustment_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "collect-bw")
    {
        collect_bw.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-limit" || name == "frequency" || name == "collect-bw" || name == "adjustment-threshold" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::OverflowLimit()
    :
    limit{YType::uint8, "limit"},
    overflow_threshold{YType::uint8, "overflow-threshold"}
{

    yang_name = "overflow-limit"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::~OverflowLimit()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::has_data() const
{
    return limit.is_set
	|| overflow_threshold.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "overflow-threshold")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Autoroute()
    :
    announce{YType::empty, "announce"},
    destination{YType::empty, "destination"}
    	,
    metric(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric>())
{
    metric->parent = this;

    yang_name = "autoroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::~Autoroute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_data() const
{
    return announce.is_set
	|| destination.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce.is_set || is_set(announce.yfilter)) leaf_name_data.push_back(announce.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce")
    {
        announce = value;
        announce.value_namespace = name_space;
        announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce")
    {
        announce.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "announce" || name == "destination")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::Metric()
    :
    range{YType::uint32, "range"},
    absolute{YType::uint32, "absolute"},
    relative{YType::int8, "relative"}
{

    yang_name = "metric"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::~Metric()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_data() const
{
    return range.is_set
	|| absolute.is_set
	|| relative.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(absolute.yfilter)
	|| ydk::is_set(relative.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (absolute.is_set || is_set(absolute.yfilter)) leaf_name_data.push_back(absolute.get_name_leafdata());
    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute")
    {
        absolute = value;
        absolute.value_namespace = name_space;
        absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "absolute")
    {
        absolute.yfilter = yfilter;
    }
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "absolute" || name == "relative")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::BackupBw()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    sub_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool>())
	,class_type(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType>())
	,global_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool>())
{
    sub_pool->parent = this;
    class_type->parent = this;
    global_pool->parent = this;

    yang_name = "backup-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::~BackupBw()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_data() const
{
    return bandwidth.is_set
	|| (sub_pool !=  nullptr && sub_pool->has_data())
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (sub_pool !=  nullptr && sub_pool->has_operation())
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pool")
    {
        if(sub_pool == nullptr)
        {
            sub_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool>();
        }
        return sub_pool;
    }

    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool>();
        }
        return global_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sub_pool != nullptr)
    {
        children["sub-pool"] = sub_pool;
    }

    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    if(global_pool != nullptr)
    {
        children["global-pool"] = global_pool;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool" || name == "class-type" || name == "global-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPool()
    :
    unlimited{YType::empty, "unlimited"}
    	,
    sub_pool_config(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>())
{
    sub_pool_config->parent = this;

    yang_name = "sub-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::~SubPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_data() const
{
    return unlimited.is_set
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unlimited.yfilter)
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pool-config")
    {
        if(sub_pool_config == nullptr)
        {
            sub_pool_config = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>();
        }
        return sub_pool_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sub_pool_config != nullptr)
    {
        children["sub-pool-config"] = sub_pool_config;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool-config" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::SubPoolConfig()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    class_type(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>())
	,global_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>())
{
    class_type->parent = this;
    global_pool->parent = this;

    yang_name = "sub-pool-config"; yang_parent_name = "sub-pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::~SubPoolConfig()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_data() const
{
    return bandwidth.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>();
        }
        return global_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    if(global_pool != nullptr)
    {
        children["global-pool"] = global_pool;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "global-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::ClassType()
    :
    class_type_num{YType::uint8, "class-type-num"},
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::~ClassType()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_data() const
{
    return class_type_num.is_set
	|| bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type-num" || name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_data() const
{
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::ClassType()
    :
    class_type_num{YType::uint8, "class-type-num"},
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::~ClassType()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_data() const
{
    return class_type_num.is_set
	|| bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type-num" || name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_data() const
{
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    class_type{YType::uint8, "class-type"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_data() const
{
    return bw.is_set
	|| class_type.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "class-type" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::Bfd()
    :
    sbfd{YType::str, "sbfd"}
{

    yang_name = "bfd"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::~Bfd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_data() const
{
    return sbfd.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sbfd.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sbfd.is_set || is_set(sbfd.yfilter)) leaf_name_data.push_back(sbfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sbfd")
    {
        sbfd = value;
        sbfd.value_namespace = name_space;
        sbfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sbfd")
    {
        sbfd.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbfd")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::BindingSid()
    :
    label{YType::uint32, "label"}
{

    yang_name = "binding-sid"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::~BindingSid()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_data() const
{
    return label.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::Exp()
    :
    exp_value{YType::uint8, "exp-value"},
    default_{YType::empty, "default"}
{

    yang_name = "exp"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::~Exp()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_data() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_operation() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exp_value.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    auto exp_value_name_datas = exp_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exp_value_name_datas.begin(), exp_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-value")
    {
        exp_value.append(value);
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-value")
    {
        exp_value.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-value" || name == "default")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::ExpBundle()
    :
    master{YType::empty, "master"}
    	,
    member(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member>())
{
    member->parent = this;

    yang_name = "exp-bundle"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::~ExpBundle()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_data() const
{
    return master.is_set
	|| (member !=  nullptr && member->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp-bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member" || name == "master")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::VirtualTemplate::Pppoe::Enable::Group::global {0, "global"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Dot1Q::any {0, "any"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::SecondDot1Q::any {0, "any"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::Dot1Q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2Protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Snooping::enable {0, "enable"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Udp::ip {0, "ip"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Udp::multipoint {1, "multipoint"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Gre::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Gre::ipv6 {1, "ipv6"};


}
}

