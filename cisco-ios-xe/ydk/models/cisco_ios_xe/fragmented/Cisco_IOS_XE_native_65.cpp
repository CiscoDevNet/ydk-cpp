
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_65.hpp"
#include "Cisco_IOS_XE_native_66.hpp"
#include "Cisco_IOS_XE_native_67.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Tunnel::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::Tunnel::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::Tunnel::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Snmp::~Snmp()
{
}

bool Native::Interface::Tunnel::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::Tunnel::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::Tunnel::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Tunnel::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Tunnel::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Snmp::get_children() const
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

void Native::Interface::Tunnel::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::Tunnel::Snmp::Ifindex::Ifindex()
    :
    clear{YType::boolean, "clear"},
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Tunnel::Snmp::Ifindex::has_data() const
{
    return clear.is_set
	|| persist.is_set;
}

bool Native::Interface::Tunnel::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear.yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::Tunnel::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear" || name == "persist")
        return true;
    return false;
}

Native::Interface::Tunnel::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
    	,
    link_status_capas(std::make_shared<Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Tunnel::Snmp::Trap::has_data() const
{
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::Tunnel::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::Tunnel::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status_capas != nullptr)
    {
        children["link-status-capas"] = link_status_capas;
    }

    return children;
}

void Native::Interface::Tunnel::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{

    yang_name = "permit"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    return duplicates.is_set;
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::Standby()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::Tunnel::Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::~Standby()
{
}

bool Native::Interface::Tunnel::Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Tunnel::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Tunnel::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Tunnel::Standby::Delay>();
        }
        return delay;
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
        auto c = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Tunnel::Standby::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "standby-list" || name == "use-bia" || name == "bfd" || name == "mac-refresh" || name == "version")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::Delay::~Delay()
{
}

bool Native::Interface::Tunnel::Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Tunnel::Standby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::Tunnel::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::has_data() const
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

bool Native::Interface::Tunnel::Standby::StandbyList::has_operation() const
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

std::string Native::Interface::Tunnel::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Timers>();
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
        auto c = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::get_children() const
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

void Native::Interface::Tunnel::Standby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(word.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text" || name == "word")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Standby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Redirect::get_children() const
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

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Timers::get_children() const
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

void Native::Interface::Tunnel::Standby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Standby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Tunnel::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Tunnel::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Tunnel::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Tunnel::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::Tunnel::Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Tunnel::Standby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Tunnel::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Tunnel::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Tunnel::Standby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Standby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Standby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::Tunnel::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Tunnel::Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Tunnel::Standby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::Tunnel::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Standby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Standby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Standby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Standby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::Tunnel::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Tunnel::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Tunnel::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::~StormControl()
{
}

bool Native::Interface::Tunnel::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Tunnel::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Tunnel::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Tunnel::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::get_children() const
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

void Native::Interface::Tunnel::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Action::~Action()
{
}

bool Native::Interface::Tunnel::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Tunnel::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Tunnel::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Tunnel::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Broadcast::get_children() const
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

void Native::Interface::Tunnel::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Broadcast::Level::get_children() const
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

void Native::Interface::Tunnel::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Tunnel::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Tunnel::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Tunnel::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Tunnel::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Tunnel::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Tunnel::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Tunnel::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Tunnel::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Multicast::Level::get_children() const
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

void Native::Interface::Tunnel::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Tunnel::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Tunnel::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;
    pps->parent = this;
    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Tunnel::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Unicast::Level::get_children() const
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

void Native::Interface::Tunnel::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Switchport::~Switchport()
{
}

bool Native::Interface::Tunnel::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::Tunnel::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Tunnel::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::Tunnel::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::Tunnel::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Trust::~Trust()
{
}

bool Native::Interface::Tunnel::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Tunnel::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Tunnel::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Tunnel_()
    :
    checksum{YType::empty, "checksum"},
    destination{YType::str, "destination"},
    entropy{YType::empty, "entropy"},
    key{YType::uint64, "key"},
    raw_packet_interface{YType::str, "raw-packet-interface"},
    snooping{YType::enumeration, "snooping"},
    source{YType::str, "source"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    vrf{YType::str, "vrf"}
    	,
    bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Bandwidth>())
	,dst_port(std::make_shared<Native::Interface::Tunnel::Tunnel_::DstPort>())
	,endpoint(std::make_shared<Native::Interface::Tunnel::Tunnel_::Endpoint>())
	,fixup(std::make_shared<Native::Interface::Tunnel::Tunnel_::Fixup>())
	,flow(std::make_shared<Native::Interface::Tunnel::Tunnel_::Flow>())
	,mode(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode>())
	,mpls(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls>())
	,network_id(std::make_shared<Native::Interface::Tunnel::Tunnel_::NetworkId>())
	,path_mtu_discovery(nullptr) // presence node
	,protection(std::make_shared<Native::Interface::Tunnel::Tunnel_::Protection>())
	,rbscp(std::make_shared<Native::Interface::Tunnel::Tunnel_::Rbscp>())
	,src_port(std::make_shared<Native::Interface::Tunnel::Tunnel_::SrcPort>())
	,tun_6rd(std::make_shared<Native::Interface::Tunnel::Tunnel_::Tun6rd>())
	,udlr(std::make_shared<Native::Interface::Tunnel::Tunnel_::Udlr>())
	,vlan(std::make_shared<Native::Interface::Tunnel::Tunnel_::Vlan>())
{
    bandwidth->parent = this;
    dst_port->parent = this;
    endpoint->parent = this;
    fixup->parent = this;
    flow->parent = this;
    mode->parent = this;
    mpls->parent = this;
    network_id->parent = this;
    protection->parent = this;
    rbscp->parent = this;
    src_port->parent = this;
    tun_6rd->parent = this;
    udlr->parent = this;
    vlan->parent = this;

    yang_name = "tunnel"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::~Tunnel_()
{
}

bool Native::Interface::Tunnel::Tunnel_::has_data() const
{
    return checksum.is_set
	|| destination.is_set
	|| entropy.is_set
	|| key.is_set
	|| raw_packet_interface.is_set
	|| snooping.is_set
	|| source.is_set
	|| tos.is_set
	|| ttl.is_set
	|| vrf.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data())
	|| (fixup !=  nullptr && fixup->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (network_id !=  nullptr && network_id->has_data())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (rbscp !=  nullptr && rbscp->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (tun_6rd !=  nullptr && tun_6rd->has_data())
	|| (udlr !=  nullptr && udlr->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(entropy.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(raw_packet_interface.yfilter)
	|| ydk::is_set(snooping.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (fixup !=  nullptr && fixup->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (network_id !=  nullptr && network_id->has_operation())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (rbscp !=  nullptr && rbscp->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (tun_6rd !=  nullptr && tun_6rd->has_operation())
	|| (udlr !=  nullptr && udlr->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (entropy.is_set || is_set(entropy.yfilter)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (raw_packet_interface.is_set || is_set(raw_packet_interface.yfilter)) leaf_name_data.push_back(raw_packet_interface.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<Native::Interface::Tunnel::Tunnel_::DstPort>();
        }
        return dst_port;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<Native::Interface::Tunnel::Tunnel_::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "fixup")
    {
        if(fixup == nullptr)
        {
            fixup = std::make_shared<Native::Interface::Tunnel::Tunnel_::Fixup>();
        }
        return fixup;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Tunnel::Tunnel_::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "network-id")
    {
        if(network_id == nullptr)
        {
            network_id = std::make_shared<Native::Interface::Tunnel::Tunnel_::NetworkId>();
        }
        return network_id;
    }

    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::Tunnel::Tunnel_::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "rbscp")
    {
        if(rbscp == nullptr)
        {
            rbscp = std::make_shared<Native::Interface::Tunnel::Tunnel_::Rbscp>();
        }
        return rbscp;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<Native::Interface::Tunnel::Tunnel_::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "tun-6rd")
    {
        if(tun_6rd == nullptr)
        {
            tun_6rd = std::make_shared<Native::Interface::Tunnel::Tunnel_::Tun6rd>();
        }
        return tun_6rd;
    }

    if(child_yang_name == "udlr")
    {
        if(udlr == nullptr)
        {
            udlr = std::make_shared<Native::Interface::Tunnel::Tunnel_::Udlr>();
        }
        return udlr;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tunnel::Tunnel_::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
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

    if(rbscp != nullptr)
    {
        children["rbscp"] = rbscp;
    }

    if(src_port != nullptr)
    {
        children["src-port"] = src_port;
    }

    if(tun_6rd != nullptr)
    {
        children["tun-6rd"] = tun_6rd;
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

void Native::Interface::Tunnel::Tunnel_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Tunnel::Tunnel_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
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
    if(value_path == "source")
    {
        source.yfilter = yfilter;
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

bool Native::Interface::Tunnel::Tunnel_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "dst-port" || name == "endpoint" || name == "fixup" || name == "flow" || name == "mode" || name == "mpls" || name == "network-id" || name == "path-mtu-discovery" || name == "protection" || name == "rbscp" || name == "src-port" || name == "tun-6rd" || name == "udlr" || name == "vlan" || name == "checksum" || name == "destination" || name == "entropy" || name == "key" || name == "raw-packet-interface" || name == "snooping" || name == "source" || name == "tos" || name == "ttl" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Bandwidth::Bandwidth()
    :
    receive{YType::uint32, "receive"},
    transmit{YType::uint32, "transmit"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Bandwidth::has_data() const
{
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::DstPort::DstPort()
    :
    dynamic{YType::empty, "dynamic"},
    port_num{YType::uint16, "port-num"}
{

    yang_name = "dst-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::DstPort::~DstPort()
{
}

bool Native::Interface::Tunnel::Tunnel_::DstPort::has_data() const
{
    return dynamic.is_set
	|| port_num.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::DstPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(port_num.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::DstPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::DstPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::DstPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::DstPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "port-num")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Endpoint::Endpoint()
    :
    service_policy(std::make_shared<Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "endpoint"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Endpoint::~Endpoint()
{
}

bool Native::Interface::Tunnel::Tunnel_::Endpoint::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::has_data() const
{
    return output.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Endpoint::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Fixup::Fixup()
    :
    nat{YType::empty, "nat"}
{

    yang_name = "fixup"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Fixup::~Fixup()
{
}

bool Native::Interface::Tunnel::Tunnel_::Fixup::has_data() const
{
    return nat.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Fixup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nat.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Fixup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Fixup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nat.is_set || is_set(nat.yfilter)) leaf_name_data.push_back(nat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Fixup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Fixup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Fixup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nat")
    {
        nat = value;
        nat.value_namespace = name_space;
        nat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Fixup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nat")
    {
        nat.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Fixup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Flow::Flow()
    :
    egress_records{YType::empty, "egress-records"}
{

    yang_name = "flow"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Flow::~Flow()
{
}

bool Native::Interface::Tunnel::Tunnel_::Flow::has_data() const
{
    return egress_records.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_records.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_records.is_set || is_set(egress_records.yfilter)) leaf_name_data.push_back(egress_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-records")
    {
        egress_records = value;
        egress_records.value_namespace = name_space;
        egress_records.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-records")
    {
        egress_records.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-records")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Mode()
    :
    ipv6{YType::empty, "ipv6"},
    udp{YType::enumeration, "udp"}
    	,
    ethernet(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ethernet>())
	,gre(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Gre>())
	,ipip(nullptr) // presence node
	,ipsec(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ipsec>())
	,ipv6ip(nullptr) // presence node
	,mpls(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Mpls>())
{
    ethernet->parent = this;
    gre->parent = this;
    ipsec->parent = this;
    mpls->parent = this;

    yang_name = "mode"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::~Mode()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::has_data() const
{
    return ipv6.is_set
	|| udp.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (ipip !=  nullptr && ipip->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (ipv6ip !=  nullptr && ipv6ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (ipip !=  nullptr && ipip->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (ipv6ip !=  nullptr && ipv6ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "ipip")
    {
        if(ipip == nullptr)
        {
            ipip = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ipip>();
        }
        return ipip;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "ipv6ip")
    {
        if(ipv6ip == nullptr)
        {
            ipv6ip = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip>();
        }
        return ipv6ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(ipv6ip != nullptr)
    {
        children["ipv6ip"] = ipv6ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "gre" || name == "ipip" || name == "ipsec" || name == "ipv6ip" || name == "mpls" || name == "ipv6" || name == "udp")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::Ethernet()
    :
    gre{YType::enumeration, "gre"}
{

    yang_name = "ethernet"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::~Ethernet()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::has_data() const
{
    return gre.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre.is_set || is_set(gre.yfilter)) leaf_name_data.push_back(gre.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre")
    {
        gre = value;
        gre.value_namespace = name_space;
        gre.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre")
    {
        gre.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Gre::Gre()
    :
    ip{YType::empty, "ip"},
    ipv6{YType::empty, "ipv6"}
    	,
    multipoint(nullptr) // presence node
{

    yang_name = "gre"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Gre::~Gre()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Gre::has_data() const
{
    return ip.is_set
	|| ipv6.is_set
	|| (multipoint !=  nullptr && multipoint->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| (multipoint !=  nullptr && multipoint->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipoint")
    {
        if(multipoint == nullptr)
        {
            multipoint = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint>();
        }
        return multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multipoint != nullptr)
    {
        children["multipoint"] = multipoint;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mode::Gre::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mode::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipoint" || name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::Multipoint()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "multipoint"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::~Multipoint()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::has_data() const
{
    return ipv6.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Gre::Multipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipip::Ipip()
    :
    decapsulate_any{YType::empty, "decapsulate-any"}
{

    yang_name = "ipip"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipip::~Ipip()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipip::has_data() const
{
    return decapsulate_any.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decapsulate_any.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Ipip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Ipip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decapsulate_any.is_set || is_set(decapsulate_any.yfilter)) leaf_name_data.push_back(decapsulate_any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Ipip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Ipip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any = value;
        decapsulate_any.value_namespace = name_space;
        decapsulate_any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decapsulate-any")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipsec()
    :
    ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
{

    yang_name = "ipsec"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::get_children() const
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

void Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipsec::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::Ipv6Ip()
    :
    auto_6rd{YType::empty, "auto-6rd"},
    auto_6to4{YType::empty, "auto-6to4"},
    isatap{YType::empty, "isatap"}
{

    yang_name = "ipv6ip"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::~Ipv6Ip()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::has_data() const
{
    return auto_6rd.is_set
	|| auto_6to4.is_set
	|| isatap.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_6rd.yfilter)
	|| ydk::is_set(auto_6to4.yfilter)
	|| ydk::is_set(isatap.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_6rd.is_set || is_set(auto_6rd.yfilter)) leaf_name_data.push_back(auto_6rd.get_name_leafdata());
    if (auto_6to4.is_set || is_set(auto_6to4.yfilter)) leaf_name_data.push_back(auto_6to4.get_name_leafdata());
    if (isatap.is_set || is_set(isatap.yfilter)) leaf_name_data.push_back(isatap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mode::Ipv6Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-6rd" || name == "auto-6to4" || name == "isatap")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Mpls::Mpls()
    :
    traffic_eng(nullptr) // presence node
{

    yang_name = "mpls"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Mpls::~Mpls()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Mpls::has_data() const
{
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mode::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::TrafficEng()
    :
    multilsp{YType::empty, "multilsp"}
{

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::has_data() const
{
    return multilsp.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multilsp.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multilsp.is_set || is_set(multilsp.yfilter)) leaf_name_data.push_back(multilsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multilsp")
    {
        multilsp = value;
        multilsp.value_namespace = name_space;
        multilsp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multilsp")
    {
        multilsp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mode::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilsp")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::Mpls()
    :
    traffic_eng(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng>())
{
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::~Mpls()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::has_data() const
{
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::TrafficEng()
    :
    load_share{YType::uint32, "load-share"},
    name{YType::str, "name"}
    	,
    affinity_mask(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask>())
	,auto_bw(nullptr) // presence node
	,autoroute(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute>())
	,backup_bw(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw>())
	,bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd>())
	,binding_sid(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid>())
	,exp(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp>())
	,exp_bundle(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle>())
	,fast_reroute(nullptr) // presence node
	,forwarding_adjacency(nullptr) // presence node
	,interface(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_>())
	,path_option(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption>())
	,path_selection(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection>())
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

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::has_data() const
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::has_operation() const
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

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "backup-bw")
    {
        if(backup_bw == nullptr)
        {
            backup_bw = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw>();
        }
        return backup_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "exp")
    {
        if(exp == nullptr)
        {
            exp = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp>();
        }
        return exp;
    }

    if(child_yang_name == "exp-bundle")
    {
        if(exp_bundle == nullptr)
        {
            exp_bundle = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle>();
        }
        return exp_bundle;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "record-route")
    {
        if(record_route == nullptr)
        {
            record_route = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute>();
        }
        return record_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::get_children() const
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-bw" || name == "autoroute" || name == "backup-bw" || name == "bandwidth" || name == "bfd" || name == "binding-sid" || name == "exp" || name == "exp-bundle" || name == "fast-reroute" || name == "forwarding-adjacency" || name == "interface" || name == "path-option" || name == "path-selection" || name == "priority" || name == "record-route" || name == "load-share" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::~AffinityMask()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    collect_bw{YType::empty, "collect-bw"},
    frequency{YType::uint32, "frequency"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
    	,
    overflow_limit(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit>())
{
    overflow_limit->parent = this;

    yang_name = "auto-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::has_data() const
{
    return adjustment_threshold.is_set
	|| collect_bw.is_set
	|| frequency.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| (overflow_limit !=  nullptr && overflow_limit->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold.yfilter)
	|| ydk::is_set(collect_bw.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| (overflow_limit !=  nullptr && overflow_limit->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold.is_set || is_set(adjustment_threshold.yfilter)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.yfilter)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overflow-limit")
    {
        if(overflow_limit == nullptr)
        {
            overflow_limit = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit>();
        }
        return overflow_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(overflow_limit != nullptr)
    {
        children["overflow-limit"] = overflow_limit;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
        adjustment_threshold.value_namespace = name_space;
        adjustment_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
        collect_bw.value_namespace = name_space;
        collect_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold.yfilter = yfilter;
    }
    if(value_path == "collect-bw")
    {
        collect_bw.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-limit" || name == "adjustment-threshold" || name == "collect-bw" || name == "frequency" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::OverflowLimit()
    :
    limit{YType::uint8, "limit"},
    overflow_threshold{YType::uint8, "overflow-threshold"}
{

    yang_name = "overflow-limit"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::~OverflowLimit()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::has_data() const
{
    return limit.is_set
	|| overflow_threshold.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::AutoBw::OverflowLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "overflow-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Autoroute()
    :
    announce{YType::empty, "announce"},
    destination{YType::empty, "destination"}
    	,
    metric(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric>())
{
    metric->parent = this;

    yang_name = "autoroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::~Autoroute()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::has_data() const
{
    return announce.is_set
	|| destination.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce.is_set || is_set(announce.yfilter)) leaf_name_data.push_back(announce.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "announce" || name == "destination")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::Metric()
    :
    absolute{YType::uint32, "absolute"},
    range{YType::uint32, "range"},
    relative{YType::int8, "relative"}
{

    yang_name = "metric"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::~Metric()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::has_data() const
{
    return absolute.is_set
	|| range.is_set
	|| relative.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(relative.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute.is_set || is_set(absolute.yfilter)) leaf_name_data.push_back(absolute.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute")
    {
        absolute = value;
        absolute.value_namespace = name_space;
        absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute")
    {
        absolute.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Autoroute::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "range" || name == "relative")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::BackupBw()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    class_type(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType>())
	,global_pool(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool>())
	,sub_pool(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool>())
{
    class_type->parent = this;
    global_pool->parent = this;
    sub_pool->parent = this;

    yang_name = "backup-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::~BackupBw()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::has_data() const
{
    return bandwidth.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data())
	|| (sub_pool !=  nullptr && sub_pool->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation())
	|| (sub_pool !=  nullptr && sub_pool->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool>();
        }
        return global_pool;
    }

    if(child_yang_name == "sub-pool")
    {
        if(sub_pool == nullptr)
        {
            sub_pool = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool>();
        }
        return sub_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::get_children() const
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

    if(sub_pool != nullptr)
    {
        children["sub-pool"] = sub_pool;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "global-pool" || name == "sub-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::ClassType()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_type_num{YType::uint8, "class-type-num"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::~ClassType()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::has_data() const
{
    return bandwidth.is_set
	|| class_type_num.is_set
	|| unlimited.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-type-num" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::has_data() const
{
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPool()
    :
    unlimited{YType::empty, "unlimited"}
    	,
    sub_pool_config(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>())
{
    sub_pool_config->parent = this;

    yang_name = "sub-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::~SubPool()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::has_data() const
{
    return unlimited.is_set
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unlimited.yfilter)
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pool-config")
    {
        if(sub_pool_config == nullptr)
        {
            sub_pool_config = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>();
        }
        return sub_pool_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sub_pool_config != nullptr)
    {
        children["sub-pool-config"] = sub_pool_config;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool-config" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::SubPoolConfig()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    class_type(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>())
	,global_pool(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>())
{
    class_type->parent = this;
    global_pool->parent = this;

    yang_name = "sub-pool-config"; yang_parent_name = "sub-pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::~SubPoolConfig()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_data() const
{
    return bandwidth.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>();
        }
        return global_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_children() const
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "global-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::ClassType()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_type_num{YType::uint8, "class-type-num"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::~ClassType()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_data() const
{
    return bandwidth.is_set
	|| class_type_num.is_set
	|| unlimited.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-type-num" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_data() const
{
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    class_type{YType::uint8, "class-type"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::has_data() const
{
    return bw.is_set
	|| class_type.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "class-type" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::Bfd()
    :
    sbfd{YType::str, "sbfd"}
{

    yang_name = "bfd"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::has_data() const
{
    return sbfd.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sbfd.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sbfd.is_set || is_set(sbfd.yfilter)) leaf_name_data.push_back(sbfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sbfd")
    {
        sbfd = value;
        sbfd.value_namespace = name_space;
        sbfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sbfd")
    {
        sbfd.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbfd")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::BindingSid()
    :
    label{YType::uint32, "label"}
{

    yang_name = "binding-sid"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::~BindingSid()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::has_data() const
{
    return label.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::Exp()
    :
    default_{YType::empty, "default"},
    exp_value{YType::uint8, "exp-value"}
{

    yang_name = "exp"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::~Exp()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::has_data() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::has_operation() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(exp_value.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    auto exp_value_name_datas = exp_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exp_value_name_datas.begin(), exp_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-value")
    {
        exp_value.append(value);
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "exp-value")
    {
        exp_value.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "exp-value")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::ExpBundle()
    :
    master{YType::empty, "master"}
    	,
    member(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member>())
{
    member->parent = this;

    yang_name = "exp-bundle"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::~ExpBundle()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::has_data() const
{
    return master.is_set
	|| (member !=  nullptr && member->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp-bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member" || name == "master")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::Member()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "member"; yang_parent_name = "exp-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::~Member()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::has_data() const
{
    return tunnel.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ExpBundle::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"},
    node_protect{YType::empty, "node-protect"}
{

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::has_data() const
{
    return bw_protect.is_set
	|| node_protect.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter)
	|| ydk::is_set(node_protect.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect" || name == "node-protect")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::ForwardingAdjacency()
    :
    holdtime{YType::uint32, "holdtime"}
{

    yang_name = "forwarding-adjacency"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::has_data() const
{
    return holdtime.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::ForwardingAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Interface_()
    :
    down(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down>())
{
    down->parent = this;

    yang_name = "interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::~Interface_()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::has_data() const
{
    return (down !=  nullptr && down->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| (down !=  nullptr && down->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down>();
        }
        return down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(down != nullptr)
    {
        children["down"] = down;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::Down()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "down"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::~Down()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::has_data() const
{
    return delay.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Interface_::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::PathOption()
{

    yang_name = "path-option"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::has_data() const
{
    for (std::size_t index=0; index<protect.size(); index++)
    {
        if(protect[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<working.size(); index++)
    {
        if(working[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::has_operation() const
{
    for (std::size_t index=0; index<protect.size(); index++)
    {
        if(protect[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<working.size(); index++)
    {
        if(working[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect")
    {
        for(auto const & c : protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect>();
        c->parent = this;
        protect.push_back(c);
        return c;
    }

    if(child_yang_name == "working")
    {
        for(auto const & c : working)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working>();
        c->parent = this;
        working.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protect)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : working)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect" || name == "working")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Protect()
    :
    id{YType::str, "id"}
    	,
    diverse(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse>())
	,explicit_(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_>())
	,list(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List>())
{
    diverse->parent = this;
    explicit_->parent = this;
    list->parent = this;

    yang_name = "protect"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::~Protect()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::has_data() const
{
    return id.is_set
	|| (diverse !=  nullptr && diverse->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (list !=  nullptr && list->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (diverse !=  nullptr && diverse->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diverse")
    {
        if(diverse == nullptr)
        {
            diverse = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse>();
        }
        return diverse;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_>();
        }
        return explicit_;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(diverse != nullptr)
    {
        children["diverse"] = diverse;
    }

    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diverse" || name == "explicit" || name == "list" || name == "id")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Diverse()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    node{YType::empty, "node"},
    non_revertive{YType::empty, "non-revertive"},
    pce{YType::empty, "pce"},
    segment_routing{YType::empty, "segment-routing"},
    srlg{YType::empty, "srlg"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "diverse"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::~Diverse()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| node.is_set
	|| non_revertive.is_set
	|| pce.is_set
	|| segment_routing.is_set
	|| srlg.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "address" || name == "attributes" || name == "lockdown" || name == "node" || name == "non-revertive" || name == "pce" || name == "segment-routing" || name == "srlg" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "diverse"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Explicit_()
    :
    attributes{YType::str, "attributes"},
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    non_revertive{YType::empty, "non-revertive"},
    segment_routing{YType::empty, "segment-routing"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "explicit"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::~Explicit_()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_data() const
{
    return attributes.is_set
	|| identifier.is_set
	|| name.is_set
	|| non_revertive.is_set
	|| segment_routing.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "attributes" || name == "identifier" || name == "name" || name == "non-revertive" || name == "segment-routing" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::List()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    non_revertive{YType::empty, "non-revertive"},
    pce{YType::empty, "pce"},
    segment_routing{YType::empty, "segment-routing"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "list"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::~List()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| identifier.is_set
	|| name.is_set
	|| non_revertive.is_set
	|| pce.is_set
	|| segment_routing.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "address" || name == "attributes" || name == "identifier" || name == "name" || name == "non-revertive" || name == "pce" || name == "segment-routing" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Working()
    :
    id{YType::uint32, "id"}
    	,
    dynamic(nullptr) // presence node
	,explicit_(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_>())
	,segment_routing(nullptr) // presence node
{
    explicit_->parent = this;

    yang_name = "working"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::~Working()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::has_data() const
{
    return id.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_>();
        }
        return explicit_;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "explicit" || name == "segment-routing" || name == "id")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Dynamic()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    pce{YType::empty, "pce"},
    sticky{YType::empty, "sticky"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth>())
	,segment_routing(nullptr) // presence node
{
    bandwidth->parent = this;

    yang_name = "dynamic"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| pce.is_set
	|| sticky.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "segment-routing" || name == "address" || name == "attributes" || name == "lockdown" || name == "pce" || name == "sticky" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::SegmentRouting()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    pce{YType::empty, "pce"},
    sticky{YType::empty, "sticky"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "segment-routing"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| pce.is_set
	|| sticky.is_set
	|| verbatim.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attributes" || name == "lockdown" || name == "pce" || name == "sticky" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Explicit_()
    :
    attributes{YType::str, "attributes"},
    identifier{YType::uint16, "identifier"},
    lockdown{YType::empty, "lockdown"},
    name{YType::str, "name"},
    segment_routing{YType::empty, "segment-routing"},
    sticky{YType::empty, "sticky"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "explicit"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::~Explicit_()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::has_data() const
{
    return attributes.is_set
	|| identifier.is_set
	|| lockdown.is_set
	|| name.is_set
	|| segment_routing.is_set
	|| sticky.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "attributes" || name == "identifier" || name == "lockdown" || name == "name" || name == "segment-routing" || name == "sticky" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::SegmentRouting()
    :
    lockdown{YType::empty, "lockdown"},
    sticky{YType::empty, "sticky"}
{

    yang_name = "segment-routing"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_data() const
{
    return lockdown.is_set
	|| sticky.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockdown" || name == "sticky")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    cost_limit{YType::uint32, "cost-limit"},
    hop_limit{YType::uint8, "hop-limit"},
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::has_data() const
{
    return cost_limit.is_set
	|| hop_limit.is_set
	|| metric.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "cost-limit" || name == "hop-limit" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::has_data() const
{
    return adjacency.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::Priority()
    :
    hold_priority{YType::uint8, "hold-priority"},
    setup_priority{YType::uint8, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::RecordRoute()
{

    yang_name = "record-route"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::~RecordRoute()
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::RecordRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Tunnel_::NetworkId::NetworkId()
    :
    id{YType::uint16, "id"},
    nexthop{YType::str, "nexthop"},
    qos{YType::str, "qos"},
    weight{YType::uint16, "weight"}
{

    yang_name = "network-id"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::NetworkId::~NetworkId()
{
}

bool Native::Interface::Tunnel::Tunnel_::NetworkId::has_data() const
{
    return id.is_set
	|| nexthop.is_set
	|| qos.is_set
	|| weight.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::NetworkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(qos.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::NetworkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::NetworkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::NetworkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::NetworkId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::NetworkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::NetworkId::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::NetworkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "nexthop" || name == "qos" || name == "weight")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::PathMtuDiscovery()
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Tunnel_::Protection::Protection()
    :
    ipsec(std::make_shared<Native::Interface::Tunnel::Tunnel_::Protection::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "protection"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Protection::~Protection()
{
}

bool Native::Interface::Tunnel::Tunnel_::Protection::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Tunnel::Tunnel_::Protection::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Tunnel_::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Tunnel_::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::Ipsec()
    :
    ikev2_profile{YType::str, "ikev2-profile"},
    profile{YType::str, "profile"}
{

    yang_name = "ipsec"; yang_parent_name = "protection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::~Ipsec()
{
}

bool Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::has_data() const
{
    return ikev2_profile.is_set
	|| profile.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Protection::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikev2-profile" || name == "profile")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Rbscp::Rbscp()
    :
    ack_split{YType::uint8, "ack-split"},
    delay{YType::empty, "delay"},
    input_drop{YType::uint8, "input-drop"},
    long_drop{YType::empty, "long-drop"},
    report{YType::empty, "report"},
    window_stuff{YType::uint8, "window-stuff"}
{

    yang_name = "rbscp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Rbscp::~Rbscp()
{
}

bool Native::Interface::Tunnel::Tunnel_::Rbscp::has_data() const
{
    return ack_split.is_set
	|| delay.is_set
	|| input_drop.is_set
	|| long_drop.is_set
	|| report.is_set
	|| window_stuff.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Rbscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_split.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(input_drop.yfilter)
	|| ydk::is_set(long_drop.yfilter)
	|| ydk::is_set(report.yfilter)
	|| ydk::is_set(window_stuff.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Rbscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Rbscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_split.is_set || is_set(ack_split.yfilter)) leaf_name_data.push_back(ack_split.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (input_drop.is_set || is_set(input_drop.yfilter)) leaf_name_data.push_back(input_drop.get_name_leafdata());
    if (long_drop.is_set || is_set(long_drop.yfilter)) leaf_name_data.push_back(long_drop.get_name_leafdata());
    if (report.is_set || is_set(report.yfilter)) leaf_name_data.push_back(report.get_name_leafdata());
    if (window_stuff.is_set || is_set(window_stuff.yfilter)) leaf_name_data.push_back(window_stuff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Rbscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Rbscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Rbscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-split")
    {
        ack_split = value;
        ack_split.value_namespace = name_space;
        ack_split.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drop")
    {
        input_drop = value;
        input_drop.value_namespace = name_space;
        input_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-drop")
    {
        long_drop = value;
        long_drop.value_namespace = name_space;
        long_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report")
    {
        report = value;
        report.value_namespace = name_space;
        report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-stuff")
    {
        window_stuff = value;
        window_stuff.value_namespace = name_space;
        window_stuff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Rbscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-split")
    {
        ack_split.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "input-drop")
    {
        input_drop.yfilter = yfilter;
    }
    if(value_path == "long-drop")
    {
        long_drop.yfilter = yfilter;
    }
    if(value_path == "report")
    {
        report.yfilter = yfilter;
    }
    if(value_path == "window-stuff")
    {
        window_stuff.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Rbscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-split" || name == "delay" || name == "input-drop" || name == "long-drop" || name == "report" || name == "window-stuff")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::SrcPort::SrcPort()
    :
    dynamic{YType::empty, "dynamic"},
    port_num{YType::uint16, "port-num"}
{

    yang_name = "src-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::SrcPort::~SrcPort()
{
}

bool Native::Interface::Tunnel::Tunnel_::SrcPort::has_data() const
{
    return dynamic.is_set
	|| port_num.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::SrcPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(port_num.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::SrcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::SrcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::SrcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::SrcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "port-num")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Tun6rd::Tun6rd()
    :
    br{YType::str, "br"},
    prefix{YType::str, "prefix"},
    reverse_map_check{YType::empty, "reverse-map-check"}
    	,
    ipv4(std::make_shared<Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "tun-6rd"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Tun6rd::~Tun6rd()
{
}

bool Native::Interface::Tunnel::Tunnel_::Tun6rd::has_data() const
{
    return br.is_set
	|| prefix.is_set
	|| reverse_map_check.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Interface::Tunnel::Tunnel_::Tun6rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(br.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(reverse_map_check.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Interface::Tunnel::Tunnel_::Tun6rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tun-6rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Tun6rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (br.is_set || is_set(br.yfilter)) leaf_name_data.push_back(br.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (reverse_map_check.is_set || is_set(reverse_map_check.yfilter)) leaf_name_data.push_back(reverse_map_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Tun6rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Tun6rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Interface::Tunnel::Tunnel_::Tun6rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Tun6rd::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Tun6rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "br" || name == "prefix" || name == "reverse-map-check")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::Ipv4()
    :
    prefix_len{YType::uint8, "prefix-len"},
    suffix_len{YType::uint8, "suffix-len"}
{

    yang_name = "ipv4"; yang_parent_name = "tun-6rd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::has_data() const
{
    return prefix_len.is_set
	|| suffix_len.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(suffix_len.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (suffix_len.is_set || is_set(suffix_len.yfilter)) leaf_name_data.push_back(suffix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Tunnel::Tunnel_::Tun6rd::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-len" || name == "suffix-len")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Udlr::Udlr()
    :
    address_resolution{YType::empty, "address-resolution"},
    receive_only{YType::str, "receive-only"},
    send_only{YType::str, "send-only"}
{

    yang_name = "udlr"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Udlr::~Udlr()
{
}

bool Native::Interface::Tunnel::Tunnel_::Udlr::has_data() const
{
    return address_resolution.is_set
	|| receive_only.is_set
	|| send_only.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Udlr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_resolution.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Udlr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udlr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Udlr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_resolution.is_set || is_set(address_resolution.yfilter)) leaf_name_data.push_back(address_resolution.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Udlr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Udlr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Udlr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-resolution")
    {
        address_resolution = value;
        address_resolution.value_namespace = name_space;
        address_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Udlr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-resolution")
    {
        address_resolution.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Udlr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-resolution" || name == "receive-only" || name == "send-only")
        return true;
    return false;
}

Native::Interface::Tunnel::Tunnel_::Vlan::Vlan()
    :
    hyphen{YType::empty, "hyphen"},
    id1{YType::uint16, "id1"},
    id2{YType::uint16, "id2"}
{

    yang_name = "vlan"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Tunnel_::Vlan::~Vlan()
{
}

bool Native::Interface::Tunnel::Tunnel_::Vlan::has_data() const
{
    return hyphen.is_set
	|| id1.is_set
	|| id2.is_set;
}

bool Native::Interface::Tunnel::Tunnel_::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(id2.yfilter);
}

std::string Native::Interface::Tunnel::Tunnel_::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Tunnel_::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (id2.is_set || is_set(id2.yfilter)) leaf_name_data.push_back(id2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Tunnel_::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Tunnel_::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Tunnel_::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id2")
    {
        id2 = value;
        id2.value_namespace = name_space;
        id2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Tunnel_::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "id2")
    {
        id2.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Tunnel_::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hyphen" || name == "id1" || name == "id2")
        return true;
    return false;
}

Native::Interface::Tunnel::Udld::Udld()
    :
    port(nullptr) // presence node
{

    yang_name = "udld"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Udld::~Udld()
{
}

bool Native::Interface::Tunnel::Udld::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::Tunnel::Udld::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::Tunnel::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::Tunnel::Udld::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::Tunnel::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::Tunnel::Udld::Port::Port()
    :
    aggressive{YType::empty, "aggressive"},
    disable{YType::empty, "disable"}
{

    yang_name = "port"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Udld::Port::~Port()
{
}

bool Native::Interface::Tunnel::Udld::Port::has_data() const
{
    return aggressive.is_set
	|| disable.is_set;
}

bool Native::Interface::Tunnel::Udld::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Udld::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Udld::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Udld::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Udld::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Udld::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Udld::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Udld::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive" || name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Utd::~Utd()
{
}

bool Native::Interface::Tunnel::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Tunnel::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Tunnel::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Tunnel::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::Vrf::~Vrf()
{
}

bool Native::Interface::Tunnel::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Tunnel::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Tunnel::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Tunnel::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Tunnel::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Tunnel::ZoneMember::has_data() const
{
    return security.is_set;
}

bool Native::Interface::Tunnel::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::Tunnel::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::Vasileft::Vasileft()
    :
    name{YType::uint16, "name"},
    delay{YType::uint32, "delay"},
    description{YType::str, "description"},
    if_state{YType::enumeration, "if-state"},
    keepalive{YType::boolean, "keepalive"},
    load_interval{YType::uint16, "load-interval"},
    mac_address{YType::str, "mac-address"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    shutdown{YType::empty, "shutdown"}
    	,
    access_session(std::make_shared<Native::Interface::Vasileft::AccessSession>())
	,arp(std::make_shared<Native::Interface::Vasileft::Arp>())
	,backup(std::make_shared<Native::Interface::Vasileft::Backup>())
	,bandwidth(std::make_shared<Native::Interface::Vasileft::Bandwidth>())
	,bfd(std::make_shared<Native::Interface::Vasileft::Bfd>())
	,cemoudp(std::make_shared<Native::Interface::Vasileft::Cemoudp>())
	,cws_tunnel(std::make_shared<Native::Interface::Vasileft::CwsTunnel>())
	,dampening(std::make_shared<Native::Interface::Vasileft::Dampening>())
	,domain(std::make_shared<Native::Interface::Vasileft::Domain>())
	,encapsulation(std::make_shared<Native::Interface::Vasileft::Encapsulation>())
	,fair_queue(std::make_shared<Native::Interface::Vasileft::FairQueue>())
	,fair_queue_conf(std::make_shared<Native::Interface::Vasileft::FairQueueConf>())
	,flowcontrol(std::make_shared<Native::Interface::Vasileft::Flowcontrol>())
	,interface_qos(std::make_shared<Native::Interface::Vasileft::InterfaceQos>())
	,ip(std::make_shared<Native::Interface::Vasileft::Ip>())
	,ip_vrf(std::make_shared<Native::Interface::Vasileft::IpVrf>())
	,ipv6(std::make_shared<Native::Interface::Vasileft::Ipv6>())
	,isis(std::make_shared<Native::Interface::Vasileft::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::Vasileft::KeepaliveSettings>())
	,l2protocol_tunnel(nullptr) // presence node
	,logging(std::make_shared<Native::Interface::Vasileft::Logging>())
	,mdix(std::make_shared<Native::Interface::Vasileft::Mdix>())
	,mop(std::make_shared<Native::Interface::Vasileft::Mop>())
	,mpls(std::make_shared<Native::Interface::Vasileft::Mpls>())
	,peer(std::make_shared<Native::Interface::Vasileft::Peer>())
	,pm_path(std::make_shared<Native::Interface::Vasileft::PmPath>())
	,priority_queue(std::make_shared<Native::Interface::Vasileft::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::Vasileft::RcvQueue>())
	,service_policy(std::make_shared<Native::Interface::Vasileft::ServicePolicy>())
	,standby(std::make_shared<Native::Interface::Vasileft::Standby>())
	,storm_control(std::make_shared<Native::Interface::Vasileft::StormControl>())
	,switchport(std::make_shared<Native::Interface::Vasileft::Switchport>())
	,switchport_conf(std::make_shared<Native::Interface::Vasileft::SwitchportConf>())
	,trust(std::make_shared<Native::Interface::Vasileft::Trust>())
	,utd(std::make_shared<Native::Interface::Vasileft::Utd>())
	,vrf(std::make_shared<Native::Interface::Vasileft::Vrf>())
{
    access_session->parent = this;
    arp->parent = this;
    backup->parent = this;
    bandwidth->parent = this;
    bfd->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    dampening->parent = this;
    domain->parent = this;
    encapsulation->parent = this;
    fair_queue->parent = this;
    fair_queue_conf->parent = this;
    flowcontrol->parent = this;
    interface_qos->parent = this;
    ip->parent = this;
    ip_vrf->parent = this;
    ipv6->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    mpls->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    service_policy->parent = this;
    standby->parent = this;
    storm_control->parent = this;
    switchport->parent = this;
    switchport_conf->parent = this;
    trust->parent = this;
    utd->parent = this;
    vrf->parent = this;

    yang_name = "vasileft"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::Vasileft::~Vasileft()
{
}

bool Native::Interface::Vasileft::has_data() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| delay.is_set
	|| description.is_set
	|| if_state.is_set
	|| keepalive.is_set
	|| load_interval.is_set
	|| mac_address.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| shutdown.is_set
	|| (access_session !=  nullptr && access_session->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vasileft::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vasileft::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::Vasileft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vasileft" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::Vasileft::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vasileft::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::Vasileft::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::Vasileft::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Vasileft::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::Vasileft::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::Vasileft::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::Vasileft::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::Vasileft::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::Vasileft::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::Vasileft::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::Vasileft::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::Vasileft::Flowcontrol>();
        }
        return flowcontrol;
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
        auto c = std::make_shared<Native::Interface::Vasileft::HoldQueue>();
        c->parent = this;
        hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::Vasileft::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasileft::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Vasileft::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vasileft::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vasileft::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Vasileft::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::Vasileft::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::Vasileft::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::Vasileft::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::Vasileft::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::Vasileft::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::Vasileft::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::Vasileft::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::Vasileft::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::Vasileft::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Vasileft::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::Vasileft::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::Vasileft::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::Vasileft::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::Vasileft::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Vasileft::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::Vasileft::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vasileft::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    for (auto const & c : hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
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

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vasileft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
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
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-session" || name == "arp" || name == "backup" || name == "bandwidth" || name == "bfd" || name == "cemoudp" || name == "cws-tunnel" || name == "dampening" || name == "domain" || name == "encapsulation" || name == "fair-queue" || name == "fair-queue-conf" || name == "flowcontrol" || name == "hold-queue" || name == "interface_qos" || name == "ip" || name == "ip-vrf" || name == "ipv6" || name == "isis" || name == "keepalive-settings" || name == "l2protocol-tunnel" || name == "logging" || name == "mdix" || name == "mop" || name == "mpls" || name == "peer" || name == "pm-path" || name == "priority-queue" || name == "rcv-queue" || name == "service-policy" || name == "standby" || name == "storm-control" || name == "switchport" || name == "switchport-conf" || name == "trust" || name == "utd" || name == "vrf" || name == "name" || name == "delay" || name == "description" || name == "if-state" || name == "keepalive" || name == "load-interval" || name == "mac-address" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion" || name == "shutdown")
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

Native::Interface::Vasileft::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Arp::~Arp()
{
}

bool Native::Interface::Vasileft::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vasileft::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vasileft::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::Vasileft::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Vasileft::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Vasileft::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::~Backup()
{
}

bool Native::Interface::Vasileft::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vasileft::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vasileft::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vasileft::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vasileft::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vasileft::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::get_children() const
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

void Native::Interface::Vasileft::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Delay::~Delay()
{
}

bool Native::Interface::Vasileft::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vasileft::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::Vasileft::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Interface_::Interface_()
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
    atm_acrsubinterface(std::make_shared<Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Vasileft::Backup::Interface_::has_data() const
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

bool Native::Interface::Vasileft::Backup::Interface_::has_operation() const
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

std::string Native::Interface::Vasileft::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Interface_::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Interface_::get_children() const
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

void Native::Interface::Vasileft::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::Vasileft::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Backup::Load::~Load()
{
}

bool Native::Interface::Vasileft::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vasileft::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::Vasileft::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::Vasileft::Bandwidth::Bandwidth()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::Vasileft::Bandwidth::Receive>())
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Vasileft::Bandwidth::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::Vasileft::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::Vasileft::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Vasileft::Bandwidth::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Vasileft::Bandwidth::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Bandwidth::get_children() const
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

void Native::Interface::Vasileft::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "receive" || name == "kilobits" || name == "qos-reference")
        return true;
    return false;
}

Native::Interface::Vasileft::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Vasileft::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Vasileft::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vasileft::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vasileft::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::Vasileft::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Vasileft::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vasileft::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vasileft::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Bfd::~Bfd()
{
}

bool Native::Interface::Vasileft::Bfd::has_data() const
{
    return false;
}

bool Native::Interface::Vasileft::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vasileft::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vasileft::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Vasileft::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::Vasileft::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vasileft::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vasileft::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vasileft::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vasileft::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::Vasileft::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Vasileft::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Vasileft::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::Vasileft::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::Vasileft::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Vasileft::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Vasileft::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vasileft::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vasileft::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vasileft::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vasileft::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vasileft::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Vasileft::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Vasileft::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::Vasileft::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::Vasileft::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Vasileft::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Dampening::~Dampening()
{
}

bool Native::Interface::Vasileft::Dampening::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Vasileft::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Vasileft::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Vasileft::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Vasileft::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::Vasileft::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "maximum-supressing-time" || name == "start-reusing-time" || name == "start-supressing-time")
        return true;
    return false;
}

Native::Interface::Vasileft::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Dampening::Restart::~Restart()
{
}

bool Native::Interface::Vasileft::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Vasileft::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::Vasileft::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vasileft::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vasileft::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::Vasileft::Domain::Domain()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Domain::~Domain()
{
}

bool Native::Interface::Vasileft::Domain::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Vasileft::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::Vasileft::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Vasileft::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
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

bool Native::Interface::Vasileft::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internet-bound" || name == "name" || name == "path" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::Vasileft::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Vasileft::Encapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Vasileft::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "vasileft"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Vasileft::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Vasileft::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Vasileft::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vasileft::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Vasileft::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Vasileft::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Vasileft::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Vasileft::Encapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Encapsulation::get_children() const
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

void Native::Interface::Vasileft::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vasileft::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vasileft::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "frame-relay" || name == "isl" || name == "ppp" || name == "slip")
        return true;
    return false;
}

Native::Interface::Vasileft::Encapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Vasileft::Encapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Vasileft::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vasileft::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vasileft::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Vasileft::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Vasileft::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::Vasileft::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::Vasileft::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vasileft::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Vasileft::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Vasileft::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vasileft::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vasileft::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vasileft::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasileft::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasileft::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vasileft::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vasileft::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Tunnel::Standby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Tunnel::Standby::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Tunnel::Standby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Tunnel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Tunnel::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Tunnel::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Tunnel::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Tunnel::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Snooping::enable {0, "enable"};

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mode::Udp::ip {0, "ip"};
const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mode::Udp::multipoint {1, "multipoint"};

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::Gre::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mode::Ethernet::Gre::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Interface::Tunnel::Tunnel_::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Interface::Vasileft::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vasileft::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Vasileft::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Vasileft::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasileft::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasileft::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::Vasileft::Backup::Load::Kickout::never {0, "never"};


}
}

