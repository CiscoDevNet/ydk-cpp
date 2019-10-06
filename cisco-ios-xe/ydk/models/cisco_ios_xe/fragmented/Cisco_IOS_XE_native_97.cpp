
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_97.hpp"
#include "Cisco_IOS_XE_native_98.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{

    yang_name = "high"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    if (is_presence_container) return true;
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(err_thresh.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.yfilter)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "err-thresh" || name == "none")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent>())
    , dying_gasp(std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp>())
    , link_fault(std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;
    dying_gasp->parent = this;
    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::has_data() const
{
    if (is_presence_container) return true;
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(yfilter)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::get_children() const
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

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical-event" || name == "dying-gasp" || name == "link-fault")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "critical-event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{

    yang_name = "dying-gasp"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "dying-gasp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{

    yang_name = "link-fault"; yang_parent_name = "remote-failure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{

    yang_name = "action"; yang_parent_name = "link-fault"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    if (is_presence_container) return true;
    return error_disable_interface.is_set;
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_disable_interface.yfilter);
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.yfilter)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
        error_disable_interface.value_namespace = name_space;
        error_disable_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-disable-interface")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "remote-loopback"; yang_parent_name = "oam"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::has_data() const
{
    if (is_presence_container) return true;
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Ethernet::Oam::RemoteLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Dot1ad::Dot1ad()
    :
    nni{YType::empty, "nni"}
        ,
    uni(std::make_shared<Native::Interface::Vlan::Ethernet::Dot1ad::Uni>())
{
    uni->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::Vlan::Ethernet::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return nni.is_set
	|| (uni !=  nullptr && uni->has_data());
}

bool Native::Interface::Vlan::Ethernet::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nni.yfilter)
	|| (uni !=  nullptr && uni->has_operation());
}

std::string Native::Interface::Vlan::Ethernet::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nni.is_set || is_set(nni.yfilter)) leaf_name_data.push_back(nni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<Native::Interface::Vlan::Ethernet::Dot1ad::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(uni != nullptr)
    {
        _children["uni"] = uni;
    }

    return _children;
}

void Native::Interface::Vlan::Ethernet::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nni")
    {
        nni = value;
        nni.value_namespace = name_space;
        nni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Ethernet::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nni")
    {
        nni.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Ethernet::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uni" || name == "nni")
        return true;
    return false;
}

Native::Interface::Vlan::Ethernet::Dot1ad::Uni::Uni()
    :
    c_port{YType::empty, "c-port"},
    s_port{YType::empty, "s-port"}
{

    yang_name = "uni"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Ethernet::Dot1ad::Uni::~Uni()
{
}

bool Native::Interface::Vlan::Ethernet::Dot1ad::Uni::has_data() const
{
    if (is_presence_container) return true;
    return c_port.is_set
	|| s_port.is_set;
}

bool Native::Interface::Vlan::Ethernet::Dot1ad::Uni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(c_port.yfilter)
	|| ydk::is_set(s_port.yfilter);
}

std::string Native::Interface::Vlan::Ethernet::Dot1ad::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Ethernet::Dot1ad::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (c_port.is_set || is_set(c_port.yfilter)) leaf_name_data.push_back(c_port.get_name_leafdata());
    if (s_port.is_set || is_set(s_port.yfilter)) leaf_name_data.push_back(s_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Ethernet::Dot1ad::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Ethernet::Dot1ad::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Ethernet::Dot1ad::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Ethernet::Dot1ad::Uni::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Ethernet::Dot1ad::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "c-port" || name == "s-port")
        return true;
    return false;
}

Native::Interface::Vlan::Eapol::Eapol()
    :
    destination_address(std::make_shared<Native::Interface::Vlan::Eapol::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "eapol"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Eapol::~Eapol()
{
}

bool Native::Interface::Vlan::Eapol::has_data() const
{
    if (is_presence_container) return true;
    return (destination_address !=  nullptr && destination_address->has_data());
}

bool Native::Interface::Vlan::Eapol::has_operation() const
{
    return is_set(yfilter)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string Native::Interface::Vlan::Eapol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:eapol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Eapol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Eapol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Interface::Vlan::Eapol::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Eapol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void Native::Interface::Vlan::Eapol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Eapol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Eapol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

Native::Interface::Vlan::Eapol::DestinationAddress::DestinationAddress()
    :
    broadcast_address{YType::empty, "broadcast-address"}
{

    yang_name = "destination-address"; yang_parent_name = "eapol"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Eapol::DestinationAddress::~DestinationAddress()
{
}

bool Native::Interface::Vlan::Eapol::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return broadcast_address.is_set;
}

bool Native::Interface::Vlan::Eapol::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast_address.yfilter);
}

std::string Native::Interface::Vlan::Eapol::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Eapol::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_address.is_set || is_set(broadcast_address.yfilter)) leaf_name_data.push_back(broadcast_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Eapol::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Eapol::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Eapol::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast-address")
    {
        broadcast_address = value;
        broadcast_address.value_namespace = name_space;
        broadcast_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Eapol::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast-address")
    {
        broadcast_address.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Eapol::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-address")
        return true;
    return false;
}

Native::Interface::Vlan::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{

    yang_name = "synchronous"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Synchronous::~Synchronous()
{
}

bool Native::Interface::Vlan::Synchronous::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool Native::Interface::Vlan::Synchronous::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"},
    nonegotiate{YType::empty, "nonegotiate"}
{

    yang_name = "speed"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Speed::~Speed()
{
}

bool Native::Interface::Vlan::Speed::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set
	|| nonegotiate.is_set;
}

bool Native::Interface::Vlan::Speed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(value_10.yfilter)
	|| ydk::is_set(value_100.yfilter)
	|| ydk::is_set(value_1000.yfilter)
	|| ydk::is_set(value_10000.yfilter)
	|| ydk::is_set(nonegotiate.yfilter);
}

std::string Native::Interface::Vlan::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:speed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Speed::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Speed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Speed::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Speed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "value-10" || name == "value-100" || name == "value-1000" || name == "value-10000" || name == "nonegotiate")
        return true;
    return false;
}

Native::Interface::Vlan::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Negotiation::~Negotiation()
{
}

bool Native::Interface::Vlan::Negotiation::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Interface::Vlan::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Vlan::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::Vlan::Plim::Ethernet>())
    , qos(std::make_shared<Native::Interface::Vlan::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::~Plim()
{
}

bool Native::Interface::Vlan::Plim::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::Vlan::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::Vlan::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Vlan::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::Vlan::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::get_children() const
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

void Native::Interface::Vlan::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::Vlan::Plim::Ethernet::Vlan_>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::Vlan::Plim::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Vlan::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Vlan::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Vlan::Plim::Ethernet::Vlan_>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::Vlan::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Ethernet::Vlan_::Vlan_()
    :
    filter(std::make_shared<Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Ethernet::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::Plim::Ethernet::Vlan_::has_data() const
{
    if (is_presence_container) return true;
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::Vlan::Plim::Ethernet::Vlan_::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::Vlan::Plim::Ethernet::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Ethernet::Vlan_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Ethernet::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Ethernet::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Native::Interface::Vlan::Plim::Ethernet::Vlan_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Ethernet::Vlan_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Ethernet::Vlan_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::~Filter()
{
}

bool Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Plim::Ethernet::Vlan_::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::Vlan::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::~Qos()
{
}

bool Native::Interface::Vlan::Plim::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::Vlan::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::Vlan::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vlan::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void Native::Interface::Vlan::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::has_data() const
{
    if (is_presence_container) return true;
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::Vlan::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::Vlan::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    return _children;
}

void Native::Interface::Vlan::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::Queue()
    :
    zero(std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero>())
    , strict_priority(std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority>())
{
    zero->parent = this;
    strict_priority->parent = this;

    yang_name = "queue"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::has_data() const
{
    if (is_presence_container) return true;
    return (zero !=  nullptr && zero->has_data())
	|| (strict_priority !=  nullptr && strict_priority->has_data());
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(yfilter)
	|| (zero !=  nullptr && zero->has_operation())
	|| (strict_priority !=  nullptr && strict_priority->has_operation());
}

std::string Native::Interface::Vlan::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::Input::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::Input::Queue::get_children() const
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

void Native::Interface::Vlan::Plim::Qos::Input::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zero" || name == "strict-priority")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::has_data() const
{
    if (is_presence_container) return true;
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    return _children;
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "zero"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::Zero::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    if (is_presence_container) return true;
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(yfilter)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pause != nullptr)
    {
        _children["pause"] = pause;
    }

    return _children;
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pause")
        return true;
    return false;
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "pause"; yang_parent_name = "strict-priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Plim::Qos::Input::Queue::StrictPriority::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
        ,
    enable(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Pppoe::~Pppoe()
{
}

bool Native::Interface::Vlan::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::Vlan::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::Vlan::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::Vlan::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void Native::Interface::Vlan::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-sessions")
        return true;
    return false;
}

Native::Interface::Vlan::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{

    yang_name = "enable"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::Vlan::Pppoe::Enable::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::Vlan::Pppoe::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::Vlan::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Pppoe::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Pppoe::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Pppoe::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Pppoe::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Service()
    :
    instance(this, {"id"})
{

    yang_name = "service"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::~Service()
{
}

bool Native::Interface::Vlan::Service::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Service::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::get_children() const
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

void Native::Interface::Vlan::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Instance()
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
    encapsulation(std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation>())
    , ip(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip>())
    , ipv6(std::make_shared<Native::Interface::Vlan::Service::Instance::Ipv6>())
    , rewrite(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite>())
    , errdisable(std::make_shared<Native::Interface::Vlan::Service::Instance::Errdisable>())
    , ethernet_container(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer>())
    , snmp(std::make_shared<Native::Interface::Vlan::Service::Instance::Snmp>())
    , bridge_domain(std::make_shared<Native::Interface::Vlan::Service::Instance::BridgeDomain>())
    , mac(std::make_shared<Native::Interface::Vlan::Service::Instance::Mac>())
    , service_policy(std::make_shared<Native::Interface::Vlan::Service::Instance::ServicePolicy>())
    , cfm(std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm>())
    , l2protocol(std::make_shared<Native::Interface::Vlan::Service::Instance::L2protocol>())
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

Native::Interface::Vlan::Service::Instance::~Instance()
{
}

bool Native::Interface::Vlan::Service::Instance::has_data() const
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
	|| (l2protocol !=  nullptr && l2protocol->has_data());
}

bool Native::Interface::Vlan::Service::Instance::has_operation() const
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

std::string Native::Interface::Vlan::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vlan::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::Vlan::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::Vlan::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::Vlan::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::Vlan::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Vlan::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::Vlan::Service::Instance::L2protocol>();
        }
        return l2protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::get_children() const
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

    return _children;
}

void Native::Interface::Vlan::Service::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "ip" || name == "ipv6" || name == "rewrite" || name == "errdisable" || name == "ethernet-container" || name == "snmp" || name == "bridge-domain" || name == "mac" || name == "service-policy" || name == "cfm" || name == "l2protocol" || name == "id" || name == "trunk" || name == "GigabitEthernet" || name == "ethernet" || name == "ethernet-evc-name" || name == "description" || name == "evc-name" || name == "group" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
        ,
    dot1ad(std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q>())
    , priority_tagged(nullptr) // presence node
    , untagged(nullptr) // presence node
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q" || name == "priority-tagged" || name == "untagged" || name == "default")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Dot1ad()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"}
        ,
    cos2(std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::has_data() const
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

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::has_operation() const
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

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "dot1q" || name == "etype" || name == "exact")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1ad"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::~Cos2()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Dot1q()
    :
    id{YType::str, "id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::str, "second-dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    vlan_type{YType::enumeration, "vlan-type"}
        ,
    cos2(std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::has_data() const
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

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::has_operation() const
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

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos2 != nullptr)
    {
        _children["cos2"] = cos2;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos2" || name == "id" || name == "cos" || name == "second-dot1q" || name == "etype" || name == "exact" || name == "vlan-type")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos2"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::~Cos2()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Cos2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
        ,
    cos_container(std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
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

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos_container != nullptr)
    {
        _children["cos-container"] = cos_container;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etype")
    {
        etype.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-container" || name == "etype")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{

    yang_name = "cos-container"; yang_parent_name = "priority-tagged"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::Untagged()
{

    yang_name = "untagged"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Encapsulation::Untagged::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Acl>())
    , dhcp(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp>())
    , verify(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Verify>())
{
    acl->parent = this;
    dhcp->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "dhcp" || name == "verify")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Acl::has_data() const
{
    if (is_presence_container) return true;
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ip::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Ip::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Ip::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(relay != nullptr)
    {
        _children["relay"] = relay;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ip::Verify::Verify()
    :
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"},
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"}
{

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::Vlan::Service::Instance::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| vlan.is_set
	|| dhcp_snooping.is_set
	|| port_security.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(dhcp_snooping.yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (dhcp_snooping.is_set || is_set(dhcp_snooping.yfilter)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "vlan" || name == "dhcp-snooping" || name == "port-security")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Ipv6::Ipv6()
    :
    traffic_filter{YType::str, "traffic-filter"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ipv6"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::Vlan::Service::Instance::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return traffic_filter.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_filter.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_filter.is_set || is_set(traffic_filter.yfilter)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-filter" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Rewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::has_data() const
{
    if (is_presence_container) return true;
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop>())
    , push(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push>())
    , translate(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;
    push->parent = this;
    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop" || name == "push" || name == "translate")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    way{YType::enumeration, "way"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "pop"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    if (is_presence_container) return true;
    return way.is_set
	|| mode.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(way.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "way" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "push"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
    , t1_to_2(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
    , t2_to_1(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
    , t2_to_2(std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;
    t1_to_2->parent = this;
    t2_to_1->parent = this;
    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    if (is_presence_container) return true;
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "t1-to-1" || name == "t1-to-2" || name == "t2-to-1" || name == "t2-to-2")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t1-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-1"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::T2To2()
    :
    dot1q{YType::uint16, "dot1q"},
    second_dot1q{YType::uint16, "second-dot1q"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "t2-to-2"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::~T2To2()
{
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_data() const
{
    if (is_presence_container) return true;
    return dot1q.is_set
	|| second_dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(second_dot1q.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "second-dot1q" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Errdisable::Errdisable()
    :
    recovery(std::make_shared<Native::Interface::Vlan::Service::Instance::Errdisable::Recovery>())
{
    recovery->parent = this;

    yang_name = "errdisable"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Errdisable::~Errdisable()
{
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Interface::Vlan::Service::Instance::Errdisable::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Recovery()
    :
    cause(std::make_shared<Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause>())
{
    cause->parent = this;

    yang_name = "recovery"; yang_parent_name = "errdisable"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::~Recovery()
{
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return (cause !=  nullptr && cause->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (cause !=  nullptr && cause->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cause")
    {
        if(cause == nullptr)
        {
            cause = std::make_shared<Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause>();
        }
        return cause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cause != nullptr)
    {
        _children["cause"] = cause;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::Cause()
    :
    mac_security{YType::uint32, "mac-security"}
{

    yang_name = "cause"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::~Cause()
{
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::has_data() const
{
    if (is_presence_container) return true;
    return mac_security.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_security.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_security.is_set || is_set(mac_security.yfilter)) leaf_name_data.push_back(mac_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-security")
    {
        mac_security = value;
        mac_security.value_namespace = name_space;
        mac_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-security")
    {
        mac_security.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Errdisable::Recovery::Cause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-security")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::EthernetContainer()
    :
    ethernet(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet>())
{
    ethernet->parent = this;

    yang_name = "ethernet-container"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::~EthernetContainer()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Ethernet()
    :
    lmi(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi>())
    , loopback(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback>())
{
    lmi->parent = this;
    loopback->parent = this;

    yang_name = "ethernet"; yang_parent_name = "ethernet-container"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::~Ethernet()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (lmi !=  nullptr && lmi->has_data())
	|| (loopback !=  nullptr && loopback->has_data());
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (lmi !=  nullptr && lmi->has_operation())
	|| (loopback !=  nullptr && loopback->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lmi")
    {
        if(lmi == nullptr)
        {
            lmi = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi>();
        }
        return lmi;
    }

    if(child_yang_name == "loopback")
    {
        if(loopback == nullptr)
        {
            loopback = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback>();
        }
        return loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::get_children() const
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

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lmi" || name == "loopback")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::Lmi()
    :
    ce_vlan(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>())
{
    ce_vlan->parent = this;

    yang_name = "lmi"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::~Lmi()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::has_data() const
{
    if (is_presence_container) return true;
    return (ce_vlan !=  nullptr && ce_vlan->has_data());
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::has_operation() const
{
    return is_set(yfilter)
	|| (ce_vlan !=  nullptr && ce_vlan->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lmi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ce-vlan")
    {
        if(ce_vlan == nullptr)
        {
            ce_vlan = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan>();
        }
        return ce_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ce_vlan != nullptr)
    {
        _children["ce-vlan"] = ce_vlan;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ce-vlan")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::CeVlan()
    :
    map(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>())
{
    map->parent = this;

    yang_name = "ce-vlan"; yang_parent_name = "lmi"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::~CeVlan()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data());
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ce-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::Map()
    :
    any{YType::empty, "any"},
    default_{YType::empty, "default"},
    untagged{YType::empty, "untagged"},
    vlan_range{YType::str, "vlan-range"}
{

    yang_name = "map"; yang_parent_name = "ce-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::~Map()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| default_.is_set
	|| untagged.is_set
	|| vlan_range.is_set;
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(untagged.yfilter)
	|| ydk::is_set(vlan_range.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (untagged.is_set || is_set(untagged.yfilter)) leaf_name_data.push_back(untagged.get_name_leafdata());
    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "default" || name == "untagged" || name == "vlan-range")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Loopback()
    :
    permit(std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>())
{
    permit->parent = this;

    yang_name = "loopback"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::~Loopback()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::Permit()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"}
{

    yang_name = "permit"; yang_parent_name = "loopback"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::~Permit()
{
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_data() const
{
    if (is_presence_container) return true;
    return external.is_set
	|| internal.is_set;
}

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Snmp::Snmp()
    :
    trap(std::make_shared<Native::Interface::Vlan::Service::Instance::Snmp::Trap>())
    , ifindex(std::make_shared<Native::Interface::Vlan::Service::Instance::Snmp::Ifindex>())
{
    trap->parent = this;
    ifindex->parent = this;

    yang_name = "snmp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Snmp::~Snmp()
{
}

bool Native::Interface::Vlan::Service::Instance::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (trap !=  nullptr && trap->has_data())
	|| (ifindex !=  nullptr && ifindex->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (trap !=  nullptr && trap->has_operation())
	|| (ifindex !=  nullptr && ifindex->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Vlan::Service::Instance::Snmp::Trap>();
        }
        return trap;
    }

    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Vlan::Service::Instance::Snmp::Ifindex>();
        }
        return ifindex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Snmp::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap" || name == "ifindex")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Snmp::Trap::Trap()
    :
    link_status{YType::empty, "link-status"}
{

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Vlan::Service::Instance::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
        ,
    split_horizon(std::make_shared<Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::Vlan::Service::Instance::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::Vlan::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
    , access_group(this, {"acl_name"})
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::Vlan::Service::Instance::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::Vlan::Service::Instance::Mac::Security>();
        }
        return security;
    }

    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Service::Instance::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Mac::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "access-group")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
        ,
    maximum(std::make_shared<Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::Vlan::Service::Instance::Mac::Security::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::Vlan::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return addresses.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::ServicePolicy::ServicePolicy()
    :
    input(this, {"name"})
    , output(this, {"name"})
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::has_data() const
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

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::has_operation() const
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

std::string Native::Interface::Vlan::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Service::Instance::ServicePolicy::Input>();
        ent_->parent = this;
        input.append(ent_);
        return ent_;
    }

    if(child_yang_name == "output")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Service::Instance::ServicePolicy::Output>();
        ent_->parent = this;
        output.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::ServicePolicy::get_children() const
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

void Native::Interface::Vlan::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation>())
    , mep(std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Mep>())
    , mip(std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Cfm::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::get_children() const
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

void Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::Dot1ad()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| dot1q.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::Dot1q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Cfm::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Mep::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Mip::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::L2protocol::L2protocol()
    :
    discard(nullptr) // presence node
    , peer(nullptr) // presence node
    , forward(nullptr) // presence node
    , tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Service::Instance::L2protocol::~L2protocol()
{
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::Vlan::Service::Instance::L2protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::L2protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::L2protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Interface::Vlan::Service::Instance::L2protocol::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Vlan::Service::Instance::L2protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::Vlan::Service::Instance::L2protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::L2protocol::get_children() const
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

void Native::Interface::Vlan::Service::Instance::L2protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Service::Instance::L2protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "peer" || name == "forward" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Discard()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "discard"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Discard::~Discard()
{
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Discard::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Discard::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::L2protocol::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::L2protocol::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::L2protocol::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::L2protocol::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Peer::~Peer()
{
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::L2protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::L2protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::L2protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::L2protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Forward::~Forward()
{
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Forward::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::L2protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::L2protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::L2protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::L2protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Vlan::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::Vlan::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::Vlan::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vlan::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
        ,
    type(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vlan::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Interface::Vlan::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::Control>())
    , performance_monitor(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor>())
    , service_chain(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_data() const
{
    if (is_presence_container) return true;
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control != nullptr)
    {
        _children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        _children["service-chain"] = service_chain;
    }

    return _children;
}

void Native::Interface::Vlan::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_data() const
{
    if (is_presence_container) return true;
    return subscriber.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input>())
    , output(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::Vlan::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Lisp::~Lisp()
{
}

bool Native::Interface::Vlan::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Vlan::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Vlan::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Vlan::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::Vlan::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::Mobility()
    :
    dynamic_eid(this, {"dynamic_eid_name"})
    , discover(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Discover>())
    , liveness(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return (discover !=  nullptr && discover->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Vlan::Lisp::Mobility::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Vlan::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(discover != nullptr)
    {
        _children["discover"] = discover;
    }

    if(liveness != nullptr)
    {
        _children["liveness"] = liveness;
    }

    return _children;
}

void Native::Interface::Vlan::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"}
        ,
    nbr_proxy_reply(nullptr) // presence node
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_eid_name.is_set
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_data());
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_operation());
}

std::string Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(dynamic_eid_name, "dynamic-eid-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-proxy-reply")
    {
        if(nbr_proxy_reply == nullptr)
        {
            nbr_proxy_reply = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply>();
        }
        return nbr_proxy_reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_proxy_reply != nullptr)
    {
        _children["nbr-proxy-reply"] = nbr_proxy_reply;
    }

    return _children;
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-proxy-reply" || name == "dynamic-eid-name")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::NbrProxyReply()
    :
    requests{YType::uint8, "requests"}
{

    yang_name = "nbr-proxy-reply"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::~NbrProxyReply()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-proxy-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::NbrProxyReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_data() const
{
    if (is_presence_container) return true;
    return arp.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::Vlan::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_data() const
{
    if (is_presence_container) return true;
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::Vlan::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
        ,
    bpduguard(std::make_shared<Native::Interface::Vlan::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
    , vlan(this, {"vlan_ids"})
    , loopguard(std::make_shared<Native::Interface::Vlan::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::Interface::Vlan::SpanningTree::Mst>())
{
    bpduguard->parent = this;
    loopguard->parent = this;
    mst->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::Vlan::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data());
}

bool Native::Interface::Vlan::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation());
}

std::string Native::Interface::Vlan::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::Vlan::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::Vlan::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::SpanningTree::Vlan_>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::Vlan::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::Vlan::SpanningTree::Mst>();
        }
        return mst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loopguard != nullptr)
    {
        _children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["mst"] = mst;
    }

    return _children;
}

void Native::Interface::Vlan::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "vlan" || name == "loopguard" || name == "mst" || name == "bpdufilter" || name == "cost" || name == "guard" || name == "link-type" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::Vlan::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::Vlan::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vlan::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    trunk{YType::empty, "trunk"},
    edge{YType::empty, "edge"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::Vlan::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| trunk.is_set
	|| edge.is_set;
}

bool Native::Interface::Vlan::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(edge.yfilter);
}

std::string Native::Interface::Vlan::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "trunk" || name == "edge")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::Vlan_::Vlan_()
    :
    vlan_ids{YType::str, "vlan-ids"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::SpanningTree::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::SpanningTree::Vlan_::has_data() const
{
    if (is_presence_container) return true;
    return vlan_ids.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::Vlan::SpanningTree::Vlan_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_ids.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::Vlan::SpanningTree::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_ids, "vlan-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::Vlan_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::SpanningTree::Vlan_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::Vlan_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::Vlan_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-ids" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::Vlan::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::Vlan::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::Vlan::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::Mst::Mst()
    :
    pre_standard{YType::empty, "pre-standard"}
        ,
    mst_instance(this, {"instance"})
{

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::Vlan::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_data())
            return true;
    }
    return pre_standard.is_set;
}

bool Native::Interface::Vlan::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pre_standard.yfilter);
}

std::string Native::Interface::Vlan::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_standard.is_set || is_set(pre_standard.yfilter)) leaf_name_data.push_back(pre_standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-instance")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::SpanningTree::Mst::MstInstance>();
        ent_->parent = this;
        mst_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mst_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vlan::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-standard")
    {
        pre_standard = value;
        pre_standard.value_namespace = name_space;
        pre_standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-standard")
    {
        pre_standard.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-instance" || name == "pre-standard")
        return true;
    return false;
}

Native::Interface::Vlan::SpanningTree::Mst::MstInstance::MstInstance()
    :
    instance{YType::str, "instance"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "mst-instance"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::SpanningTree::Mst::MstInstance::~MstInstance()
{
}

bool Native::Interface::Vlan::SpanningTree::Mst::MstInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::Vlan::SpanningTree::Mst::MstInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::Vlan::SpanningTree::Mst::MstInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::SpanningTree::Mst::MstInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::SpanningTree::Mst::MstInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::SpanningTree::Mst::MstInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::SpanningTree::Mst::MstInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::SpanningTree::Mst::MstInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::SpanningTree::Mst::MstInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::Vlan::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Umbrella::~Umbrella()
{
}

bool Native::Interface::Vlan::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::Vlan::Crypto::Map>())
    , ipsec(std::make_shared<Native::Interface::Vlan::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Crypto::~Crypto()
{
}

bool Native::Interface::Vlan::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Vlan::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Vlan::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Vlan::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Vlan::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::Vlan::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::Vlan::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Crypto::Map::~Map()
{
}

bool Native::Interface::Vlan::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::Vlan::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::Vlan::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::Vlan::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::Vlan::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::Vlan::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Vlan::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::Vlan::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::Vlan::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::Vrrp()
    :
    vrrp_group(this, {"group_id"})
    , vrrp_group_v2(this, {"group_id"})
    , delay(std::make_shared<Native::Interface::Vlan::Vrrp::Delay>())
{
    delay->parent = this;

    yang_name = "vrrp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::~Vrrp()
{
}

bool Native::Interface::Vlan::Vrrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrrp_group.len(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrrp_group_v2.len(); index++)
    {
        if(vrrp_group_v2[index]->has_data())
            return true;
    }
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.len(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrrp_group_v2.len(); index++)
    {
        if(vrrp_group_v2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vrrp:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup>();
        ent_->parent = this;
        vrrp_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrrp-group-v2")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2>();
        ent_->parent = this;
        vrrp_group_v2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Vrrp::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrrp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrrp_group_v2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group" || name == "vrrp-group-v2" || name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::VrrpGroup()
    :
    group_id{YType::uint8, "group-id"}
        ,
    address_family(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "group-id")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "vrrp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::~AddressFamily()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Ipv4()
    :
    vrrpv2{YType::empty, "vrrpv2"},
    description{YType::str, "description"},
    match_address{YType::empty, "match-address"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    address(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address>())
    , preempt_config(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt>())
    , timers(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers>())
    , track(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track>())
    , vrrs(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs>())
{
    address->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;
    vrrs->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return vrrpv2.is_set
	|| description.is_set
	|| match_address.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address !=  nullptr && address->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (vrrs !=  nullptr && vrrs->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrpv2.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(match_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (vrrs !=  nullptr && vrrs->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrpv2.is_set || is_set(vrrpv2.yfilter)) leaf_name_data.push_back(vrrpv2.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (match_address.is_set || is_set(match_address.yfilter)) leaf_name_data.push_back(match_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address>();
        }
        return address;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track>();
        }
        return track;
    }

    if(child_yang_name == "vrrs")
    {
        if(vrrs == nullptr)
        {
            vrrs = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs>();
        }
        return vrrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(vrrs != nullptr)
    {
        _children["vrrs"] = vrrs;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrpv2")
    {
        vrrpv2 = value;
        vrrpv2.value_namespace = name_space;
        vrrpv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-address")
    {
        match_address = value;
        match_address.value_namespace = name_space;
        match_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrpv2")
    {
        vrrpv2.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "match-address")
    {
        match_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "vrrs" || name == "vrrpv2" || name == "description" || name == "match-address" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Address()
    :
    primary(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary>())
    , secondary(this, {"address"})
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::~Address()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    primary{YType::empty, "primary"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::~Primary()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| primary.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "primary")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::Timers()
    :
    advertise{YType::uint16, "advertise"}
{

    yang_name = "timers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertise.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::~Track()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::~Event()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
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

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::Vrrs()
    :
    leader{YType::str, "leader"}
{

    yang_name = "vrrs"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::~Vrrs()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_data() const
{
    if (is_presence_container) return true;
    return leader.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(leader.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leader.is_set || is_set(leader.yfilter)) leaf_name_data.push_back(leader.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leader")
    {
        leader = value;
        leader.value_namespace = name_space;
        leader.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leader")
    {
        leader.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leader")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Ipv6()
    :
    description{YType::str, "description"},
    match_address{YType::empty, "match-address"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    address(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address>())
    , preempt_config(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt>())
    , timers(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers>())
    , track(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track>())
    , vrrs(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs>())
{
    address->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;
    vrrs->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| match_address.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address !=  nullptr && address->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (vrrs !=  nullptr && vrrs->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(match_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (vrrs !=  nullptr && vrrs->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (match_address.is_set || is_set(match_address.yfilter)) leaf_name_data.push_back(match_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track>();
        }
        return track;
    }

    if(child_yang_name == "vrrs")
    {
        if(vrrs == nullptr)
        {
            vrrs = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs>();
        }
        return vrrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(vrrs != nullptr)
    {
        _children["vrrs"] = vrrs;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-address")
    {
        match_address = value;
        match_address.value_namespace = name_space;
        match_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "match-address")
    {
        match_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "vrrs" || name == "description" || name == "match-address" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Address()
    :
    primary(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary>())
    , ipv6_prefix(this, {"prefix"})
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::~Address()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "ipv6-prefix")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix>();
        ent_->parent = this;
        ipv6_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : ipv6_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::Primary()
    :
    ipv6_link_local{YType::str, "ipv6-link-local"},
    primary{YType::empty, "primary"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::~Primary()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_link_local.is_set
	|| primary.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_link_local.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_link_local.is_set || is_set(ipv6_link_local.yfilter)) leaf_name_data.push_back(ipv6_link_local.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-link-local")
    {
        ipv6_link_local = value;
        ipv6_link_local.value_namespace = name_space;
        ipv6_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-link-local")
    {
        ipv6_link_local.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-link-local" || name == "primary")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::~Ipv6Prefix()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::Timers()
    :
    advertise{YType::uint16, "advertise"}
{

    yang_name = "timers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::~Timers()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertise.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::~Track()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::~Event()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
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

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::Vrrs()
    :
    leader{YType::str, "leader"}
{

    yang_name = "vrrs"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::~Vrrs()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_data() const
{
    if (is_presence_container) return true;
    return leader.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(leader.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leader.is_set || is_set(leader.yfilter)) leaf_name_data.push_back(leader.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leader")
    {
        leader = value;
        leader.value_namespace = name_space;
        leader.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leader")
    {
        leader.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leader")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::VrrpGroupV2()
    :
    group_id{YType::uint8, "group-id"},
    description{YType::str, "description"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    authentication(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication>())
    , ip(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip>())
    , preempt_config(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt>())
    , timers(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers>())
    , track(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Track>())
{
    authentication->parent = this;
    ip->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;

    yang_name = "vrrp-group-v2"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::~VrrpGroupV2()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| description.is_set
	|| name.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group-v2";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Track>();
        }
        return track;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "group-id" || name == "description" || name == "name" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::Authentication()
    :
    text{YType::str, "text"}
{

    yang_name = "authentication"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return text.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "text")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Ip()
    :
    primary(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary>())
    , secondary(this, {"address"})
{
    primary->parent = this;

    yang_name = "ip"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::~Ip()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::Primary()
    :
    address{YType::str, "address"}
{

    yang_name = "primary"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::~Primary()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::Secondary()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::~Secondary()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Ip::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::Timers()
    :
    learn{YType::empty, "learn"}
        ,
    advertise(std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::Advertise>())
{
    advertise->parent = this;

    yang_name = "timers"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::~Timers()
{
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::has_data() const
{
    if (is_presence_container) return true;
    return learn.is_set
	|| (advertise !=  nullptr && advertise->has_data());
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation());
}

std::string Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::Advertise>();
        }
        return advertise;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    return _children;
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::VrrpGroupV2::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "learn")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Vlan::Pppoe::Enable::Group::global {0, "global"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Dot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1ad::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Id::any {0, "any"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::SecondDot1q::any {0, "any"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::Dot1q::VlanType::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::Etype::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Encapsulation::PriorityTagged::Etype::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::Way::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Push::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Discard::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::Vlan::Service::Instance::L2protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::Vlan::SpanningTree::Bpdufilter::disable {0, "disable"};
const Enum::YLeaf Native::Interface::Vlan::SpanningTree::Bpdufilter::enable {1, "enable"};

const Enum::YLeaf Native::Interface::Vlan::SpanningTree::Guard::loop {0, "loop"};
const Enum::YLeaf Native::Interface::Vlan::SpanningTree::Guard::none {1, "none"};
const Enum::YLeaf Native::Interface::Vlan::SpanningTree::Guard::root {2, "root"};

const Enum::YLeaf Native::Interface::Vlan::SpanningTree::LinkType::point_to_point {0, "point-to-point"};
const Enum::YLeaf Native::Interface::Vlan::SpanningTree::LinkType::shared {1, "shared"};

const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};


}
}

