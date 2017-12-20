
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_88.hpp"
#include "Cisco_IOS_XE_native_89.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Vasileft::InterfaceQos::InterfaceQos()
    :
    trust(std::make_shared<Native::Interface::Vasileft::InterfaceQos::Trust>())
{
    trust->parent = this;

    yang_name = "interface_qos"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::InterfaceQos::~InterfaceQos()
{
}

bool Native::Interface::Vasileft::InterfaceQos::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::Vasileft::InterfaceQos::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::Vasileft::InterfaceQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::InterfaceQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::InterfaceQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Vasileft::InterfaceQos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::InterfaceQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::Vasileft::InterfaceQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::InterfaceQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::InterfaceQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::Vasileft::InterfaceQos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "interface_qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::InterfaceQos::Trust::~Trust()
{
}

bool Native::Interface::Vasileft::InterfaceQos::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vasileft::InterfaceQos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vasileft::InterfaceQos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::InterfaceQos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::InterfaceQos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::InterfaceQos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::InterfaceQos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::InterfaceQos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::InterfaceQos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::Standby()
    :
    version{YType::enumeration, "version"},
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"}
    	,
    delay(std::make_shared<Native::Interface::Vasileft::Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::~Standby()
{
}

bool Native::Interface::Vasileft::Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return version.is_set
	|| bfd.is_set
	|| mac_refresh.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Vasileft::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Vasileft::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vasileft::Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Vasileft::Standby::UseBia>();
        }
        return use_bia;
    }

    if(child_yang_name == "standby-list")
    {
        for(auto const & c : standby_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
        mac_refresh.value_namespace = name_space;
        mac_refresh.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "use-bia" || name == "standby-list" || name == "version" || name == "bfd" || name == "mac-refresh")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::Delay::~Delay()
{
}

bool Native::Interface::Vasileft::Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Vasileft::Standby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::Vasileft::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Vasileft::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::Vasileft::Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Vasileft::Standby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Vasileft::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Vasileft::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Standby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Standby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Vasileft::Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Vasileft::Standby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::Vasileft::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| follow.is_set
	|| ipv6.is_set
	|| mac_address.is_set
	|| name.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::Vasileft::Standby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Authentication::Authentication()
    :
    word{YType::str, "word"},
    text{YType::str, "text"}
    	,
    md5(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::has_data() const
{
    return word.is_set
	|| text.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(text.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "word" || name == "text")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Standby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Standby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Standby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Standby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Timers::get_children() const
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

void Native::Interface::Vasileft::Standby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Standby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::Vasileft::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Vasileft::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vasileft::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Vasileft::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vasileft::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Vasileft::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::AccessSession::~AccessSession()
{
}

bool Native::Interface::Vasileft::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Vasileft::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Vasileft::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Vasileft::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Vasileft::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::Vasileft::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::Vasileft::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vasileft::AccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Vasileft::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::AccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::AccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::AccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::AccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::Vasileft::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Vasileft::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Vasileft::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::~StormControl()
{
}

bool Native::Interface::Vasileft::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vasileft::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vasileft::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Vasileft::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vasileft::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::get_children() const
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

void Native::Interface::Vasileft::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Action::~Action()
{
}

bool Native::Interface::Vasileft::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Vasileft::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasileft::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Broadcast::get_children() const
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

void Native::Interface::Vasileft::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold>())
	,bps(std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Broadcast::Level::get_children() const
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

void Native::Interface::Vasileft::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasileft::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vasileft::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold>())
	,bps(std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasileft::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Multicast::Level::get_children() const
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

void Native::Interface::Vasileft::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasileft::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vasileft::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold>())
	,bps(std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasileft::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasileft::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Unicast::Level::get_children() const
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

void Native::Interface::Vasileft::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::has_data() const
{
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::Vasileft::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Trust::~Trust()
{
}

bool Native::Interface::Vasileft::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vasileft::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vasileft::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vasileft::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Vasileft::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::Vasileft::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Vasileft::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Vasileft::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Vasileft::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Vasileft::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Vasileft::PriorityQueue::CosMap::CosMap()
    :
    id{YType::uint8, "id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vasileft::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Vasileft::PriorityQueue::CosMap::has_operation() const
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

std::string Native::Interface::Vasileft::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Vasileft::RcvQueue::RcvQueue()
{

    yang_name = "rcv-queue"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::Vasileft::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vasileft::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vasileft::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vasileft::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vasileft::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Vasileft::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vasileft::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Vasileft::RcvQueue::CosMap::has_operation() const
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

std::string Native::Interface::Vasileft::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Vasileft::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::Vasileft::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Peer::~Peer()
{
}

bool Native::Interface::Vasileft::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Vasileft::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Vasileft::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Vasileft::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Vasileft::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vasileft::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Vasileft::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Peer::Default_::~Default_()
{
}

bool Native::Interface::Vasileft::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vasileft::Peer::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vasileft::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Peer::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasileft::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vasileft::Peer::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Peer::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Peer::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Vasileft::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Vasileft::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Peer::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vasileft::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Vasileft::Peer::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Peer::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Vasileft::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Peer::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Peer::Default_::Ip::Address::get_children() const
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

void Native::Interface::Vasileft::Peer::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Peer::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Peer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vasileft::PmPath::PmPath()
    :
    name{YType::str, "name"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "pm-path"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::PmPath::~PmPath()
{
}

bool Native::Interface::Vasileft::PmPath::has_data() const
{
    return name.is_set
	|| interface_id.is_set;
}

bool Native::Interface::Vasileft::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::Vasileft::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vasileft::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Vasileft::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Vasileft::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Vasileft::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Vasileft::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Vasileft::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Vasileft::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Vasileft::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Vasileft::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::get_children() const
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

    return children;
}

void Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vasileft::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Umbrella::~Umbrella()
{
}

bool Native::Interface::Vasileft::Umbrella::has_data() const
{
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::Vasileft::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vasileft::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasileft::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Utd::~Utd()
{
}

bool Native::Interface::Vasileft::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Vasileft::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vasileft::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Vasileft::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Vasileft::ZoneMember::has_data() const
{
    return security.is_set;
}

bool Native::Interface::Vasileft::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::Vasileft::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::Vasiright::Vasiright()
    :
    name{YType::uint16, "name"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"}
    	,
    switchport_conf(std::make_shared<Native::Interface::Vasiright::SwitchportConf>())
	,switchport(std::make_shared<Native::Interface::Vasiright::Switchport>())
	,stackwise_virtual(std::make_shared<Native::Interface::Vasiright::StackwiseVirtual>())
	,arp(std::make_shared<Native::Interface::Vasiright::Arp>())
	,backup(std::make_shared<Native::Interface::Vasiright::Backup>())
	,cemoudp(std::make_shared<Native::Interface::Vasiright::Cemoudp>())
	,cws_tunnel(std::make_shared<Native::Interface::Vasiright::CwsTunnel>())
	,l2protocol_tunnel(nullptr) // presence node
	,encapsulation(std::make_shared<Native::Interface::Vasiright::Encapsulation>())
	,fair_queue_conf(std::make_shared<Native::Interface::Vasiright::FairQueueConf>())
	,fair_queue(std::make_shared<Native::Interface::Vasiright::FairQueue>())
	,flowcontrol(std::make_shared<Native::Interface::Vasiright::Flowcontrol>())
	,isis(std::make_shared<Native::Interface::Vasiright::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::Vasiright::KeepaliveSettings>())
	,bfd(std::make_shared<Native::Interface::Vasiright::Bfd>())
	,bandwidth(std::make_shared<Native::Interface::Vasiright::Bandwidth>())
	,dampening(std::make_shared<Native::Interface::Vasiright::Dampening>())
	,domain(std::make_shared<Native::Interface::Vasiright::Domain>())
	,mpls(std::make_shared<Native::Interface::Vasiright::Mpls>())
	,ip_vrf(std::make_shared<Native::Interface::Vasiright::IpVrf>())
	,vrf(std::make_shared<Native::Interface::Vasiright::Vrf>())
	,ip(std::make_shared<Native::Interface::Vasiright::Ip>())
	,ipv6(std::make_shared<Native::Interface::Vasiright::Ipv6>())
	,logging(std::make_shared<Native::Interface::Vasiright::Logging>())
	,mdix(std::make_shared<Native::Interface::Vasiright::Mdix>())
	,mop(std::make_shared<Native::Interface::Vasiright::Mop>())
	,interface_qos(std::make_shared<Native::Interface::Vasiright::InterfaceQos>())
	,standby(std::make_shared<Native::Interface::Vasiright::Standby>())
	,access_session(std::make_shared<Native::Interface::Vasiright::AccessSession>())
	,storm_control(std::make_shared<Native::Interface::Vasiright::StormControl>())
	,trust(std::make_shared<Native::Interface::Vasiright::Trust>())
	,priority_queue(std::make_shared<Native::Interface::Vasiright::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::Vasiright::RcvQueue>())
	,peer(std::make_shared<Native::Interface::Vasiright::Peer>())
	,pm_path(std::make_shared<Native::Interface::Vasiright::PmPath>())
	,service_policy(std::make_shared<Native::Interface::Vasiright::ServicePolicy>())
	,umbrella(std::make_shared<Native::Interface::Vasiright::Umbrella>())
	,utd(std::make_shared<Native::Interface::Vasiright::Utd>())
	,zone_member(std::make_shared<Native::Interface::Vasiright::ZoneMember>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    stackwise_virtual->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    service_policy->parent = this;
    umbrella->parent = this;
    utd->parent = this;
    zone_member->parent = this;

    yang_name = "vasiright"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::Vasiright::~Vasiright()
{
}

bool Native::Interface::Vasiright::has_data() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (umbrella !=  nullptr && umbrella->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::Vasiright::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (umbrella !=  nullptr && umbrella->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::Vasiright::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::Vasiright::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vasiright" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::Vasiright::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::Vasiright::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::Vasiright::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vasiright::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Vasiright::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::Vasiright::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::Vasiright::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::Vasiright::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Vasiright::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::Vasiright::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::Vasiright::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::Vasiright::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vasiright::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Vasiright::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Vasiright::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Vasiright::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::Vasiright::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::Vasiright::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        for(auto const & c : hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasiright::HoldQueue>();
        c->parent = this;
        hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Vasiright::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Vasiright::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vasiright::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasiright::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vasiright::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::Vasiright::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::Vasiright::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::Vasiright::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::Vasiright::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::Vasiright::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::Vasiright::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::Vasiright::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Vasiright::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::Vasiright::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::Vasiright::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Vasiright::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::Vasiright::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Vasiright::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella")
    {
        if(umbrella == nullptr)
        {
            umbrella = std::make_shared<Native::Interface::Vasiright::Umbrella>();
        }
        return umbrella;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::Vasiright::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-zone:zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::Vasiright::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(stackwise_virtual != nullptr)
    {
        children["stackwise-virtual"] = stackwise_virtual;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    for (auto const & c : hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
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

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(service_policy != nullptr)
    {
        children["Cisco-IOS-XE-policy:service-policy"] = service_policy;
    }

    if(umbrella != nullptr)
    {
        children["Cisco-IOS-XE-umbrella:umbrella"] = umbrella;
    }

    if(utd != nullptr)
    {
        children["Cisco-IOS-XE-utd:utd"] = utd;
    }

    if(zone_member != nullptr)
    {
        children["Cisco-IOS-XE-zone:zone-member"] = zone_member;
    }

    return children;
}

void Native::Interface::Vasiright::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "service-policy" || name == "umbrella" || name == "utd" || name == "zone-member" || name == "name" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion")
        return true;
    return false;
}

Native::Interface::Vasiright::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::Vasiright::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Vasiright::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::Vasiright::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::Vasiright::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Switchport::~Switchport()
{
}

bool Native::Interface::Vasiright::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::StackwiseVirtual::StackwiseVirtual()
    :
    link{YType::uint8, "link"},
    dual_active_detection{YType::empty, "dual-active-detection"}
{

    yang_name = "stackwise-virtual"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::StackwiseVirtual::~StackwiseVirtual()
{
}

bool Native::Interface::Vasiright::StackwiseVirtual::has_data() const
{
    return link.is_set
	|| dual_active_detection.is_set;
}

bool Native::Interface::Vasiright::StackwiseVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(dual_active_detection.yfilter);
}

std::string Native::Interface::Vasiright::StackwiseVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::StackwiseVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (dual_active_detection.is_set || is_set(dual_active_detection.yfilter)) leaf_name_data.push_back(dual_active_detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StackwiseVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StackwiseVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StackwiseVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection = value;
        dual_active_detection.value_namespace = name_space;
        dual_active_detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::StackwiseVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::StackwiseVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "dual-active-detection")
        return true;
    return false;
}

Native::Interface::Vasiright::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Arp::~Arp()
{
}

bool Native::Interface::Vasiright::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vasiright::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vasiright::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Vasiright::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Vasiright::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Vasiright::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::~Backup()
{
}

bool Native::Interface::Vasiright::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vasiright::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vasiright::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vasiright::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vasiright::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vasiright::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::get_children() const
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

void Native::Interface::Vasiright::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Delay::~Delay()
{
}

bool Native::Interface::Vasiright::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vasiright::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::Vasiright::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Interface_::Interface_()
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
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
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
    atm_subinterface(std::make_shared<Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Vasiright::Backup::Interface_::has_data() const
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
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
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

bool Native::Interface::Vasiright::Backup::Interface_::has_operation() const
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
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
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

std::string Native::Interface::Vasiright::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Interface_::get_name_leaf_data() const
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
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Interface_::get_children() const
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

void Native::Interface::Vasiright::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Vasiright::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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

bool Native::Interface::Vasiright::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::Vasiright::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Backup::Load::~Load()
{
}

bool Native::Interface::Vasiright::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vasiright::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::Vasiright::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::Vasiright::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Vasiright::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::Vasiright::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vasiright::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vasiright::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vasiright::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vasiright::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::Vasiright::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Vasiright::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Vasiright::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::Vasiright::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::Vasiright::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Vasiright::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Vasiright::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vasiright::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vasiright::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vasiright::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vasiright::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasiright::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Vasiright::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Vasiright::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::Vasiright::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::Vasiright::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::Vasiright::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Vasiright::L2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Vasiright::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::L2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::L2ProtocolTunnel::get_children() const
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

void Native::Interface::Vasiright::L2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::L2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::L2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vasiright::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Vasiright::Encapsulation::Dot1Q>())
	,isl(std::make_shared<Native::Interface::Vasiright::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
	,frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Vasiright::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::Vasiright::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::Vasiright::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vasiright::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Vasiright::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Vasiright::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Vasiright::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Vasiright::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Encapsulation::get_children() const
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

void Native::Interface::Vasiright::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::Vasiright::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Vasiright::Encapsulation::Dot1Q::has_data() const
{
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::Vasiright::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::Vasiright::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::Vasiright::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Vasiright::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Vasiright::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vasiright::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vasiright::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Vasiright::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::Vasiright::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Vasiright::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Vasiright::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::Vasiright::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::Vasiright::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::Vasiright::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Vasiright::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::Vasiright::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::Vasiright::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::FairQueue::~FairQueue()
{
}

bool Native::Interface::Vasiright::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Vasiright::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::Vasiright::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::Vasiright::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::Vasiright::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Vasiright::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::Vasiright::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::Vasiright::Isis::Isis()
{

    yang_name = "isis"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Isis::~Isis()
{
}

bool Native::Interface::Vasiright::Isis::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Isis::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Vasiright::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Vasiright::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Vasiright::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Vasiright::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Vasiright::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::Vasiright::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Vasiright::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Vasiright::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::Vasiright::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::Vasiright::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Bfd::~Bfd()
{
}

bool Native::Interface::Vasiright::Bfd::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
    	,
    receive(std::make_shared<Native::Interface::Vasiright::Bandwidth::Receive>())
	,inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Vasiright::Bandwidth::has_data() const
{
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::Vasiright::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::Vasiright::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Vasiright::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Vasiright::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Bandwidth::get_children() const
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

void Native::Interface::Vasiright::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vasiright::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::Vasiright::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Vasiright::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vasiright::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vasiright::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Vasiright::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Vasiright::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vasiright::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vasiright::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Vasiright::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Dampening::~Dampening()
{
}

bool Native::Interface::Vasiright::Dampening::has_data() const
{
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Vasiright::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Vasiright::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Vasiright::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Vasiright::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::Vasiright::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Dampening::Restart::~Restart()
{
}

bool Native::Interface::Vasiright::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Vasiright::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::Vasiright::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::Vasiright::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Domain::~Domain()
{
}

bool Native::Interface::Vasiright::Domain::has_data() const
{
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Vasiright::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::Vasiright::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Domain::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Domain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::Vasiright::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::Vasiright::HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Vasiright::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::Vasiright::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::Vasiright::Mpls::Mpls()
{

    yang_name = "mpls"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Mpls::~Mpls()
{
}

bool Native::Interface::Vasiright::Mpls::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Mpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Vasiright::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::IpVrf::~IpVrf()
{
}

bool Native::Interface::Vasiright::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vasiright::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vasiright::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasiright::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vasiright::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vasiright::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Vasiright::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::Vasiright::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vasiright::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vasiright::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vasiright::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vasiright::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::Vasiright::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Vasiright::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vasiright::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vasiright::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vasiright::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Vrf::~Vrf()
{
}

bool Native::Interface::Vasiright::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vasiright::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vasiright::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Ip()
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
    access_group(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup>())
	,arp(std::make_shared<Native::Interface::Vasiright::Ip::Arp>())
	,vrf(std::make_shared<Native::Interface::Vasiright::Ip::Vrf>())
	,no_address(std::make_shared<Native::Interface::Vasiright::Ip::NoAddress>())
	,address(std::make_shared<Native::Interface::Vasiright::Ip::Address>())
	,hello_interval(std::make_shared<Native::Interface::Vasiright::Ip::HelloInterval>())
	,authentication(std::make_shared<Native::Interface::Vasiright::Ip::Authentication>())
	,hold_time(std::make_shared<Native::Interface::Vasiright::Ip::HoldTime>())
	,pim(std::make_shared<Native::Interface::Vasiright::Ip::Pim>())
	,policy(std::make_shared<Native::Interface::Vasiright::Ip::Policy>())
	,rip(std::make_shared<Native::Interface::Vasiright::Ip::Rip>())
	,route_cache_conf(std::make_shared<Native::Interface::Vasiright::Ip::RouteCacheConf>())
	,route_cache(nullptr) // presence node
	,router(std::make_shared<Native::Interface::Vasiright::Ip::Router>())
	,tcp(std::make_shared<Native::Interface::Vasiright::Ip::Tcp>())
	,virtual_reassembly(std::make_shared<Native::Interface::Vasiright::Ip::VirtualReassembly>())
	,dhcp(std::make_shared<Native::Interface::Vasiright::Ip::Dhcp>())
	,summary_address(std::make_shared<Native::Interface::Vasiright::Ip::SummaryAddress>())
	,verify(std::make_shared<Native::Interface::Vasiright::Ip::Verify>())
	,wccp(std::make_shared<Native::Interface::Vasiright::Ip::Wccp>())
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
    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "vasiright"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::~Ip()
{
}

bool Native::Interface::Vasiright::Ip::has_data() const
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
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Interface::Vasiright::Ip::has_operation() const
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
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Interface::Vasiright::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vasiright::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vasiright::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Vasiright::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vasiright::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vasiright::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vasiright::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vasiright::Ip::HoldTime>();
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
        auto c = std::make_shared<Native::Interface::Vasiright::Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vasiright::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vasiright::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::Vasiright::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Vasiright::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Vasiright::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Vasiright::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vasiright::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Vasiright::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Vasiright::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Vasiright::Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "Cisco-IOS-XE-wccp:wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Interface::Vasiright::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::get_children() const
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

    if(wccp != nullptr)
    {
        children["Cisco-IOS-XE-wccp:wccp"] = wccp;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "no-address" || name == "address" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "wccp" || name == "admission" || name == "unnumbered" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vasiright::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::get_children() const
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

void Native::Interface::Vasiright::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl>())
	,acl(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::In::get_children() const
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

void Native::Interface::Vasiright::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl>())
	,acl(std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::Out::get_children() const
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

void Native::Interface::Vasiright::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Vasiright::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Arp::~Arp()
{
}

bool Native::Interface::Vasiright::Ip::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Vasiright::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Vasiright::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vasiright::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Vasiright::Ip::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vasiright::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vasiright::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Vasiright::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Vasiright::Ip::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Vasiright::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Vasiright::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Vasiright::Ip::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Vasiright::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::Vasiright::Ip::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Vasiright::Ip::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::Vasiright::Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    primary(std::make_shared<Native::Interface::Vasiright::Ip::Address::Primary>())
	,dhcp(nullptr) // presence node
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Address::~Address()
{
}

bool Native::Interface::Vasiright::Ip::Address::has_data() const
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

bool Native::Interface::Vasiright::Ip::Address::has_operation() const
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

std::string Native::Interface::Vasiright::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vasiright::Ip::Address::Primary>();
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
        auto c = std::make_shared<Native::Interface::Vasiright::Ip::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vasiright::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Address::get_children() const
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

void Native::Interface::Vasiright::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary" || name == "dhcp" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::Vasiright::Ip::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Vasiright::Ip::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Vasiright::Ip::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vasiright::Ip::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vasiright::Ip::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Vasiright::Ip::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| vlan.is_set;
}

bool Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vasiright::Ip::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vasiright::Ip::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vasiright::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vasiright::Ip::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vasiright::Ip::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::Vasiright::Ip::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vasiright::Ip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vasiright::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vasiright::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Authentication::get_children() const
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

void Native::Interface::Vasiright::Ip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vasiright::Ip::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Vasiright::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vasiright::Ip::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Vasiright::Ip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vasiright::Ip::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vasiright::Ip::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vasiright::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Vasiright::Ip::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Vasiright::Ip::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::Vasiright::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Pim::Pim()
{

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Pim::~Pim()
{
}

bool Native::Interface::Vasiright::Ip::Pim::has_data() const
{
    return false;
}

bool Native::Interface::Vasiright::Ip::Pim::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasiright::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasiright::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Policy::~Policy()
{
}

bool Native::Interface::Vasiright::Ip::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Vasiright::Ip::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::Vasiright::Ip::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Rip::~Rip()
{
}

bool Native::Interface::Vasiright::Ip::Rip::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vasiright::Ip::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vasiright::Ip::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Interface::Vasiright::Ip::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::Vasiright::Ip::Rip::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vasiright::Ip::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vasiright::Ip::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Vasiright::Ip::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Vasiright::Ip::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::Vasiright::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::Vasiright::Ip::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Vasiright::Ip::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::Vasiright::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Router::~Router()
{
}

bool Native::Interface::Vasiright::Ip::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Vasiright::Ip::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vasiright::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::Vasiright::Ip::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Vasiright::Ip::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::Vasiright::Ip::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vasiright::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::VirtualReassembly::VirtualReassembly()
    :
    max_reassemblies{YType::uint32, "max-reassemblies"},
    max_fragments{YType::uint32, "max-fragments"},
    timeout{YType::uint32, "timeout"},
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Vasiright::Ip::VirtualReassembly::has_data() const
{
    return max_reassemblies.is_set
	|| max_fragments.is_set
	|| timeout.is_set
	|| drop_fragments.is_set
	|| in.is_set;
}

bool Native::Interface::Vasiright::Ip::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vasiright::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reassemblies" || name == "max-fragments" || name == "timeout" || name == "drop-fragments" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Snooping>())
{
    client->parent = this;
    relay->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vasiright::Ip::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Vasiright::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:client"] = client;
    }

    if(relay != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["Cisco-IOS-XE-dhcp:snooping"] = snooping;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasiright::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasiright::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "relay" || name == "snooping")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::Vasiright::Ip::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Vasiright::Ip::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string Native::Interface::Vasiright::Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Ip::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Vasiright::Ip::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vasiright::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Vasiright::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasiright::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vasiright::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "source-interface")
        return true;
    return false;
}

Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_action.yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.yfilter)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::get_children() const
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

void Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check-reply" || name == "option" || name == "option-insert" || name == "policy-action" || name == "trusted")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Vasileft::InterfaceQos::Trust::Device::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::Vasileft::Standby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Vasileft::Standby::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Vasileft::Standby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vasileft::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vasileft::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Vasileft::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Vasileft::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Vasileft::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Vasileft::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Vasileft::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::Vasiright::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vasiright::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vasiright::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasiright::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasiright::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasiright::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasiright::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vasiright::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::Vasiright::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::Vasiright::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vasiright::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::Vasiright::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::Vasiright::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Vasiright::HoldQueue::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::PolicyAction::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::PolicyAction::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::PolicyAction::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Vasiright::Ip::Dhcp::Relay::Information::PolicyAction::replace {3, "replace"};


}
}

